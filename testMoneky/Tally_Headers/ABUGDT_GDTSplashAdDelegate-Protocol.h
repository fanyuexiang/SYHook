//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSObject;
@protocol ABUGDT_GDTSplashAd;

@protocol ABUGDT_GDTSplashAdDelegate <NSObject>

@optional
- (void)splashAdLifeTime:(unsigned long long)arg1;
- (void)splashAdDidDismissFullScreenModal:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdWillDismissFullScreenModal:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdDidPresentFullScreenModal:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdWillPresentFullScreenModal:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdClosed:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdWillClosed:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdClicked:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdExposured:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdApplicationWillEnterBackground:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdFailToPresent:(NSObject<ABUGDT_GDTSplashAd> *)arg1 withError:(NSError *)arg2;
- (void)splashAdDidLoad:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
- (void)splashAdSuccessPresentScreen:(NSObject<ABUGDT_GDTSplashAd> *)arg1;
@end

