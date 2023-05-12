//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, GADScheduler, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface GADUserPreferences : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    NSMutableArray *_userDefaultsObservers;
    _Bool _signalCollectionObserved;
    double _NPALastUpdatedTimestamp;
    GADScheduler *_timeoutScheduler;
    NSDictionary *_cachedPreferencesConfiguration;
    NSDictionary *_defaultPreferencesConfiguration;
    double _configurationLastUpdatedTimestamp;
    NSArray *_observedNPAKeys;
    NSArray *_observedPreferencesConfigurationKeys;
    NSString *_perAppIdentifier;
    NSString *_perAppIdentifierV2;
    _Bool _preferencesUpdateInProgress;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)resetPAUID;
- (id)PAUIDEnabledByPublisher;
- (void)setPAUIDEnabledByPublisher:(_Bool)arg1;
- (id)PAUIDEnabledByUser;
- (void)setPAUIDEnabledByUser:(_Bool)arg1;
@property(readonly, nonatomic) NSDictionary *appMeasurementConfiguration;
- (id)preferencesConfiguration;
- (id)lockQueuePreferencesConfiguration;
@property(readonly, nonatomic) _Bool identifiersAllowed;
- (_Bool)lockQueueIdentifiersAllowed;
@property(readonly, nonatomic) NSDictionary *PAUIDSignals;
- (void)checkForPAUIDV2Timeout;
- (void)checkForPAUIDTimeout;
- (void)updatePAUIDV2:(id)arg1;
- (void)updatePAUID:(id)arg1;
- (void)updatePAUIDCache;
@property(readonly, nonatomic) NSNumber *NPA;
- (id)internalNPA;
- (void)setPreferencesConfiguration:(id)arg1 timestamp:(double)arg2;
- (void)lockQueueSetPreferencesConfiguration:(id)arg1 timestamp:(double)arg2 defaultPreferencesUpdated:(_Bool)arg3;
- (void)setNPA:(id)arg1 timestamp:(double)arg2;
- (void)handleAppMeasurementConfigurationUserDefaultsDidChange;
- (void)handleNPAUserDefaultsDidChange;
- (void)resetApplicationPrivacyBitsIfUnsetAfterSignalCollection;
- (void)updateDefaultAppMeasurementConfiguration;
- (void)checkForUserDefaultsChange;
- (id)observedUserDefaults;
- (void)updateCachedUserDefaults;
- (id)init;

@end

