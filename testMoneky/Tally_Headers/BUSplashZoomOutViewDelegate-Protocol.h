//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol ABU_BUSplashZoomOutView;

@protocol BUSplashZoomOutViewDelegate <NSObject>
- (void)splashZoomOutViewAdDidCloseOtherController:(UIView<ABU_BUSplashZoomOutView> *)arg1 interactionType:(int)arg2;
- (void)splashZoomOutViewAdDidAutoDimiss:(UIView<ABU_BUSplashZoomOutView> *)arg1;
- (void)splashZoomOutViewAdDidClose:(UIView<ABU_BUSplashZoomOutView> *)arg1;
- (void)splashZoomOutViewAdDidClick:(UIView<ABU_BUSplashZoomOutView> *)arg1;
@end

