//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSObject;
@protocol ABUGDT_GDTUnifiedInterstitialAd;

@protocol ABUGDT_GDTUnifiedInterstitialAdDelegate <NSObject>

@optional
- (void)unifiedInterstitialAdDidRewardEffective:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1 info:(NSDictionary *)arg2;
- (void)unifiedInterstitialAdViewDidDismissVideoVC:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialAdViewWillDismissVideoVC:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialAdViewDidPresentVideoVC:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialAdViewWillPresentVideoVC:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialAd:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)unifiedInterstitialAdDidDismissFullScreenModal:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialAdWillDismissFullScreenModal:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialAdDidPresentFullScreenModal:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialAdWillPresentFullScreenModal:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialClicked:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialWillExposure:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialWillLeaveApplication:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialDidDismissScreen:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialFailToPresent:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1 error:(NSError *)arg2;
- (void)unifiedInterstitialDidPresentScreen:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialWillPresentScreen:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialRenderFail:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1 error:(NSError *)arg2;
- (void)unifiedInterstitialRenderSuccess:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialDidDownloadVideo:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
- (void)unifiedInterstitialFailToLoadAd:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1 error:(NSError *)arg2;
- (void)unifiedInterstitialSuccessToLoadAd:(NSObject<ABUGDT_GDTUnifiedInterstitialAd> *)arg1;
@end
