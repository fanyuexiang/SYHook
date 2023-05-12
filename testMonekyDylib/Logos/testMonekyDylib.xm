// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface CustomViewController

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end

%hook CustomViewController

+ (void)classMethod
{
	%log;

	%orig;
}

%new
-(void)newMethod:(NSString*) output{
    NSLog(@"This is a new method : %@", output);
}

%new
- (id)newProperty {
    return objc_getAssociatedObject(self, @selector(newProperty));
}

%new
- (void)setNewProperty:(id)value {
    objc_setAssociatedObject(self, @selector(newProperty), value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (NSString*)getMyName
{
	%log;
    
    NSString* password = MSHookIvar<NSString*>(self,"_password");
    
    NSLog(@"password:%@", password);
    
    [%c(CustomViewController) classMethod];
    
    [self newMethod:@"output"];
    
    self.newProperty = @"newProperty";
    
    NSLog(@"newProperty : %@", self.newProperty);

	return %orig();
}

%end

//%hook NSURLSession
//
//- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)request
//                            completionHandler:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completionHandler
//{
//    NSLog(@"testhook dataTaskWithRequest:completionHandler:");
//    return %orig(request, completionHandler);
//}
//
//- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)request
//{
//    NSLog(@"testhook dataTaskWithRequest");
//    return %orig(request);
//}
//
//%end

%hook NSFileManager

- (NSURL *)containerURLForSecurityApplicationGroupIdentifier:(NSString *)groupIdentifier{
// method 1: just return a fake name
//    NSString* appGroupName = @"OrigAppGroup";
//    NSString* appGroupName = @"group.com.xxx.yyy.zzz";
//    NSArray *pathList = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
//    NSString *sandboxDocPath = [pathList objectAtIndex:0];
//    NSString *AppGroupPathRoot = sandboxDocPath;

    // method 2: try use real app group path
    NSString* appGroupName = @"0A849C8E-757E-4C18-BE18-385EAD73C8B1"; // got by hook real app
    NSString* AppGroupPathRoot = @"/private/var/mobile/Containers/Shared/AppGroup/";

    NSString* fullAppGroupPath = [AppGroupPathRoot stringByAppendingPathComponent: appGroupName];
    [self createDirectoryAtPath:fullAppGroupPath withIntermediateDirectories:YES attributes:nil error:nil];
    NSURL* hookedAppGroupUrl = [NSURL fileURLWithPath:fullAppGroupPath];
    // file:///private/var/mobile/Containers/Shared/AppGroup/0A849C8E-757E-4C18-BE18-385EAD73C8B1/
    return hookedAppGroupUrl;
}

%end
