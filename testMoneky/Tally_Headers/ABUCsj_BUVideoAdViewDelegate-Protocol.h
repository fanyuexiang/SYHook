//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UIView;
@protocol ABUCsj_BUVideoAdView;

@protocol ABUCsj_BUVideoAdViewDelegate <NSObject>

@optional
- (void)videoAdViewDidCloseOtherController:(UIView<ABUCsj_BUVideoAdView> *)arg1 interactionType:(long long)arg2;
- (void)videoAdViewFinishViewDidClick:(UIView<ABUCsj_BUVideoAdView> *)arg1;
- (void)videoAdViewDidClick:(UIView<ABUCsj_BUVideoAdView> *)arg1;
- (void)playerDidPlayFinish:(UIView<ABUCsj_BUVideoAdView> *)arg1;
- (void)videoAdView:(UIView<ABUCsj_BUVideoAdView> *)arg1 stateDidChanged:(long long)arg2;
- (void)playerReadyToPlay:(UIView<ABUCsj_BUVideoAdView> *)arg1;
- (void)videoAdView:(UIView<ABUCsj_BUVideoAdView> *)arg1 didLoadFailWithError:(NSError *)arg2;
@end
