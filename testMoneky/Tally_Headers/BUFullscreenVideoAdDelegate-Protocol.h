//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUFullscreenVideoAd, NSError;

@protocol BUFullscreenVideoAdDelegate <NSObject>

@optional
- (void)fullscreenVideoAdCallback:(BUFullscreenVideoAd *)arg1 withType:(unsigned long long)arg2;
- (void)fullscreenVideoAdDidClickSkip:(BUFullscreenVideoAd *)arg1;
- (void)fullscreenVideoAdDidPlayFinish:(BUFullscreenVideoAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)fullscreenVideoAdDidClose:(BUFullscreenVideoAd *)arg1;
- (void)fullscreenVideoAdWillClose:(BUFullscreenVideoAd *)arg1;
- (void)fullscreenVideoAdDidClick:(BUFullscreenVideoAd *)arg1;
- (void)fullscreenVideoAdDidVisible:(BUFullscreenVideoAd *)arg1;
- (void)fullscreenVideoAdWillVisible:(BUFullscreenVideoAd *)arg1;
- (void)fullscreenVideoAdVideoDataDidLoad:(BUFullscreenVideoAd *)arg1;
- (void)fullscreenVideoAd:(BUFullscreenVideoAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)fullscreenVideoMaterialMetaAdDidLoad:(BUFullscreenVideoAd *)arg1;
@end
