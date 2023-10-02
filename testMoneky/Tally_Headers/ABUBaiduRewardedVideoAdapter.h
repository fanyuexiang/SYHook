//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUBaidu_BaiduMobAdRewardVideoDelegate-Protocol.h"
#import "BUMCustomRewardedVideoAdapter-Protocol.h"

@class NSDictionary, NSString;
@protocol ABUBaidu_BaiduMobAdRewardVideo, BUMCustomConfigAdapter, BUMCustomRewardedVideoAdapterBridge;

@interface ABUBaiduRewardedVideoAdapter : NSObject <ABUBaidu_BaiduMobAdRewardVideoDelegate, BUMCustomRewardedVideoAdapter>
{
    _Bool _hasRewardEarned;
    NSObject<ABUBaidu_BaiduMobAdRewardVideo> *_rewardedAd;
    long long _biddingType;
}

- (void).cxx_destruct;
@property(nonatomic) long long biddingType; // @synthesize biddingType=_biddingType;
@property(nonatomic) _Bool hasRewardEarned; // @synthesize hasRewardEarned=_hasRewardEarned;
@property(retain, nonatomic) NSObject<ABUBaidu_BaiduMobAdRewardVideo> *rewardedAd; // @synthesize rewardedAd=_rewardedAd;
- (void)rewardedVideoAdDidClick:(id)arg1 withPlayingProgress:(double)arg2;
- (void)rewardedVideoAdDidClose:(id)arg1 withPlayingProgress:(double)arg2;
- (void)rewardedVideoAdDidSkip:(id)arg1 withPlayingProgress:(double)arg2;
- (void)rewardedVideoAdRewardDidSuccess:(id)arg1 verify:(_Bool)arg2;
- (void)rewardedVideoAdDidPlayFinish:(id)arg1;
- (void)rewardedVideoAdShowFailed:(id)arg1 withError:(int)arg2;
- (void)rewardedVideoAdDidStarted:(id)arg1;
- (void)rewardedVideoAdLoadFailed:(id)arg1 withError:(int)arg2;
- (void)rewardedVideoAdLoaded:(id)arg1;
- (void)rewardedAdLoadFail:(id)arg1;
- (void)rewardedAdLoadSuccess:(id)arg1;
- (void)_setupWithWithSlotID:(id)arg1 andParameter:(id)arg2;
- (id)serverBiddingTokenWithParams:(id)arg1 error:(id *)arg2;
- (void)didReceiveBidResult:(id)arg1;
- (_Bool)showAdFromRootViewController:(id)arg1 parameter:(id)arg2;
- (void)loadRewardedVideoAdWithSlotID:(id)arg1 andParameter:(id)arg2;
- (CDStruct_2ec95fd7)mediatedAdStatus;
- (_Bool)enablePreloadWhenCurrentIsDisplay;

// Remaining properties
@property(nonatomic) __weak id <BUMCustomRewardedVideoAdapterBridge> bridge;
@property(retain, nonatomic) id <BUMCustomConfigAdapter> configAdapter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *extroInfoMap;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCustomAdapter;
@property(readonly) Class superclass;

@end

