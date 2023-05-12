//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABUBaseAd.h"

#import "ABUCustomBannerAdapterBridge-Protocol.h"

@class NSString;
@protocol ABUBannerAdDelegate;

@interface ABUBannerAd : ABUBaseAd <ABUCustomBannerAdapterBridge>
{
    _Bool _loadAdDataIsInternal;
    _Bool _userDidCallLoad;
    _Bool _isAdDidCallShow;
    id <ABUBannerAdDelegate> _delegate;
    long long _autoRefreshTime;
    long long _refreshTime;
    struct CGSize _adSize;
}

+ (_Bool)isCarouselBannerConfigWithUnitID:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAdDidCallShow; // @synthesize isAdDidCallShow=_isAdDidCallShow;
@property(nonatomic) _Bool userDidCallLoad; // @synthesize userDidCallLoad=_userDidCallLoad;
@property(nonatomic) _Bool loadAdDataIsInternal; // @synthesize loadAdDataIsInternal=_loadAdDataIsInternal;
@property(nonatomic) long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) long long autoRefreshTime; // @synthesize autoRefreshTime=_autoRefreshTime;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) __weak id <ABUBannerAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destory;
- (void)callbackBannerAdDidBecomeVisibleWithBannerView:(id)arg1;
- (void)_setupDataWithAdUnitID:(id)arg1 rootViewController:(id)arg2 adSize:(struct CGSize)arg3;
- (void)bannerAd:(id)arg1 bannerView:(id)arg2 didClosedWithDislikeWithReason:(id)arg3;
- (void)bannerAdDidClick:(id)arg1 bannerView:(id)arg2;
- (void)bannerAdWillDismissFullScreenModal:(id)arg1 bannerView:(id)arg2;
- (void)bannerAdWillPresentFullScreenModal:(id)arg1 bannerView:(id)arg2;
- (void)bannerAdDidBecomeVisible:(id)arg1 bannerView:(id)arg2;
- (id)extraData;
@property(readonly, nonatomic) _Bool isReady;
- (_Bool)enableReload;
- (id)getMediaExtraInfo;
- (id)getShowEcpmInfo;
- (id)getPreEcpm;
- (id)getAdNetworkRitId;
- (id)getAdNetworkPlatformName;
- (_Bool)enableCurrentAdnPreload;
- (id)reuseIdentifierFactors;
- (long long)adType;
- (unsigned long long)moduleControl;
- (id)preloadAdWithType:(long long)arg1;
- (void)adLoadDidFailedWithError:(id)arg1;
- (void)adLoadDidSuccess;
- (id)initWithAdUnitID:(id)arg1 rootViewController:(id)arg2 adSize:(struct CGSize)arg3;
@property(nonatomic) _Bool startMutedIfCan;
@property(nonatomic) struct CGSize imageOrVideoSize;
@property(nonatomic) _Bool getExpressAdIfCan;
- (id)_initWithAdUnitID:(id)arg1 rootViewController:(id)arg2 adSize:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
