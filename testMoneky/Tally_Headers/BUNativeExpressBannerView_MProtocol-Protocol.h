//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class BUAdSlot, BUDictionary, NSObject, NSString, UIViewController;
@protocol BUMNativeExpressBannerViewDelegate, BUNativeExpressBannerViewMediationProtocol;

@protocol BUNativeExpressBannerView_MProtocol <BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
@property(readonly, copy, nonatomic) BUDictionary *mediaExt;
@property(readonly, nonatomic) long long interval;
@property(nonatomic) __weak id <BUMNativeExpressBannerViewDelegate> delegate;
@property(readonly, nonatomic) NSObject<BUNativeExpressBannerViewMediationProtocol> *mediation;
- (id)initWithSlotID:(NSString *)arg1 rootViewController:(UIViewController *)arg2 adSize:(struct CGSize)arg3 IsSupportDeepLink:(_Bool)arg4 interval:(long long)arg5;
- (id)initWithSlotID:(NSString *)arg1 rootViewController:(UIViewController *)arg2 adSize:(struct CGSize)arg3 IsSupportDeepLink:(_Bool)arg4;
- (NSString *)getAdCreativeToken;
- (void)loadAdData;
- (id)initWithSlot:(BUAdSlot *)arg1 rootViewController:(UIViewController *)arg2 adSize:(struct CGSize)arg3 interval:(long long)arg4;
- (id)initWithSlot:(BUAdSlot *)arg1 rootViewController:(UIViewController *)arg2 adSize:(struct CGSize)arg3;
- (id)initWithSlotID:(NSString *)arg1 rootViewController:(UIViewController *)arg2 adSize:(struct CGSize)arg3 interval:(long long)arg4;
- (id)initWithSlotID:(NSString *)arg1 rootViewController:(UIViewController *)arg2 adSize:(struct CGSize)arg3;
@end

