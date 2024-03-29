//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUNativeExpressRewardedVideoAdDelegate-Protocol.h"
#import "BURewardedVideoAdDelegate-Protocol.h"

@class ABUCsjRewardedVideoAdapter, NSString;

@interface RewardVideoAgainDelegate : NSObject <BURewardedVideoAdDelegate, BUNativeExpressRewardedVideoAdDelegate>
{
    ABUCsjRewardedVideoAdapter *_adapter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak ABUCsjRewardedVideoAdapter *adapter; // @synthesize adapter=_adapter;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(id)arg1 verify:(_Bool)arg2;
- (void)nativeExpressRewardedVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressRewardedVideoAdDidClickSkip:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidClick:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidClose:(id)arg1;
- (void)nativeExpressRewardedVideoAdWillClose:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidVisible:(id)arg1;
- (void)nativeExpressRewardedVideoAdWillVisible:(id)arg1;
- (void)rewardedVideoAdCallback:(id)arg1 withType:(unsigned long long)arg2;
- (void)rewardedVideoAdServerRewardDidSucceed:(id)arg1 verify:(_Bool)arg2;
- (void)rewardedVideoAdDidClickSkip:(id)arg1;
- (void)rewardedVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdDidClick:(id)arg1;
- (void)rewardedVideoAdDidClose:(id)arg1;
- (void)rewardedVideoAdWillClose:(id)arg1;
- (void)rewardedVideoAdDidVisible:(id)arg1;
- (void)rewardedVideoAdWillVisible:(id)arg1;
- (void)rewardedVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdVideoDidLoad:(id)arg1;
- (void)rewardedVideoAdDidLoad:(id)arg1;
- (id)initWithAdapter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

