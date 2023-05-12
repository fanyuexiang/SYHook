//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MobClickApp : NSObject
{
    _Bool _crashReportEnabled;
    _Bool _autoPageEnabled;
    double _logSendInterval;
    _Bool _appCrashedHandlerInstalled;
    unsigned long long _scenarioType;
    NSString *_appVersion;
    NSString *_wrapperType;
    NSString *_wrapperVersion;
    NSString *_vcName;
    NSString *_pageView;
}

+ (id)sessionId;
+ (_Bool)checkScenario:(unsigned long long)arg1;
+ (id)sharedInstance;
@property(copy) NSString *pageView; // @synthesize pageView=_pageView;
@property(copy) NSString *vcName; // @synthesize vcName=_vcName;
@property(copy, nonatomic) NSString *wrapperVersion; // @synthesize wrapperVersion=_wrapperVersion;
@property(copy, nonatomic) NSString *wrapperType; // @synthesize wrapperType=_wrapperType;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned long long scenarioType; // @synthesize scenarioType=_scenarioType;
@property(nonatomic) _Bool appCrashedHandlerInstalled; // @synthesize appCrashedHandlerInstalled=_appCrashedHandlerInstalled;
@property(nonatomic) _Bool autoPageEnabled; // @synthesize autoPageEnabled=_autoPageEnabled;
@property(nonatomic) _Bool crashReportEnabled; // @synthesize crashReportEnabled=_crashReportEnabled;
- (void)noAppKeyException;

@end
