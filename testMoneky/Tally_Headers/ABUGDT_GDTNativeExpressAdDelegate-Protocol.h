//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSObject, UIView;
@protocol ABUGDT_GDTNativeExpressAd, ABUGDT_GDTNativeExpressAdView;

@protocol ABUGDT_GDTNativeExpressAdDelegate <NSObject>

@optional
- (void)nativeExpressAdViewDidDismissVideoVC:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewWillDismissVideoVC:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewDidPresentVideoVC:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewWillPresentVideoVC:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdView:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)nativeExpressAdViewApplicationWillEnterBackground:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewDidDismissScreen:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewWillDismissScreen:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewDidPresentScreen:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewWillPresentScreen:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewClosed:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewClicked:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewExposure:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewRenderFail:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdViewRenderSuccess:(UIView<ABUGDT_GDTNativeExpressAdView> *)arg1;
- (void)nativeExpressAdFailToLoad:(NSObject<ABUGDT_GDTNativeExpressAd> *)arg1 error:(NSError *)arg2;
- (void)nativeExpressAdSuccessToLoad:(NSObject<ABUGDT_GDTNativeExpressAd> *)arg1 views:(NSArray *)arg2;
@end

