//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMAlarm, APMPersistedConfig;

@interface APMSessionReporter : NSObject
{
    APMPersistedConfig *_persistedConfig;
    APMAlarm *_userEngagementTimer;
    double _engagementStartUptime;
    double _freerideEngagementStartUptime;
    _Bool _reportingEnabled;
    double _timeoutSessionInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double timeoutSessionInterval; // @synthesize timeoutSessionInterval=_timeoutSessionInterval;
@property(nonatomic, getter=isReportingEnabled) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
- (void)setSessionID:(id)arg1 withSessionNumber:(id)arg2;
- (void)updatePropertiesForNewSessionStart;
- (long long)cutFreerideEngagementTimeMillis;
- (double)incurredEngagementTime;
- (double)currentClockTime;
- (double)currentUptime;
- (void)rescheduleUserEngagementTimer;
- (void)handleScreenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;
- (void)handleAppWillResignActiveWithScreen:(id)arg1;
- (void)handleAppDidBecomeActive;
- (void)logAppBackgroundEvent:(long long)arg1;
- (long long)logEngagementEventAndReturnTimeWithScreen:(id)arg1 isRedundant:(_Bool)arg2;
- (void)logUserEngagementEvent;
- (void)logSessionStartEvent;
- (id)sessionNumberProperty;
- (id)sessionIDPropertyWithTimestamp:(double)arg1;
- (_Bool)extendSession;
@property(readonly, nonatomic, getter=isSessionExpired) _Bool sessionExpired;
- (_Bool)shouldStartNewSession;
- (void)dealloc;
- (id)initWithPersistedConfig:(id)arg1;

@end
