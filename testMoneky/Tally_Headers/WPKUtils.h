//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WPKUtils : NSObject
{
}

+ (id)apm_ctr_flag;
+ (id)perform:(id)arg1 withClass:(id)arg2 withMethod:(id)arg3 withObjects:(id)arg4;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (void)setCrashUerInfo:(id)arg1;
+ (void)addFlagWithName:(id)arg1 state:(id)arg2;
+ (_Bool)isJC;
+ (_Bool)isHitSamplingRate:(long long)arg1;
+ (id)commonInfo;
+ (id)getApplicationState;
+ (id)freeDiskSpaceMB;
+ (id)usageComparisonFreeMB;
+ (id)appUsedMemoryMB;
+ (id)umid;
+ (void)setUmid:(id)arg1;
+ (id)currentScene;
+ (_Bool)isNotInBlackList:(id)arg1;
+ (void)setCurrentScene:(id)arg1;
+ (id)efsBaseInfo;
+ (id)platformInfo;
+ (void)setPlatformInfo:(id)arg1;
+ (id)buildVersion;
+ (id)appVersion;
+ (void)setAppVersion:(id)arg1 buildVersion:(id)arg2;
+ (unsigned long long)UTCIntervalMS;
+ (void)swizzleMethod:(Class)arg1 originalSelector:(SEL)arg2 swizzledSelector:(SEL)arg3;

@end

