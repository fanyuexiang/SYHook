//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUCustomDrawAdapter-Protocol.h"
#import "ABUGDT_GDTMediaViewDelegate-Protocol.h"
#import "ABUGDT_GDTNativeExpressAdDelegate-Protocol.h"
#import "ABUGDT_GDTNativeExpressProAdManagerDelegate-Protocol.h"
#import "ABUGDT_GDTNativeExpressProAdViewDelegate-Protocol.h"
#import "ABUGDT_GDTUnifiedNativeAdDelegate-Protocol.h"
#import "ABUGDT_GDTUnifiedNativeAdViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol ABUCustomConfigAdapter, ABUCustomDrawAdapterBridge, ABUGDT_GDTNativeExpressAd, ABUGDT_GDTNativeExpressProAdManager, ABUGDT_GDTUnifiedNativeAd, ABUGDT_GDTVideoConfig;

@interface ABUGdtDrawAdapter : NSObject <ABUGDT_GDTUnifiedNativeAdDelegate, ABUGDT_GDTUnifiedNativeAdViewDelegate, ABUGDT_GDTNativeExpressAdDelegate, ABUGDT_GDTNativeExpressProAdManagerDelegate, ABUGDT_GDTNativeExpressProAdViewDelegate, ABUGDT_GDTMediaViewDelegate, ABUCustomDrawAdapter>
{
    NSObject<ABUGDT_GDTUnifiedNativeAd> *_nativeAd;
    NSObject<ABUGDT_GDTNativeExpressAd> *_expressNativeAd;
    NSObject<ABUGDT_GDTNativeExpressProAdManager> *_expressProAdManager;
    NSObject<ABUGDT_GDTVideoConfig> *_videoConfig;
    NSMutableDictionary *_nativeAdViewMap;
    long long _biddingType;
}

- (void).cxx_destruct;
@property(nonatomic) long long biddingType; // @synthesize biddingType=_biddingType;
@property(retain, nonatomic) NSMutableDictionary *nativeAdViewMap; // @synthesize nativeAdViewMap=_nativeAdViewMap;
@property(retain, nonatomic) NSObject<ABUGDT_GDTVideoConfig> *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(retain, nonatomic) NSObject<ABUGDT_GDTNativeExpressProAdManager> *expressProAdManager; // @synthesize expressProAdManager=_expressProAdManager;
@property(retain, nonatomic) NSObject<ABUGDT_GDTNativeExpressAd> *expressNativeAd; // @synthesize expressNativeAd=_expressNativeAd;
@property(retain, nonatomic) NSObject<ABUGDT_GDTUnifiedNativeAd> *nativeAd; // @synthesize nativeAd=_nativeAd;
- (id)_nativeAdViewForMediaView:(id)arg1;
- (void)gdt_mediaViewDidPlayFinished:(id)arg1;
- (void)gdt_mediaViewDidTapped:(id)arg1;
- (void)gdt_unifiedNativeAdView:(id)arg1 playerStatusChanged:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)gdt_unifiedNativeAdDetailViewWillPresentScreen:(id)arg1;
- (void)gdt_unifiedNativeAdViewApplicationWillEnterBackground:(id)arg1;
- (void)gdt_unifiedNativeAdDetailViewClosed:(id)arg1;
- (void)gdt_unifiedNativeAdViewDidClick:(id)arg1;
- (void)gdt_unifiedNativeAdViewWillExpose:(id)arg1;
- (void)gdt_unifiedNativeAdLoaded:(id)arg1 error:(id)arg2;
- (void)_setupWithWithSlotID:(id)arg1 andAdSize:(struct CGSize)arg2 andParameter:(id)arg3;
- (id)serverBiddingTokenWithParams:(id)arg1 otherInfo:(id)arg2 error:(id *)arg3;
- (void)didReceiveBidResult:(id)arg1;
- (CDStruct_2ec95fd7)mediatedAdStatus;
- (void)registerContainerView:(id)arg1 andClickableViews:(id)arg2 forDrawAd:(id)arg3;
- (void)setRootViewController:(id)arg1 forDrawAd:(id)arg2;
- (void)setRootViewController:(id)arg1 forExpressAdView:(id)arg2;
- (void)renderForExpressAdView:(id)arg1;
- (void)loadDrawAdWithSlotID:(id)arg1 andSize:(struct CGSize)arg2 andParameter:(id)arg3;
- (CDStruct_2ec95fd7)mediatedAdStatusWithMediatedAd:(id)arg1;
- (_Bool)enablePreloadWhenCurrentIsDisplay;

// Remaining properties
@property(nonatomic) __weak id <ABUCustomDrawAdapterBridge> bridge;
@property(retain, nonatomic) id <ABUCustomConfigAdapter> configAdapter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCustomAdapter;
@property(readonly) Class superclass;

@end

