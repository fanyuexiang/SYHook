//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSCrashReportFilter-Protocol.h"

@class NSString;

@interface WPKCrashReportFilterAppleFmt : NSObject <KSCrashReportFilter>
{
    int _reportStyle;
}

+ (id)filterWithReportStyle:(int)arg1;
+ (void)initialize;
@property(nonatomic) int reportStyle; // @synthesize reportStyle=_reportStyle;
- (id)toAppleFormat:(id)arg1;
- (id)recrashReportString:(id)arg1;
- (id)crashReportString:(id)arg1;
- (id)storageStringForReport:(id)arg1;
- (id)memoryStringForReport:(id)arg1;
- (id)customCrashInfoStringForReport:(id)arg1;
- (id)customUserInfoStringForReport:(id)arg1;
- (id)ucUserActionStringForReport:(id)arg1;
- (id)customHeaderStringForReport:(id)arg1;
- (id)threadListStringForReport:(id)arg1 mainExecutableName:(id)arg2;
- (id)threadStringForThread:(id)arg1 mainExecutableName:(id)arg2;
- (id)userExceptionTrace:(id)arg1;
- (id)stringWithUncaughtExceptionName:(id)arg1 reason:(id)arg2 terminatePrograme:(_Bool)arg3;
- (id)stringWithUncaughtExceptionName:(id)arg1 reason:(id)arg2;
- (id)errorInfoStringForReport:(id)arg1;
- (_Bool)isZombieNSException:(id)arg1;
- (id)JSONForObject:(id)arg1;
- (id)extraInfoStringForReport:(id)arg1 mainExecutableName:(id)arg2;
- (id)crashedThreadCPUStateStringForReport:(id)arg1 cpuArch:(id)arg2;
- (id)binaryImagesStringForReport:(id)arg1;
- (id)headerStringForSystemInfo:(id)arg1 reportID:(id)arg2 crashTime:(id)arg3 report:(id)arg4 wpkConfig:(id)arg5;
- (id)headerStringForReport:(id)arg1;
- (id)cpuArchForReport:(id)arg1;
- (id)mainExecutableNameForReport:(id)arg1;
- (id)crashedThread:(id)arg1;
- (id)binaryImagesReport:(id)arg1;
- (id)crashReport:(id)arg1;
- (id)processReport:(id)arg1;
- (id)infoReport:(id)arg1;
- (id)systemReport:(id)arg1;
- (id)recrashReport:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (id)toCompactUUID:(id)arg1;
- (id)backtraceString:(id)arg1 reportStyle:(int)arg2 mainExecutableName:(id)arg3;
- (id)CPUArchForMajor:(int)arg1 minor:(int)arg2;
- (id)CPUType:(id)arg1;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (int)majorVersion:(id)arg1;
- (id)initWithReportStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

