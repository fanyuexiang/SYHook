//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, UIView;
@protocol ABUCsj_BUNativeExpressAdView;

@protocol ABUCsj_BUNativeExpressAdViewDelegate <NSObject>

@optional
- (void)nativeExpressAdViewDidRemoved:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewDidCloseOtherController:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1 interactionType:(long long)arg2;
- (void)nativeExpressAdViewWillPresentScreen:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1;
- (void)nativeExpressAdView:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1 dislikeWithReason:(NSArray *)arg2;
- (void)nativeExpressAdViewPlayerDidPlayFinish:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1 error:(NSError *)arg2;
- (void)nativeExpressAdView:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1 stateDidChanged:(long long)arg2;
- (void)nativeExpressAdViewDidClick:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewWillShow:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewRenderFail:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1 error:(NSError *)arg2;
- (void)nativeExpressAdViewRenderSuccess:(UIView<ABUCsj_BUNativeExpressAdView> *)arg1;
@end

