//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol ABU_BUSplashCardView;

@protocol BUSplashCardViewDelegate <NSObject>
- (void)splashCardViewAdDidCloseOtherController:(UIView<ABU_BUSplashCardView> *)arg1 interactionType:(int)arg2;
- (void)splashCardViewAdDidAutoDimiss:(UIView<ABU_BUSplashCardView> *)arg1;
- (void)splashCardViewAdDidClose:(UIView<ABU_BUSplashCardView> *)arg1;
- (void)splashCardViewAdDidClick:(UIView<ABU_BUSplashCardView> *)arg1;
@end
