//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSJNativeExpressAdManager, CSJNativeExpressAdView, NSArray, NSError;

@protocol CSJNativeExpressAdViewDelegate <NSObject>

@optional
- (void)nativeExpressAdViewDidRemoved:(CSJNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewDidCloseOtherController:(CSJNativeExpressAdView *)arg1 interactionType:(long long)arg2;
- (void)nativeExpressAdViewWillPresentScreen:(CSJNativeExpressAdView *)arg1;
- (void)nativeExpressAdView:(CSJNativeExpressAdView *)arg1 dislikeWithReason:(NSArray *)arg2;
- (void)nativeExpressAdViewPlayerDidPlayFinish:(CSJNativeExpressAdView *)arg1 error:(NSError *)arg2;
- (void)nativeExpressAdView:(CSJNativeExpressAdView *)arg1 stateDidChanged:(long long)arg2;
- (void)nativeExpressAdViewDidClick:(CSJNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewWillShow:(CSJNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewRenderFail:(CSJNativeExpressAdView *)arg1 error:(NSError *)arg2;
- (void)nativeExpressAdViewRenderSuccess:(CSJNativeExpressAdView *)arg1;
- (void)nativeExpressAdFailToLoad:(CSJNativeExpressAdManager *)arg1 error:(NSError *)arg2;
- (void)nativeExpressAdSuccessToLoad:(CSJNativeExpressAdManager *)arg1 views:(NSArray *)arg2;
@end

