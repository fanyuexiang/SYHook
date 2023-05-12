//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class BURewardedVideoModel, NSDictionary, NSString, UIView;
@protocol BUNativeExpressRewardedVideoAdDelegate;

@interface BUNativeExpressRewardedVideoAd : BUInterfaceBaseObject <BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
{
    id <BUNativeExpressRewardedVideoAdDelegate> _delegate;
    BUNativeExpressRewardedVideoAd *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUNativeExpressRewardedVideoAd *iteration; // @synthesize iteration=_iteration;
@property(nonatomic) __weak id <BUNativeExpressRewardedVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)nativeExpressRewardedVideoAdDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:(id)arg1;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(id)arg1 verify:(_Bool)arg2;
- (void)nativeExpressRewardedVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressRewardedVideoAdDidClickSkip:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidClick:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidClose:(id)arg1;
- (void)nativeExpressRewardedVideoAdWillClose:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidVisible:(id)arg1;
- (void)nativeExpressRewardedVideoAdWillVisible:(id)arg1;
- (void)nativeExpressRewardedVideoAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(id)arg1;
- (void)nativeExpressRewardedVideoAdCallback:(id)arg1 withType:(unsigned long long)arg2;
- (void)nativeExpressRewardedVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressRewardedVideoAdDidLoad:(id)arg1;
- (id)initWithSlot:(id)arg1 rewardedVideoModel:(id)arg2;
- (id)initWithSlotID:(id)arg1 rewardedVideoModel:(id)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid; // @dynamic adValid;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double expireTimestamp; // @dynamic expireTimestamp;
@property(retain, nonatomic) UIView *expressAdView; // @dynamic expressAdView;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool materialMetaIsFromPreload; // @dynamic materialMetaIsFromPreload;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt; // @dynamic mediaExt;
@property(nonatomic) __weak id <BUNativeExpressRewardedVideoAdDelegate> rewardPlayAgainInteractionDelegate; // @dynamic rewardPlayAgainInteractionDelegate;
@property(retain, nonatomic) BURewardedVideoModel *rewardedVideoModel; // @dynamic rewardedVideoModel;
@property(readonly) Class superclass;

@end

