//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTAdProtocol-Protocol.h"

@class GDTNativeExpressAdView, NSString, UIView, UIViewController;

@protocol GDTNativeExpressAdViewAdapterProtocol <GDTAdProtocol>
@property(nonatomic) __weak UIViewController *controller;
@property(readonly, nonatomic) _Bool isVideoAd;
@property(readonly, nonatomic) _Bool isReady;
@property(nonatomic) __weak GDTNativeExpressAdView *gdtExpressAdView;
- (void)setBidECPM:(long long)arg1;
- (void)sendLossNotification:(long long)arg1 reason:(long long)arg2 adnId:(NSString *)arg3;
- (void)sendWinNotification:(long long)arg1;
- (NSString *)eCPMLevel;
- (long long)eCPM;
- (double)videoPlayTime;
- (double)videoDuration;
- (void)render;
- (UIView *)adView;
- (_Bool)isAdValid;
- (void)resize;
@end

