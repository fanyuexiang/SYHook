//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUCsj_BUNativeAdDelegate-Protocol.h"
#import "ABUCsj_BUNativeExpressAdViewDelegate-Protocol.h"
#import "ABUCsj_BUVideoAdViewDelegate-Protocol.h"
#import "ABUCustomNativeAdapter-Protocol.h"
#import "ABU_BUNativeAdsManagerDelegate-Protocol.h"
#import "ABU_BUNativeExpressAdViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol ABUCustomConfigAdapter, ABUCustomNativeAdapterBridge, ABU_BUNativeAdsManager, ABU_BUNativeExpressAdManager;

@interface ABUCsjNativeAdapter : NSObject <ABU_BUNativeAdsManagerDelegate, ABU_BUNativeExpressAdViewDelegate, ABUCsj_BUNativeAdDelegate, ABUCsj_BUNativeExpressAdViewDelegate, ABUCsj_BUVideoAdViewDelegate, ABUCustomNativeAdapter>
{
    id <ABU_BUNativeExpressAdManager> _expressAdManager;
    id <ABU_BUNativeAdsManager> _adManager;
    NSArray *_dislikeWords;
    NSMutableDictionary *_nativeAdMap;
    NSMutableDictionary *_dislikeReportors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dislikeReportors; // @synthesize dislikeReportors=_dislikeReportors;
@property(retain, nonatomic) NSMutableDictionary *nativeAdMap; // @synthesize nativeAdMap=_nativeAdMap;
@property(copy, nonatomic) NSArray *dislikeWords; // @synthesize dislikeWords=_dislikeWords;
@property(retain, nonatomic) id <ABU_BUNativeAdsManager> adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) id <ABU_BUNativeExpressAdManager> expressAdManager; // @synthesize expressAdManager=_expressAdManager;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)videoAdViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)videoAdViewFinishViewDidClick:(id)arg1;
- (void)videoAdViewDidClick:(id)arg1;
- (void)playerDidPlayFinish:(id)arg1;
- (void)videoAdView:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerReadyToPlay:(id)arg1;
- (void)videoAdView:(id)arg1 didLoadFailWithError:(id)arg2;
- (void)nativeAd:(id)arg1 adContainerViewDidRemoved:(id)arg2;
- (void)nativeAd:(id)arg1 dislikeWithReason:(id)arg2;
- (void)nativeExpressAdViewDidRemoved:(id)arg1;
- (void)nativeExpressAdViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)nativeExpressAdViewWillPresentScreen:(id)arg1;
- (void)_addSelectedDislikeWords:(id)arg1 to:(id)arg2;
- (void)nativeExpressAdView:(id)arg1 dislikeWithReason:(id)arg2;
- (void)nativeExpressAdViewPlayerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdView:(id)arg1 stateDidChanged:(long long)arg2;
- (void)nativeExpressAdViewDidClick:(id)arg1;
- (void)nativeExpressAdViewWillShow:(id)arg1;
- (void)nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeAdDidClick:(id)arg1 withView:(id)arg2;
- (void)nativeAdDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)nativeAdDidBecomeVisible:(id)arg1;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
- (void)nativeAdsManager:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdsManagerSuccessToLoad:(id)arg1 nativeAds:(id)arg2;
- (id)_transitionMediaExt:(id)arg1;
- (void)reportVideoEvent:(long long)arg1 forAd:(id)arg2 withParameters:(id)arg3;
- (void)_setupWithSlotID:(id)arg1 andSize:(struct CGSize)arg2 imageSize:(struct CGSize)arg3 parameter:(id)arg4;
- (void)_convertDislikeWordsFromDislikeWords:(id)arg1 to:(id)arg2;
- (id)_convertDislikeWordsFromReasons:(id)arg1 source:(id)arg2;
- (void)reportDislikeAd:(id)arg1 withReasons:(id)arg2;
- (void)registerContainerView:(id)arg1 andClickableViews:(id)arg2 forNativeAd:(id)arg3;
- (void)setRootViewController:(id)arg1 forExpressAdView:(id)arg2;
- (void)setRootViewController:(id)arg1 forNativeAd:(id)arg2;
- (void)renderForExpressAdView:(id)arg1;
- (_Bool)enablePreloadWhenCurrentIsDisplay;
- (id)serverBiddingTokenWithParams:(id)arg1 error:(id *)arg2;
- (void)loadNativeAdWithSlotID:(id)arg1 andSize:(struct CGSize)arg2 imageSize:(struct CGSize)arg3 parameter:(id)arg4;

// Remaining properties
@property(nonatomic) __weak id <ABUCustomNativeAdapterBridge> bridge;
@property(retain, nonatomic) id <ABUCustomConfigAdapter> configAdapter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCustomAdapter;
@property(readonly) Class superclass;

@end

