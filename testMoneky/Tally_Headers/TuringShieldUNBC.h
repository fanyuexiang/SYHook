//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSString, TuringAppContextUNBC, TuringAutoPostRuleUNBC, TuringDeviceFingerprintUNBC;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, TS_CLASS_ts_service;

@interface TuringShieldUNBC : NSObject
{
    _Bool _fingerprintServiceAlreadyStarted;
    NSObject<TS_CLASS_ts_service> *_innerService;
    NSMutableArray *_delegates;
    NSMutableDictionary *_tasks;
    NSMutableArray *_temporaryTasks;
    NSString *_fingerprintServiceUserID;
    TuringAppContextUNBC *_fingerprintServiceAppContext;
    NSObject<OS_dispatch_source> *_fingerprintServiceTimer;
    TuringDeviceFingerprintUNBC *_cachedFingerprint;
    NSObject<OS_dispatch_semaphore> *_fingerprintQueryLock;
    NSObject<OS_dispatch_queue> *_fingerprintQueryQueue;
    NSLock *_fingerprintOnQueueCounterLock;
    unsigned long long _fingerprintOnQueueCounter;
    TuringAutoPostRuleUNBC *_fingerprintServicePostRule;
    NSDictionary *_blockedFingerprintConfig;
}

+ (void)resetDefaultRequestTimeout;
+ (void)setRequestTimeout:(double)arg1;
+ (double)requestTimeout;
+ (id)standardService;
+ (id)information;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *blockedFingerprintConfig; // @synthesize blockedFingerprintConfig=_blockedFingerprintConfig;
@property(retain, nonatomic) TuringAutoPostRuleUNBC *fingerprintServicePostRule; // @synthesize fingerprintServicePostRule=_fingerprintServicePostRule;
@property(nonatomic) unsigned long long fingerprintOnQueueCounter; // @synthesize fingerprintOnQueueCounter=_fingerprintOnQueueCounter;
@property(retain, nonatomic) NSLock *fingerprintOnQueueCounterLock; // @synthesize fingerprintOnQueueCounterLock=_fingerprintOnQueueCounterLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fingerprintQueryQueue; // @synthesize fingerprintQueryQueue=_fingerprintQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *fingerprintQueryLock; // @synthesize fingerprintQueryLock=_fingerprintQueryLock;
@property(retain) TuringDeviceFingerprintUNBC *cachedFingerprint; // @synthesize cachedFingerprint=_cachedFingerprint;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *fingerprintServiceTimer; // @synthesize fingerprintServiceTimer=_fingerprintServiceTimer;
@property(retain, nonatomic) TuringAppContextUNBC *fingerprintServiceAppContext; // @synthesize fingerprintServiceAppContext=_fingerprintServiceAppContext;
@property(copy, nonatomic) NSString *fingerprintServiceUserID; // @synthesize fingerprintServiceUserID=_fingerprintServiceUserID;
@property(nonatomic) _Bool fingerprintServiceAlreadyStarted; // @synthesize fingerprintServiceAlreadyStarted=_fingerprintServiceAlreadyStarted;
@property(retain, nonatomic) NSMutableArray *temporaryTasks; // @synthesize temporaryTasks=_temporaryTasks;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSObject<TS_CLASS_ts_service> *innerService; // @synthesize innerService=_innerService;
- (void)didReceiveResignActiveNotification:(id)arg1;
- (void)didReceiveBecomeActiveNotification:(id)arg1;
- (double)nextIntervalOfAutoQueryFingerprint;
- (double)getFlexableFingerprintServingInterval;
- (void)markFlexableFingerprintServingForResponse:(id)arg1;
- (_Bool)getFingerprintConfigOnlineWithPostRule:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)getFingerprintConfigWithPostRule:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)reloadFingerprintConfigIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)saveFingerprintConfig:(id)arg1 forRule:(id)arg2;
- (id)loadCurrentFingerprintConfigIfNotExpiredForRule:(id)arg1;
- (_Bool)currentFingerprintConfigIsValidForRule:(id)arg1;
- (id)loadCurrentFingerprintConfigForRule:(id)arg1;
- (_Bool)disablesPrivacySensitiveFingerprintData;
- (void)setDisablesPrivacySensitiveFingerprintData:(_Bool)arg1;
- (void)cleanupFingerprintSettings;
- (_Bool)canPostFingerprint;
- (void)markFingerprintDidPostWithError:(id)arg1;
- (_Bool)getFingerprintWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)getFingerprintOnlineWithPostRule:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)getFingerprintOnlineWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getCachedFingerprintIncludingOudatedData;
- (id)getOfflineFingerprint;
- (void)stopFingerprintService;
- (void)startFingerprintServiceForUserID:(id)arg1 appContext:(id)arg2 postRule:(id)arg3;
- (id)makeFingerprintRecord;
- (void)setupAppContext:(id)arg1;
- (void)stopRiskDetecting;
- (void)startRiskDetectingWithUserID:(id)arg1 withPostRule:(id)arg2;
- (void)startFingerprintServiceWithUserID:(id)arg1 withPostRule:(id)arg2;
- (void)cancelPostForID:(unsigned long long)arg1;
- (unsigned long long)postRecords:(id)arg1 forRule:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)predictionForResponse:(id)arg1 withRecord:(id)arg2;
- (id)predictionForError:(id)arg1 withRecord:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)postRecords:(id)arg1 forRule:(id)arg2;
- (unsigned long long)postRecord:(id)arg1 forRule:(id)arg2;
- (_Bool)storeRecord:(id)arg1;
- (void)removeRecords:(id)arg1;
- (id)cachedRecordsForSceneID:(unsigned long long)arg1;
- (id)cachedRecords;
- (id)managedAnalysisTaskForSceneID:(unsigned long long)arg1;
- (void)detathManagedAnalysis:(id)arg1;
- (id)analysisTaskForSceneID:(unsigned long long)arg1 withUserID:(id)arg2 policy:(id)arg3;
- (void)setupRecordHandler;
- (id)autoPostRecordIfNeeded:(id)arg1;
- (void)resampleRecord:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initForName:(id)arg1;

@end

