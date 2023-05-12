//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABUCanvasView.h"

@class ABUAdPackage, ABUDrawAdsManager, ABUVideoAdReporter, NSString, UIView, UIViewController;
@protocol ABUDrawAdVideoDelegate, ABUDrawAdViewDelegate;

@interface ABUDrawAdView : ABUCanvasView
{
    UIViewController *_rootViewController;
    _Bool _didMoveToSuperView;
    _Bool _isExpressAd;
    _Bool _alreadyRender;
    _Bool _isAdViewDidCallShow;
    ABUDrawAdsManager *_adManager;
    id <ABUDrawAdViewDelegate> _delegate;
    id <ABUDrawAdVideoDelegate> _videoDelegate;
}

+ (void)setNativeAdViewSet:(id)arg1;
+ (id)nativeAdViewSet;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAdViewDidCallShow; // @synthesize isAdViewDidCallShow=_isAdViewDidCallShow;
@property(nonatomic) _Bool alreadyRender; // @synthesize alreadyRender=_alreadyRender;
@property(nonatomic) _Bool isExpressAd; // @synthesize isExpressAd=_isExpressAd;
@property(nonatomic) __weak id <ABUDrawAdVideoDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(nonatomic) __weak id <ABUDrawAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ABUDrawAdsManager *adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) UIView *expressView;
@property(readonly, nonatomic) ABUAdPackage *adPackage;
- (void)setAdPackage:(id)arg1;
- (void)hold;
- (void)adViewDidShow;
- (void)expressViewDidFinishRender;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)isReady;
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
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)render;
- (id)initWithExpressView:(id)arg1;
- (id)initWithAdPackage:(id)arg1;
@property(readonly, nonatomic) ABUVideoAdReporter *videoAdReporter;
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

@end

