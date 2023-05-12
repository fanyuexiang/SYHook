//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface HMDBUCrashReportInfo : NSObject
{
    int _crashType;
    double _memoryUsage;
    double _freeMemoryUsage;
    double _freeMemoryPercent;
    double _freeDiskUsage;
    unsigned long long _isLaunchCrash;
    unsigned long long _isBackground;
    NSDictionary *_operationTrace;
    NSDictionary *_filters;
    NSDictionary *_customParams;
    NSString *_access;
    NSString *_lastScene;
    NSString *_business;
    double _time;
    NSString *_appVersion;
    NSString *_bundleVersion;
    NSString *_name;
    NSString *_reason;
    NSString *_sessionID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) int crashType; // @synthesize crashType=_crashType;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *lastScene; // @synthesize lastScene=_lastScene;
@property(copy, nonatomic) NSString *access; // @synthesize access=_access;
@property(copy, nonatomic) NSDictionary *customParams; // @synthesize customParams=_customParams;
@property(copy, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSDictionary *operationTrace; // @synthesize operationTrace=_operationTrace;
@property(nonatomic) unsigned long long isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) unsigned long long isLaunchCrash; // @synthesize isLaunchCrash=_isLaunchCrash;
@property(nonatomic) double freeDiskUsage; // @synthesize freeDiskUsage=_freeDiskUsage;
@property(nonatomic) double freeMemoryPercent; // @synthesize freeMemoryPercent=_freeMemoryPercent;
@property(nonatomic) double freeMemoryUsage; // @synthesize freeMemoryUsage=_freeMemoryUsage;
@property(nonatomic) double memoryUsage; // @synthesize memoryUsage=_memoryUsage;

@end

