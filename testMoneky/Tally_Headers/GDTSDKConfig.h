//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTSDKConfig : NSObject
{
}

+ (void)setMediaExtData:(id)arg1 overrideOldData:(_Bool)arg2;
+ (void)setExtraUserData:(id)arg1;
+ (void)setPersonalizedState:(long long)arg1;
+ (id)getSDKInfoWithPlacementId:(id)arg1;
+ (id)getBuyerIdWithContext:(id)arg1;
+ (void)forbiddenIDFA:(_Bool)arg1;
+ (id)debugSetting;
+ (void)setDebugSetting:(id)arg1;
+ (void)enableDefaultAudioSessionSetting:(_Bool)arg1;
+ (void)setSDKType:(long long)arg1;
+ (void)setChannel:(long long)arg1;
+ (id)sdkVersion;
+ (id)sdkSrc;
+ (void)setSdkSrc:(id)arg1;
+ (void)processionForRegisterWithAppID:(id)arg1 SDKVersion:(id)arg2;
+ (_Bool)registerAppId:(id)arg1;

@end

