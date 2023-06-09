//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUBaidu_BaiduMobAdNativeAdDelegate-Protocol.h"
#import "ABUBaidu_BaiduMobAdNativeCacheDelegate-Protocol.h"
#import "ABUBaidu_BaiduMobAdNativeInterationDelegate-Protocol.h"
#import "ABUBaidu_BaiduMobAdVideoViewDelegate-Protocol.h"
#import "ABUCustomDrawAdapter-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol ABUBaidu_BaiduMobAdNative, ABUCustomConfigAdapter, ABUCustomDrawAdapterBridge;

@interface ABUBaiduDrawAdapter : NSObject <ABUBaidu_BaiduMobAdNativeAdDelegate, ABUBaidu_BaiduMobAdNativeCacheDelegate, ABUBaidu_BaiduMobAdVideoViewDelegate, ABUBaidu_BaiduMobAdNativeInterationDelegate, ABUCustomDrawAdapter>
{
    NSDictionary *_parameters;
    long long _biddingType;
    NSObject<ABUBaidu_BaiduMobAdNative> *_nativeAd;
    NSMutableDictionary *_ads;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) NSObject<ABUBaidu_BaiduMobAdNative> *nativeAd; // @synthesize nativeAd=_nativeAd;
@property(nonatomic) long long biddingType; // @synthesize biddingType=_biddingType;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void)fullscreenVideoAdDidClick:(id)arg1;
- (void)fullscreenVideoAdDidFailed:(id)arg1;
- (void)fullscreenVideoAdDidComplete:(id)arg1;
- (void)fullscreenVideoAdDidReplay:(id)arg1;
- (void)fullscreenVideoAdDidPause:(id)arg1;
- (void)fullscreenVideoAdDidStartPlaying:(id)arg1;
- (void)nativeVideoAdCacheFail:(id)arg1 withError:(int)arg2;
- (void)nativeVideoAdCacheSuccess:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (void)unionAdClicked:(id)arg1 nativeAdDataObject:(id)arg2;
- (void)didDismissLandingPage:(id)arg1;
- (void)nativeAdClicked:(id)arg1 nativeAdDataObject:(id)arg2;
- (void)nativeAdExposureFail:(id)arg1 nativeAdDataObject:(id)arg2 failReason:(int)arg3;
- (void)nativeAdExposure:(id)arg1 nativeAdDataObject:(id)arg2;
- (void)nativeAdsFailLoadCode:(id)arg1 message:(id)arg2 nativeAd:(id)arg3;
- (void)nativeAdsFailLoad:(int)arg1 nativeAd:(id)arg2;
- (void)nativeAdObjectsSuccessLoad:(id)arg1 nativeAd:(id)arg2;
- (_Bool)enableLocation;
- (id)apId;
- (id)publisherId;
- (void)didReceiveBidResult:(id)arg1;
- (void)setRootViewController:(id)arg1 forExpressAdView:(id)arg2;
- (void)setRootViewController:(id)arg1 forDrawAd:(id)arg2;
- (void)renderForExpressAdView:(id)arg1;
- (void)registerContainerView:(id)arg1 andClickableViews:(id)arg2 forDrawAd:(id)arg3;
- (CDStruct_2ec95fd7)mediatedAdStatusWithMediatedAd:(id)arg1;
- (void)loadDrawAdWithSlotID:(id)arg1 andSize:(struct CGSize)arg2 andParameter:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <ABUCustomDrawAdapterBridge> bridge;
@property(retain, nonatomic) id <ABUCustomConfigAdapter> configAdapter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCustomAdapter;
@property(readonly) Class superclass;

@end

