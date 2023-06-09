//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WPKSetup : NSObject
{
}

+ (void)setCrashRateUploadUrl:(id)arg1;
+ (void)setValidateUrl:(id)arg1;
+ (void)setLogUploadUrl:(id)arg1;
+ (void)setOnInactiveMonitorFindCallback:(CDUnknownBlockType)arg1;
+ (void)setWPKReporterMonitorIntervalSecs:(unsigned int)arg1;
+ (void)disableWPKReporter;
+ (void)activeWPKReporter;
+ (_Bool)isWPKReporterActive;
+ (void)enableCallOriginalHandler:(_Bool)arg1;
+ (void)enableLimitForUserReport:(_Bool)arg1;
+ (void)setMegerForUserReport:(unsigned long long)arg1;
+ (_Bool)maxLimitForUserReport;
+ (void)increaseForUserReport;
+ (void)setMaxLimitForUserReport:(int)arg1;
+ (void)reportScriptException:(id)arg1 reason:(id)arg2 stackTrace:(id)arg3 terminateProgram:(_Bool)arg4;
+ (id)threadBlockCheckerWithDelegate:(id)arg1;
+ (void)enableSwapOfCxaThrow;
+ (_Bool)isLastRunningStateBackground;
+ (void)setOOMWritenCallback:(CDUnknownBlockType)arg1;
+ (void)setOOMUseLastUserInfo:(_Bool)arg1;
+ (_Bool)CheckOOMLastLaunch;
+ (void)setFilterModules:(id)arg1;
+ (void)setIgnoreSignalPIPE:(_Bool)arg1;
+ (void)resetContinuousCrashCount;
+ (long long)continuousCrashCount;
+ (_Bool)crashedLastLaunch;
+ (void)setIsEncryptLog:(_Bool)arg1;
+ (void)useIntlServices:(_Bool)arg1;
+ (void)setCrashWritenCallback:(CDUnknownBlockType)arg1;
+ (void)sendAllReports;
+ (void)updateBundleVersionToAppExt:(id)arg1;
+ (id)userInfo;
+ (void)setBuildData:(id)arg1;
+ (void)setPageURL:(id)arg1;
+ (void)setAppChannel:(id)arg1;
+ (void)setAppVersion:(id)arg1;
+ (void)setUserInfo:(id)arg1;
+ (void)setUTDID:(id)arg1;
+ (void)setUserIdentifier:(id)arg1;
+ (void)startWithAppName:(id)arg1 buildData:(id)arg2 applicationGroupIdentifier:(id)arg3;
+ (void)startWithAppName:(id)arg1 applicationGroupIdentifier:(id)arg2;
+ (void)startWithAppName:(id)arg1 buildData:(id)arg2;
+ (void)startWithAppName:(id)arg1;
+ (void)enableDebugLog:(_Bool)arg1;

@end

