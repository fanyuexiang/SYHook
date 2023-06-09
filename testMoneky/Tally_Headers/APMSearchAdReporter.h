//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMAlarm, APMPersistedConfig;

@interface APMSearchAdReporter : NSObject
{
    APMAlarm *_searchAdReporterAlarm;
    APMPersistedConfig *_persistedConfig;
    _Bool _searchAdReporterEnabled;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSearchAdReporterEnabled) _Bool searchAdReporterEnabled; // @synthesize searchAdReporterEnabled=_searchAdReporterEnabled;
- (void)fetchAttributionDetails;
- (void)logCampaignEventWithSearchAdCampaign:(_Bool)arg1 campaign:(id)arg2 term:(id)arg3;
- (id)adClientInstance;
- (void)cancelScheduling;
- (void)scheduleSearchAdReport;
- (void)maybeLogIAdCampaignEvent;
- (void)dealloc;
- (void)start;
- (id)initWithWorkerQueue:(id)arg1 persistedConfig:(id)arg2;

@end

