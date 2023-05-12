//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKAPIConfig : NSObject
{
    double _requestTime;
    double _validTime;
    _Bool _loadingPublicConfig;
    _Bool _loadingUserConfig;
    _Bool _publicConfigRequestedWithAppLaunched;
    _Bool _userConfigRequestedWithAppLaunched;
    _Bool _canWithDiversion;
}

+ (void)clearUserAllConfigs;
+ (void)validUserConfigAppVersion;
+ (void)validUserConfigAllAPIRequest:(CDUnknownBlockType)arg1;
+ (void)validUserConfigAPIRequestNext:(long long)arg1 result:(CDUnknownBlockType)arg2;
+ (void)validUserConfigAPIRequest:(long long)arg1 result:(CDUnknownBlockType)arg2;
+ (void)validUserConfigRequest:(CDUnknownBlockType)arg1;
+ (void)requestUserConfig:(CDUnknownBlockType)arg1;
+ (id)userID;
+ (id)userConfigAPIID:(long long)arg1;
+ (void)clearPublicAllConfigs;
+ (void)clearPublicConfigAPICache:(long long)arg1;
+ (void)validPublicConfigAppVersion;
+ (void)validPublicConfigAPIRequestNext:(long long)arg1 result:(CDUnknownBlockType)arg2;
+ (void)validPublicConfigAPIRequest:(long long)arg1 result:(CDUnknownBlockType)arg2;
+ (void)validPublicConfigRequest:(CDUnknownBlockType)arg1;
+ (void)requestPublicConfig:(CDUnknownBlockType)arg1;
+ (id)publicConfigAPIID:(long long)arg1;
+ (id)currentDateTimeIntervalWithString;
+ (id)sharedManager;
+ (void)userConfigAllAPIUpdate;
@property(nonatomic) _Bool canWithDiversion; // @synthesize canWithDiversion=_canWithDiversion;
@property(nonatomic) _Bool userConfigRequestedWithAppLaunched; // @synthesize userConfigRequestedWithAppLaunched=_userConfigRequestedWithAppLaunched;
@property(nonatomic) _Bool publicConfigRequestedWithAppLaunched; // @synthesize publicConfigRequestedWithAppLaunched=_publicConfigRequestedWithAppLaunched;
@property(nonatomic) _Bool loadingUserConfig; // @synthesize loadingUserConfig=_loadingUserConfig;
@property(nonatomic) _Bool loadingPublicConfig; // @synthesize loadingPublicConfig=_loadingPublicConfig;
@property(nonatomic) double validTime; // @synthesize validTime=_validTime;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
- (_Bool)userConfigWithAPINeedRequest:(long long)arg1;
- (double)userConfigSynctms;
- (_Bool)saveUserConfigWithAPI:(long long)arg1 allSyncTms:(id)arg2;
- (_Bool)saveUserConfigWithAPI:(long long)arg1 syncTms:(id)arg2;
- (_Bool)removeUserConfigWithAPI:(long long)arg1;
- (_Bool)saveUserConfigWithAPI:(long long)arg1;
- (_Bool)saveUserConfigWithData:(id)arg1 syncTms:(id)arg2;
- (id)userConfigLocalSyncTms:(long long)arg1;
- (_Bool)publicConfigWithAPINeedRequest:(long long)arg1;
- (double)publicConfigSynctms;
- (_Bool)savePublicConfigWithAPI:(long long)arg1 syncTms:(id)arg2;
- (_Bool)savePublicConfigWithAPI:(long long)arg1;
- (_Bool)savePublicConfigWithData:(id)arg1 syncTms:(id)arg2;
- (id)init;

@end

