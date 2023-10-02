//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ABUDrawAdView, NSArray, NSError, UIView;

@protocol ABUDrawAdViewDelegate <NSObject>

@optional
- (void)drawAdViewWillDismissFullScreenModal:(ABUDrawAdView *)arg1;
- (void)drawAdViewWillPresentFullScreenModal:(ABUDrawAdView *)arg1;
- (void)drawAdDidClick:(ABUDrawAdView *)arg1 withView:(UIView *)arg2;
- (void)drawAdView:(ABUDrawAdView *)arg1 stateDidChanged:(long long)arg2;
- (void)drawAdDidBecomeVisible:(ABUDrawAdView *)arg1;
- (void)drawAdDidClosed:(ABUDrawAdView *)arg1 closeReason:(NSArray *)arg2;
- (void)drawAdExpressViewDidClosed:(ABUDrawAdView *)arg1 closeReason:(NSArray *)arg2;
- (void)drawAdExpressViewRenderFail:(ABUDrawAdView *)arg1 error:(NSError *)arg2;
- (void)drawAdExpressViewRenderSuccess:(ABUDrawAdView *)arg1;
@end
