//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADBannerView, NSError;

@protocol GADBannerViewDelegate <NSObject>

@optional
- (void)bannerViewDidDismissScreen:(GADBannerView *)arg1;
- (void)bannerViewWillDismissScreen:(GADBannerView *)arg1;
- (void)bannerViewWillPresentScreen:(GADBannerView *)arg1;
- (void)bannerViewDidRecordClick:(GADBannerView *)arg1;
- (void)bannerViewDidRecordImpression:(GADBannerView *)arg1;
- (void)bannerView:(GADBannerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)bannerViewDidReceiveAd:(GADBannerView *)arg1;
@end

