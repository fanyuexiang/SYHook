//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSJApp : NSObject
{
    NSString *_appID;
    NSString *_name;
    NSString *_packageName;
    NSString *_version;
    unsigned long long _userfulOpenSDK;
    NSString *_appScheme;
}

+ (id)currentApp;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
@property(nonatomic) unsigned long long userfulOpenSDK; // @synthesize userfulOpenSDK=_userfulOpenSDK;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)getAppScheme;
- (void)loadCurrentAppInfo;
- (id)dictionaryValue;
- (id)init;

@end

