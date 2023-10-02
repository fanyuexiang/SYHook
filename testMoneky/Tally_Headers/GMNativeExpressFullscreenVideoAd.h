//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMBaseConversionAd.h"

#import "ABUFullscreenVideoAdDelegate-Protocol.h"
#import "ABUInterstitialProAdDelegate-Protocol.h"
#import "BUNativeExpressFullscreenVideoAdMediationProtocol-Protocol.h"
#import "BUNativeExpressFullscreenVideoAd_MProtocol-Protocol.h"

@class ABUFullscreenVideoAd, ABUInterstitialProAd, BUDictionary, BURewardedVideoModel, NSObject, NSString;
@protocol BUMNativeExpressFullscreenVideoAdDelegate, BUNativeExpressFullscreenVideoAdMediationProtocol;

@interface GMNativeExpressFullscreenVideoAd : GMBaseConversionAd <BUNativeExpressFullscreenVideoAd_MProtocol, BUNativeExpressFullscreenVideoAdMediationProtocol, ABUInterstitialProAdDelegate, ABUFullscreenVideoAdDelegate>
{
    id <BUMNativeExpressFullscreenVideoAdDelegate> _delegate;
    BURewardedVideoModel *_rewardModel;
    ABUInterstitialProAd *_intersitiialProAd;
    ABUFullscreenVideoAd *_fullscreenVideoAd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABUFullscreenVideoAd *fullscreenVideoAd; // @synthesize fullscreenVideoAd=_fullscreenVideoAd;
@property(retain, nonatomic) ABUInterstitialProAd *intersitiialProAd; // @synthesize intersitiialProAd=_intersitiialProAd;
@property(retain, nonatomic) BURewardedVideoModel *rewardModel; // @synthesize rewardModel=_rewardModel;
@property(nonatomic) __weak id <BUMNativeExpressFullscreenVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadAdDataWithMediaSlotConfigIDs:(id)arg1 sign:(long long)arg2;
- (void)fullscreenVideoAdServerRewardDidSucceed:(id)arg1 rewardInfo:(id)arg2 verify:(_Bool)arg3;
- (void)fullscreenVideoAdDidShowFailed:(id)arg1 error:(id)arg2;
- (void)fullscreenVideoAd:(id)arg1 didPlayFinishWithError:(id)arg2;
- (void)fullscreenVideoAdWillPresentFullScreenModal:(id)arg1;
- (void)fullscreenVideoAdDidClose:(id)arg1;
- (void)fullscreenVideoAdDidSkip:(id)arg1;
- (void)fullscreenVideoAdDidClick:(id)arg1;
- (void)fullscreenVideoAdDidVisible:(id)arg1;
- (void)fullscreenVideoAdDidDownLoadVideo:(id)arg1;
- (void)fullscreenVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)fullscreenVideoAdDidLoad:(id)arg1;
- (void)interstitialProAdServerRewardDidSucceed:(id)arg1 rewardInfo:(id)arg2 verify:(_Bool)arg3;
- (void)interstitialProAdWillPresentFullScreenModal:(id)arg1;
- (void)interstitialProAdDidClose:(id)arg1;
- (void)interstitialProAdDidSkip:(id)arg1;
- (void)interstitialProAdDidClick:(id)arg1;
- (void)interstitialProAdDidShowFailed:(id)arg1 error:(id)arg2;
- (void)interstitialProAdDidVisible:(id)arg1;
- (void)interstitialProAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)interstitialProAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialProAdDidDownLoadVideo:(id)arg1;
- (void)interstitialProAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialProAdDidLoad:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading;
- (id)getAdLoadInfoList;
- (id)waterfallFillFailMessages;
- (id)getMediaExtraInfo;
- (id)cacheRitList;
- (id)multiBiddingEcpmInfos;
- (id)getCurrentBestEcpmInfo;
- (id)getShowEcpmInfo;
- (void)addParam:(id)arg1 withKey:(id)arg2;
@property(readonly, nonatomic) _Bool isReady;
@property(readonly, nonatomic) NSObject<BUNativeExpressFullscreenVideoAdMediationProtocol> *mediation;
- (double)getExpireTimestamp;
- (_Bool)showAdFromRootViewController:(id)arg1 ritSceneDescribe:(id)arg2;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (id)getAdCreativeToken;
- (void)loadAdData;
- (id)initWithSlot:(id)arg1;
- (id)initWithSlotID:(id)arg1;
@property(readonly, nonatomic) double expireTimestamp;
@property(readonly, nonatomic) _Bool materialMetaIsFromPreload;
@property(readonly, copy, nonatomic) BUDictionary *mediaExt;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (id)getABUxxxAd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

