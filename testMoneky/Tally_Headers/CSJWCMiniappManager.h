//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJWCApiProtocol-Protocol.h"

@class NSString;

@interface CSJWCMiniappManager : NSObject <CSJWCApiProtocol>
{
}

+ (void)pcsj_wcMiniappInitializeStatsTrackerWithMiniappInfo:(id)arg1 success:(_Bool)arg2;
+ (_Bool)pcsj_validWCMiniappQueriesSchemes;
+ (id)pcsj_wcMiniappTypeWithMeta:(id)arg1 success:(_Bool)arg2;
+ (id)pcsj_urlWithString:(id)arg1;
+ (void)pcsj_wcMiniappBackupActionWithModel:(id)arg1 context:(id)arg2 success:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)pcsj_wcMiniappLinkSchemeWithResponse:(id)arg1;
+ (_Bool)pcsj_handleWCMiniappSchemeActionWithModel:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)pcsj_wcMiniappOpenSDKWithResponse:(id)arg1;
+ (void)pcsj_launchMiniappWithInfo:(id)arg1 launchInfo:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (void)pcsj_launchMiniappWithLaunchInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)pcsj_openSDKRegisterAppWithInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (_Bool)pcsj_handleWCMiniappOpenSDKActionWithModel:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)validWCOpenSDK;
+ (_Bool)handleWCMiniappActionWithModel:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)manager;
- (id)mutableCopy;
- (id)copy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long miniProgramType;
@property(copy, nonatomic) NSString *path;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *userName;

@end

