//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol ABUGDT_GDTNativeExpressProAdView;

@protocol ABUGDT_GDTNativeExpressProAdViewDelegate <NSObject>

@optional
- (void)gdt_NativeExpressProAdViewVideoDidFinished:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdView:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)gdt_NativeExpressProAdViewApplicationWillEnterBackground:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewDidDismissVideoVC:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewWillDismissVideoVC:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentVideoVC:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentVideoVC:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewDidDissmissScreen:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewWillDissmissScreen:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentScreen:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentScreen:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewClosed:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewClicked:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewExposure:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewRenderFail:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
- (void)gdt_NativeExpressProAdViewRenderSuccess:(UIView<ABUGDT_GDTNativeExpressProAdView> *)arg1;
@end

