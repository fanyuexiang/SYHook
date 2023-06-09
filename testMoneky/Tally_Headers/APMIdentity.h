//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMPersistedConfig, NSDate, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface APMIdentity : NSObject
{
    NSDate *_lastAppInstanceIDUpdateTimestamp;
    unsigned long long _appleConsentStatus;
    NSString *_resettableDeviceID;
    _Bool _limitedAdTracking;
    NSString *_identifierForVendorString;
    APMPersistedConfig *_persistedConfig;
    NSString *_appIDFromGMP;
    NSString *_appIDFromAdMob;
    NSNumber *_isIDFVCollectionEnabledNumber;
    NSString *_firebaseInstallationID;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_ephemeralAppInstanceID;
    NSString *_appID;
    NSString *_appVersion;
    NSNumber *_appVersionMajor;
    NSNumber *_appVersionMinor;
    NSNumber *_appVersionRelease;
    long long _devCertHash;
}

+ (id)numericFieldsFromAppVersionNumeric:(id)arg1;
+ (long long)appMeasurementLibraryVersion;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) NSString *firebaseInstallationID; // @synthesize firebaseInstallationID=_firebaseInstallationID;
@property(readonly, nonatomic) long long devCertHash; // @synthesize devCertHash=_devCertHash;
@property(readonly, nonatomic) NSNumber *appVersionRelease; // @synthesize appVersionRelease=_appVersionRelease;
@property(readonly, nonatomic) NSNumber *appVersionMinor; // @synthesize appVersionMinor=_appVersionMinor;
@property(readonly, nonatomic) NSNumber *appVersionMajor; // @synthesize appVersionMajor=_appVersionMajor;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)resetEphemeralAppInstanceID;
- (void)resetEphemeralAppInstanceIDOnWorkerQueue;
@property(readonly, nonatomic) NSString *ephemeralAppInstanceID;
@property(readonly, nonatomic) NSString *diversionKey;
- (id)randomAppInstanceID;
@property(nonatomic) _Bool shouldSetLastAdvertisingIDResetUserProperty;
- (void)updateIdentifiers;
@property(readonly, nonatomic) NSString *identifierForVendor;
@property(readonly, nonatomic, getter=isFromAppStore) _Bool fromAppStore;
- (void)setAppIDFromAdMob:(id)arg1;
- (void)setAppIDFromGMP:(id)arg1;
@property(readonly, nonatomic) NSString *appIDFromAdMob;
@property(readonly, nonatomic) NSString *appIDFromGMP;
- (id)hashedResettableDeviceID;
- (void)setAppInstanceID:(id)arg1;
@property(readonly, nonatomic) NSString *appInstanceID;
@property(readonly, nonatomic) NSString *resettableDeviceID;
@property(readonly, nonatomic) _Bool limitedAdTracking;
@property(readonly, nonatomic) _Bool hasLimitedAdTracking;
@property(readonly, nonatomic) _Bool iOS14OrAbove;
@property(readonly, nonatomic) unsigned long long appleConsentStatus;
- (void)enforceConsentSettings;
- (id)initWithPersistedConfig:(id)arg1;

@end

