//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTSplashZoomOutView;

@protocol GDTSplashZoomOutViewDelegate <NSObject>

@optional
- (void)splashZoomOutViewAdDidDismissFullScreenModal:(GDTSplashZoomOutView *)arg1;
- (void)splashZoomOutViewAdDidPresentFullScreenModal:(GDTSplashZoomOutView *)arg1;
- (void)splashZoomOutViewAdVideoFinished:(GDTSplashZoomOutView *)arg1;
- (void)splashZoomOutViewAdDidClose:(GDTSplashZoomOutView *)arg1;
- (void)splashZoomOutViewDidClick:(GDTSplashZoomOutView *)arg1;
@end
