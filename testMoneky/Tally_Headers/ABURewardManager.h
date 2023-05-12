//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABUAdapterRewardAdInfo, ABURewardManagerConfig, NSString;
@protocol OS_dispatch_queue;

@interface ABURewardManager : NSObject
{
    _Bool _canceled;
    _Bool _allowCallback;
    ABURewardManagerConfig *_config;
    double _lastRequestTime;
    ABUAdapterRewardAdInfo *_reward;
    CDUnknownBlockType _complete;
    NSObject<OS_dispatch_queue> *_queue;
    long long _startTime;
    NSString *_transID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *transID; // @synthesize transID=_transID;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool allowCallback; // @synthesize allowCallback=_allowCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain) ABUAdapterRewardAdInfo *reward; // @synthesize reward=_reward;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(retain, nonatomic) ABURewardManagerConfig *config; // @synthesize config=_config;
- (void)_backupRewardInNeeded;
- (void)_dealCallback:(_Bool)arg1;
- (void)_requestReward;
- (void)_requestRewardIfNeededByRetryWithTimes:(long long)arg1;
- (void)_requestRewardIfNeededByAdnVerify;
- (void)__requestRewardIfNeededByCallback:(_Bool)arg1;
- (void)_requestRewardIfNeededByVideoComplete;
- (void)_requestRewardIfNeededByTimer;
- (long long)tag;
- (void)cancel;
- (void)requestRewardIfNeededWithReward:(id)arg1 by:(unsigned long long)arg2;
- (id)initWithConfigBuilder:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end
