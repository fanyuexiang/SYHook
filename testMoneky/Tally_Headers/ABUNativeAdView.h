//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABUCanvasView.h"

#import "ABUNativeAdVideoDelegate-Protocol.h"
#import "ABUNativeAdViewDelegate-Protocol.h"
#import "BUNativeAdMediationProtocol-Protocol.h"
#import "BUNativeAd_MProtocol-Protocol.h"

@class ABUAdPackage, ABUNativeAdsManager, BUAdSlot, BUMCanvasView, BUMVideoAdReporter, BUMaterialMeta, NSObject, NSString, UIView, UIViewController;
@protocol ABUNativeAdVideoDelegate, ABUNativeAdViewDelegate, BUMNativeAdDelegate, BUNativeAdMediationProtocol;

@interface ABUNativeAdView : ABUCanvasView <BUNativeAd_MProtocol, BUNativeAdMediationProtocol, ABUNativeAdViewDelegate, ABUNativeAdVideoDelegate>
{
    UIViewController *_rootViewController;
    _Bool _didMoveToSuperView;
    _Bool _isExpressAd;
    _Bool _alreadyRender;
    _Bool _isAdViewDidCallShow;
    ABUNativeAdsManager *_adManager;
    id <ABUNativeAdViewDelegate> _delegate;
    id <ABUNativeAdVideoDelegate> _videoDelegate;
}

+ (void)setNativeAdViewSet:(id)arg1;
+ (id)nativeAdViewSet;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAdViewDidCallShow; // @synthesize isAdViewDidCallShow=_isAdViewDidCallShow;
@property(nonatomic) _Bool alreadyRender; // @synthesize alreadyRender=_alreadyRender;
@property(nonatomic) _Bool isExpressAd; // @synthesize isExpressAd=_isExpressAd;
@property(nonatomic) __weak id <ABUNativeAdVideoDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(nonatomic) __weak id <ABUNativeAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ABUNativeAdsManager *adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) UIView *expressView;
@property(readonly, nonatomic) ABUAdPackage *adPackage;
- (void)setAdPackage:(id)arg1;
- (void)hold;
- (void)adViewDidShow;
- (void)expressViewDidFinishRender;
- (void)willMoveToSuperview:(id)arg1;
@property(readonly, nonatomic) _Bool isReady;
- (id)getMediaExtraInfo;
- (id)extraData;
- (id)getCurrentBestEcpmInfo;
- (id)cacheRitList;
- (id)multiBiddingEcpmInfos;
- (id)getShowEcpmInfo;
- (id)getAdNetworkRitId;
- (id)getPreEcpm;
- (id)getAdNetworkPlatformName;
@property(readonly, copy, nonatomic) NSString *adViewID;
- (_Bool)viewExistForMediatedNativeAd:(id)arg1;
@property(readonly, nonatomic) _Bool hasExpressAdGot;
@property(nonatomic) __weak UIViewController *rootViewController;
- (id)_nativeAd;
- (void)reSizeMediaView;
- (void)render;
- (id)initWithExpressView:(id)arg1;
- (id)initWithAdPackage:(id)arg1;
@property(readonly, nonatomic) BUMVideoAdReporter *videoAdReporter;
- (id)mediaView;
- (id)adLogoView;
- (id)dislikeBtn;
- (id)advertiserView;
- (id)callToActionBtn;
- (id)imageView;
- (id)iconImageView;
- (id)descLabel;
- (id)titleLabel;
- (_Bool)hasSupportActionBtn;
- (id)biddingToken;
- (void)setMopubAdMarkUp:(id)arg1;
- (void)setAdMarkup:(id)arg1;
- (void)loss:(id)arg1 lossReason:(id)arg2 winBidder:(id)arg3;
- (void)win:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)nativeAdVideoDidPlayFinish:(id)arg1;
- (void)nativeAdVideoDidClick:(id)arg1;
- (void)nativeAdVideo:(id)arg1 stateDidChanged:(long long)arg2;
- (void)nativeAdVideo:(id)arg1 rewardDidCountDown:(long long)arg2;
- (void)nativeAdShakeViewDidDismiss:(id)arg1;
- (void)nativeAdExpressViewDidClosed:(id)arg1 closeReason:(id)arg2;
- (void)nativeAdViewDidDismissFullScreenModal:(id)arg1;
- (void)nativeAdViewWillPresentFullScreenModal:(id)arg1;
- (void)nativeAdDidClick:(id)arg1 withView:(id)arg2;
- (void)nativeAdExpressView:(id)arg1 stateDidChanged:(long long)arg2;
- (void)nativeAdDidBecomeVisible:(id)arg1;
- (void)nativeAdExpressViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeAdExpressViewRenderSuccess:(id)arg1;
@property(readonly, nonatomic) BUMCanvasView *canvasView;
@property(readonly, nonatomic) NSObject<BUNativeAdMediationProtocol> *mediation;
- (id)getAdCreativeToken;
- (void)loadAdData;
- (void)unregisterView;
- (void)registerContainer:(id)arg1 withClickableViews:(id)arg2;
- (id)initWithSlot:(id)arg1;
@property(retain, nonatomic) BUAdSlot *adslot;
@property(nonatomic) __weak id <BUMNativeAdDelegate> incoming_delegate;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;

// Remaining properties
@property(readonly) BUMaterialMeta *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

