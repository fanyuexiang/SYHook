//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADAdLoaderDelegate-Protocol.h"

@class GADAdLoader, GAMBannerView, NSArray;

@protocol GAMBannerAdLoaderDelegate <GADAdLoaderDelegate>
- (void)adLoader:(GADAdLoader *)arg1 didReceiveGAMBannerView:(GAMBannerView *)arg2;
- (NSArray *)validBannerSizesForAdLoader:(GADAdLoader *)arg1;
@end

