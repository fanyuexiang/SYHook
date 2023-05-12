//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABUMediationSlotConfig, NSMutableDictionary, NSMutableSet;
@protocol ABUAdLoaderDelegate;

@interface ABUAdLoader : NSObject
{
    _Bool _isLoading;
    int _logType;
    id <ABUAdLoaderDelegate> _delegate;
    id _adBridge;
    NSMutableDictionary *_loadConfigAndParams;
    NSMutableDictionary *_loadIDs;
    NSMutableSet *_waitingCallbackLoadIds;
    ABUMediationSlotConfig *_mediationSlotConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABUMediationSlotConfig *mediationSlotConfig; // @synthesize mediationSlotConfig=_mediationSlotConfig;
@property(retain, nonatomic) NSMutableSet *waitingCallbackLoadIds; // @synthesize waitingCallbackLoadIds=_waitingCallbackLoadIds;
@property(retain, nonatomic) NSMutableDictionary *loadIDs; // @synthesize loadIDs=_loadIDs;
@property(retain, nonatomic) NSMutableDictionary *loadConfigAndParams; // @synthesize loadConfigAndParams=_loadConfigAndParams;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int logType; // @synthesize logType=_logType;
@property(nonatomic) __weak id adBridge; // @synthesize adBridge=_adBridge;
@property(nonatomic) __weak id <ABUAdLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unbindLoadIDWithAdapter:(id)arg1;
- (id)loadIDWithAdapter:(id)arg1;
- (void)bindLoadID:(id)arg1 toAdapter:(id)arg2;
- (id)formatLoadError:(id)arg1 withAdapter:(id)arg2;
- (id)verifyLoadingExtWithExt:(id)arg1;
- (id)adapterWithMediaSlotConfig:(id)arg1 andLoadId:(id)arg2 andParam:(id)arg3;
- (void)willLoadMediaAdUsingRules:(id)arg1 withMediaSlotConfig:(id)arg2;
- (_Bool)isValidAdapter:(id)arg1 mediaSlotConfig:(id)arg2;
- (void)beginLoadMediaAdIfNeededWithConfig:(id)arg1 andParam:(id)arg2 loadAction:(CDUnknownBlockType)arg3;
- (id)notifyMediaLoadWillBeginWithConfig:(id)arg1 andGroupParam:(id)arg2 loadParam:(id)arg3;
- (void)notifyMediaLoadFailedWithLoadID:(id)arg1 andError:(id)arg2 ext:(id)arg3;
- (void)notifyMediaLoadSuccessWithLoadID:(id)arg1 andAdPackage:(id)arg2;
- (void)_notifyLoadFinishWithParam:(id)arg1 andLoadID:(id)arg2 timeout:(_Bool)arg3;
- (_Bool)_getConfigAndParamByLoadId:(id)arg1 clear:(_Bool)arg2 config:(id *)arg3 param:(id *)arg4;
- (void)loadAdsWithConfigs:(id)arg1 limitSeconds:(double)arg2 param:(id)arg3 ext:(id)arg4;
- (id)initWithMediationSlotConfig:(id)arg1 andDelegate:(id)arg2;
- (id)init;

@end

