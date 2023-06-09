//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADBannerView.h"

#import "GADAppEventDelegate-Protocol.h"

@class GADVideoController, GAMInternalBannerView, NSArray, NSString;
@protocol GADAdSizeDelegate, GADAppEventDelegate;

@interface GAMBannerView : GADBannerView <GADAppEventDelegate>
{
    id <GADAppEventDelegate> _appEventDelegate;
}

+ (Class)bannerViewClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
- (void)adView:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)resize:(struct GADAdSize)arg1;
- (void)recordImpression;
- (void)setAdOptions:(id)arg1;
- (struct CGSize)effectiveContentSize;
@property(readonly, nonatomic) GADVideoController *videoController;
@property(nonatomic) _Bool enableManualImpressions;
@property(copy, nonatomic) NSArray *validAdSizes;

// Remaining properties
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @dynamic adSizeDelegate;
@property(copy, nonatomic) NSString *adUnitID; // @dynamic adUnitID;
@property(readonly, nonatomic) GAMInternalBannerView *bannerView; // @dynamic bannerView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

