//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdRendering-Protocol.h"
#import "GADCustomEventBannerDelegate-Protocol.h"

@class GADAdRenderingMetadata, GADBannerAd, GADMediatedIntermission, GADServerTransaction, NSDictionary, NSString, UIViewController;
@protocol GADCustomEventBanner;

@interface GADCustomEventBannerAdRenderer : NSObject <GADCustomEventBannerDelegate, GADAdRendering>
{
    GADServerTransaction *_transaction;
    NSDictionary *_adConfiguration;
    id <GADCustomEventBanner> _customEventBanner;
    CDUnknownBlockType _renderCompletionHandler;
    GADBannerAd *_bannerAd;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _clickEventReceived
    GADMediatedIntermission *_intermission;
    GADAdRenderingMetadata *_metadata;
}

- (void).cxx_destruct;
- (void)customEventBannerWillLeaveApplication:(id)arg1;
- (void)customEventBanner:(id)arg1 clickDidOccurInAd:(id)arg2;
- (void)customEventBannerDidDismissModal:(id)arg1;
- (void)customEventBannerWillDismissModal:(id)arg1;
- (void)customEventBannerWillPresentModal:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)customEventBannerWasClicked:(id)arg1;
- (void)handleClickEventInternal;
- (void)customEventBanner:(id)arg1 didFailAd:(id)arg2;
- (void)customEventBanner:(id)arg1 didReceiveAd:(id)arg2;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)customEventCompletedLoadWithAdView:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

