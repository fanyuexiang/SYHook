//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSObject;
@protocol GADCustomEventInterstitial;

@protocol GADCustomEventInterstitialDelegate <NSObject>
- (void)customEventInterstitialWillLeaveApplication:(id <GADCustomEventInterstitial>)arg1;
- (void)customEventInterstitial:(id <GADCustomEventInterstitial>)arg1 didReceiveAd:(NSObject *)arg2;
- (void)customEventInterstitialDidDismiss:(id <GADCustomEventInterstitial>)arg1;
- (void)customEventInterstitialWillDismiss:(id <GADCustomEventInterstitial>)arg1;
- (void)customEventInterstitialWillPresent:(id <GADCustomEventInterstitial>)arg1;
- (void)customEventInterstitialWasClicked:(id <GADCustomEventInterstitial>)arg1;
- (void)customEventInterstitial:(id <GADCustomEventInterstitial>)arg1 didFailAd:(NSError *)arg2;
- (void)customEventInterstitialDidReceiveAd:(id <GADCustomEventInterstitial>)arg1;
@end

