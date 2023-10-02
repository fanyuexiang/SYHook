//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUGDT_GDTExpressInterstitialAdDelegate-Protocol.h"
#import "ABUGDT_GDTUnifiedInterstitialAdDelegate-Protocol.h"
#import "BUMCustomFullscreenVideoAdapter-Protocol.h"

@class NSString;
@protocol ABUGDT_GDTExpressInterstitialAd, ABUGDT_GDTUnifiedInterstitialAd, BUMCustomConfigAdapter, BUMCustomFullscreenVideoAdapterBridge;

@interface ABUGdtFullscreenVideoAdapter : NSObject <ABUGDT_GDTUnifiedInterstitialAdDelegate, ABUGDT_GDTExpressInterstitialAdDelegate, BUMCustomFullscreenVideoAdapter>
{
    NSObject<ABUGDT_GDTUnifiedInterstitialAd> *_fullscreenAd;
    NSObject<ABUGDT_GDTExpressInterstitialAd> *_expressFullscreenAd;
    long long _biddingType;
}

- (void).cxx_destruct;
@property(nonatomic) long long biddingType; // @synthesize biddingType=_biddingType;
@property(retain, nonatomic) NSObject<ABUGDT_GDTExpressInterstitialAd> *expressFullscreenAd; // @synthesize expressFullscreenAd=_expressFullscreenAd;
@property(retain, nonatomic) NSObject<ABUGDT_GDTUnifiedInterstitialAd> *fullscreenAd; // @synthesize fullscreenAd=_fullscreenAd;
- (void)expressInterstitialAdDidRewardEffective:(id)arg1 info:(id)arg2;
- (void)expressInterstitialAdViewDidDismissVideoVC:(id)arg1;
- (void)expressInterstitialAdViewWillDismissVideoVC:(id)arg1;
- (void)expressInterstitialAdViewDidPresentVideoVC:(id)arg1;
- (void)expressInterstitialAdViewWillPresentVideoVC:(id)arg1;
- (void)expressInterstitialAd:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)expressInterstitialAdDidDismissFullScreenModal:(id)arg1;
- (void)expressInterstitialAdWillDismissFullScreenModal:(id)arg1;
- (void)expressInterstitialAdDidPresentFullScreenModal:(id)arg1;
- (void)expressInterstitialAdWillPresentFullScreenModal:(id)arg1;
- (void)expressInterstitialClicked:(id)arg1;
- (void)expressInterstitialWillExposure:(id)arg1;
- (void)expressInterstitialWillLeaveApplication:(id)arg1;
- (void)expressInterstitialDidDismissScreen:(id)arg1;
- (void)expressInterstitialFailToPresent:(id)arg1 error:(id)arg2;
- (void)expressInterstitialDidPresentScreen:(id)arg1;
- (void)expressInterstitialWillPresentScreen:(id)arg1;
- (void)expressInterstitialFailToLoadAd:(id)arg1 error:(id)arg2;
- (void)expressInterstitialSuccessToLoadAd:(id)arg1;
- (void)unifiedInterstitialAdDidRewardEffective:(id)arg1 info:(id)arg2;
- (void)unifiedInterstitialAdViewDidDismissVideoVC:(id)arg1;
- (void)unifiedInterstitialAdViewWillDismissVideoVC:(id)arg1;
- (void)unifiedInterstitialAdViewDidPresentVideoVC:(id)arg1;
- (void)unifiedInterstitialAdViewWillPresentVideoVC:(id)arg1;
- (void)unifiedInterstitialAd:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)unifiedInterstitialAdDidDismissFullScreenModal:(id)arg1;
- (void)unifiedInterstitialAdWillDismissFullScreenModal:(id)arg1;
- (void)unifiedInterstitialAdDidPresentFullScreenModal:(id)arg1;
- (void)unifiedInterstitialAdWillPresentFullScreenModal:(id)arg1;
- (void)unifiedInterstitialClicked:(id)arg1;
- (void)unifiedInterstitialWillExposure:(id)arg1;
- (void)unifiedInterstitialWillLeaveApplication:(id)arg1;
- (void)unifiedInterstitialDidDismissScreen:(id)arg1;
- (void)unifiedInterstitialFailToPresent:(id)arg1 error:(id)arg2;
- (void)unifiedInterstitialDidPresentScreen:(id)arg1;
- (void)unifiedInterstitialWillPresentScreen:(id)arg1;
- (void)unifiedInterstitialRenderFail:(id)arg1 error:(id)arg2;
- (void)unifiedInterstitialRenderSuccess:(id)arg1;
- (void)unifiedInterstitialDidDownloadVideo:(id)arg1;
- (void)unifiedInterstitialFailToLoadAd:(id)arg1 error:(id)arg2;
- (void)unifiedInterstitialSuccessToLoadAd:(id)arg1;
- (void)_serverSideVerificationConfigWithAd:(id)arg1 andParameter:(id)arg2;
- (void)_setupWithWithSlotID:(id)arg1 andParameter:(id)arg2;
- (id)serverBiddingTokenWithParams:(id)arg1 otherInfo:(id)arg2 error:(id *)arg3;
- (void)didReceiveBidResult:(id)arg1;
- (_Bool)showAdFromRootViewController:(id)arg1 parameter:(id)arg2;
- (void)loadFullscreenVideoAdWithSlotID:(id)arg1 andParameter:(id)arg2;
- (CDStruct_2ec95fd7)mediatedAdStatus;
- (_Bool)enablePreloadWhenCurrentIsDisplay;

// Remaining properties
@property(nonatomic) __weak id <BUMCustomFullscreenVideoAdapterBridge> bridge;
@property(retain, nonatomic) id <BUMCustomConfigAdapter> configAdapter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCustomAdapter;
@property(readonly) Class superclass;

@end

