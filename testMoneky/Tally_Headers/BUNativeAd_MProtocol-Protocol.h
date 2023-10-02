//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class BUAdSlot, BUMaterialMeta, NSArray, NSObject, NSString, UIView, UIViewController;
@protocol BUMNativeAdDelegate, BUNativeAdMediationProtocol;

@protocol BUNativeAd_MProtocol <BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
@property(readonly, nonatomic) NSObject<BUNativeAdMediationProtocol> *mediation;
@property(nonatomic) __weak id <BUMNativeAdDelegate> delegate;
@property(nonatomic) __weak UIViewController *rootViewController;
@property(readonly) BUMaterialMeta *data;
@property(retain, nonatomic) BUAdSlot *adslot;
- (NSString *)getAdCreativeToken;
- (void)loadAdData;
- (void)unregisterView;
- (void)registerContainer:(UIView *)arg1 withClickableViews:(NSArray *)arg2;
- (id)initWithSlot:(BUAdSlot *)arg1;
@end

