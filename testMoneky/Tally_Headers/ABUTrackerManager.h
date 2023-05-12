//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABUTrackerConfig, ABUTrackerUploader, NSMutableArray, NSString;
@protocol ABUTrackerEventLocalStorage;

@interface ABUTrackerManager : NSObject
{
    _Bool _needCheckLocal;
    _Bool _taskDealing;
    ABUTrackerConfig *_config;
    long long _currentSize;
    NSString *_timerIdentifier;
    ABUTrackerUploader *_uploader;
    id <ABUTrackerEventLocalStorage> _storage;
    long long _startConditionOnce;
    NSMutableArray *_taskWaitingQueue;
    void *_queueKey;
}

+ (void)setConfig:(id)arg1;
+ (id)config;
+ (void)updateTrackerConfig:(CDUnknownBlockType)arg1;
+ (void)setupTrackerWithConfig:(CDUnknownBlockType)arg1 andEventClasses:(Class)arg2;
+ (void)setupTrackerWithConfig:(CDUnknownBlockType)arg1;
+ (void)setup;
+ (id)_managers;
+ (id)managerWithEventClass:(Class)arg1;
- (void).cxx_destruct;
@property(nonatomic) void *queueKey; // @synthesize queueKey=_queueKey;
@property(nonatomic) _Bool taskDealing; // @synthesize taskDealing=_taskDealing;
@property(retain, nonatomic) NSMutableArray *taskWaitingQueue; // @synthesize taskWaitingQueue=_taskWaitingQueue;
@property(nonatomic) long long startConditionOnce; // @synthesize startConditionOnce=_startConditionOnce;
@property(retain, nonatomic) id <ABUTrackerEventLocalStorage> storage; // @synthesize storage=_storage;
@property(retain, nonatomic) ABUTrackerUploader *uploader; // @synthesize uploader=_uploader;
@property(nonatomic) _Bool needCheckLocal; // @synthesize needCheckLocal=_needCheckLocal;
@property(copy, nonatomic) NSString *timerIdentifier; // @synthesize timerIdentifier=_timerIdentifier;
@property(nonatomic) long long currentSize; // @synthesize currentSize=_currentSize;
@property(retain, nonatomic) ABUTrackerConfig *config; // @synthesize config=_config;
- (id)operationQueue;
- (void)_dealTask:(CDUnknownBlockType)arg1;
- (void)_dealNextTask;
- (void)_addTaskToWaitingQueue:(CDUnknownBlockType)arg1;
- (void)_clearLocalDatas;
- (void)_uploadEventByCondition:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)_triggerEventUploadByCondition:(unsigned long long)arg1;
- (void)_increaseTrackCount;
- (void)_enterBackground;
- (void)_changeConditionEnterBackgroundWithStatus:(_Bool)arg1;
- (void)_changeConditionBatchIntervalWithStatus:(_Bool)arg1;
- (void)_changeConditionBatchSizeWithStatus:(_Bool)arg1;
- (void)_addCondition:(unsigned long long)arg1;
- (void)_removeCondition:(unsigned long long)arg1;
- (void)triggerUpload;
- (void)setListenerWithAction:(CDUnknownBlockType)arg1;
- (void)trackEvent:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)updateTrackerConfig:(id)arg1;
- (id)init;

@end
