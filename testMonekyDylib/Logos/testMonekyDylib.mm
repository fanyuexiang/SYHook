#line 1 "/Users/pz/Desktop/SYHook/testMonekyDylib/Logos/testMonekyDylib.xm"


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface CustomViewController

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class NSFileManager; @class CustomViewController; 
static void (*_logos_meta_orig$_ungrouped$CustomViewController$classMethod)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static void _logos_meta_method$_ungrouped$CustomViewController$classMethod(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$CustomViewController$newMethod$(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST, SEL, NSString*); static id _logos_method$_ungrouped$CustomViewController$newProperty(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$CustomViewController$setNewProperty$(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST, SEL, id); static NSString* (*_logos_orig$_ungrouped$CustomViewController$getMyName)(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST, SEL); static NSString* _logos_method$_ungrouped$CustomViewController$getMyName(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST, SEL); static NSURL * (*_logos_orig$_ungrouped$NSFileManager$containerURLForSecurityApplicationGroupIdentifier$)(_LOGOS_SELF_TYPE_NORMAL NSFileManager* _LOGOS_SELF_CONST, SEL, NSString *); static NSURL * _logos_method$_ungrouped$NSFileManager$containerURLForSecurityApplicationGroupIdentifier$(_LOGOS_SELF_TYPE_NORMAL NSFileManager* _LOGOS_SELF_CONST, SEL, NSString *); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$CustomViewController(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("CustomViewController"); } return _klass; }
#line 18 "/Users/pz/Desktop/SYHook/testMonekyDylib/Logos/testMonekyDylib.xm"



static void _logos_meta_method$_ungrouped$CustomViewController$classMethod(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
	HBLogDebug(@"+[<CustomViewController: %p> classMethod]", self);

	_logos_meta_orig$_ungrouped$CustomViewController$classMethod(self, _cmd);
}


static void _logos_method$_ungrouped$CustomViewController$newMethod$(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSString* output){
    NSLog(@"This is a new method : %@", output);
}


static id _logos_method$_ungrouped$CustomViewController$newProperty(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return objc_getAssociatedObject(self, @selector(newProperty));
}


static void _logos_method$_ungrouped$CustomViewController$setNewProperty$(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id value) {
    objc_setAssociatedObject(self, @selector(newProperty), value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}


static NSString* _logos_method$_ungrouped$CustomViewController$getMyName(_LOGOS_SELF_TYPE_NORMAL CustomViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
	HBLogDebug(@"-[<CustomViewController: %p> getMyName]", self);
    
    NSString* password = MSHookIvar<NSString*>(self,"_password");
    
    NSLog(@"password:%@", password);
    
    [_logos_static_class_lookup$CustomViewController() classMethod];
    
    [self newMethod:@"output"];
    
    self.newProperty = @"newProperty";
    
    NSLog(@"newProperty : %@", self.newProperty);

	return _logos_orig$_ungrouped$CustomViewController$getMyName(self, _cmd);
}






















static NSURL * _logos_method$_ungrouped$NSFileManager$containerURLForSecurityApplicationGroupIdentifier$(_LOGOS_SELF_TYPE_NORMAL NSFileManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSString * groupIdentifier){







    
    NSString* appGroupName = @"0A849C8E-757E-4C18-BE18-385EAD73C8B1"; 
    NSString* AppGroupPathRoot = @"/private/var/mobile/Containers/Shared/AppGroup/";

    NSString* fullAppGroupPath = [AppGroupPathRoot stringByAppendingPathComponent: appGroupName];
    [self createDirectoryAtPath:fullAppGroupPath withIntermediateDirectories:YES attributes:nil error:nil];
    NSURL* hookedAppGroupUrl = [NSURL fileURLWithPath:fullAppGroupPath];
    
    return hookedAppGroupUrl;
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$CustomViewController = objc_getClass("CustomViewController"); Class _logos_metaclass$_ungrouped$CustomViewController = object_getClass(_logos_class$_ungrouped$CustomViewController); MSHookMessageEx(_logos_metaclass$_ungrouped$CustomViewController, @selector(classMethod), (IMP)&_logos_meta_method$_ungrouped$CustomViewController$classMethod, (IMP*)&_logos_meta_orig$_ungrouped$CustomViewController$classMethod);{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSString*), strlen(@encode(NSString*))); i += strlen(@encode(NSString*)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$CustomViewController, @selector(newMethod:), (IMP)&_logos_method$_ungrouped$CustomViewController$newMethod$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$CustomViewController, @selector(newProperty), (IMP)&_logos_method$_ungrouped$CustomViewController$newProperty, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$CustomViewController, @selector(setNewProperty:), (IMP)&_logos_method$_ungrouped$CustomViewController$setNewProperty$, _typeEncoding); }MSHookMessageEx(_logos_class$_ungrouped$CustomViewController, @selector(getMyName), (IMP)&_logos_method$_ungrouped$CustomViewController$getMyName, (IMP*)&_logos_orig$_ungrouped$CustomViewController$getMyName);Class _logos_class$_ungrouped$NSFileManager = objc_getClass("NSFileManager"); MSHookMessageEx(_logos_class$_ungrouped$NSFileManager, @selector(containerURLForSecurityApplicationGroupIdentifier:), (IMP)&_logos_method$_ungrouped$NSFileManager$containerURLForSecurityApplicationGroupIdentifier$, (IMP*)&_logos_orig$_ungrouped$NSFileManager$containerURLForSecurityApplicationGroupIdentifier$);} }
#line 102 "/Users/pz/Desktop/SYHook/testMonekyDylib/Logos/testMonekyDylib.xm"
