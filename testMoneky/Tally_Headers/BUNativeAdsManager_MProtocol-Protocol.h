//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class BUAdSlot, NSArray, NSObject;
@protocol BUMNativeAdsManagerDelegate, BUMNativeExpressAdViewDelegate, BUNativeAdsManagerMediationProtocol;

@protocol BUNativeAdsManager_MProtocol <BUMopubAdMarkUpDelegate>
@property(readonly, nonatomic) NSObject<BUNativeAdsManagerMediationProtocol> *mediation;
@property(nonatomic) __weak id <BUMNativeExpressAdViewDelegate> nativeExpressAdViewDelegate;
@property(nonatomic) __weak id <BUMNativeAdsManagerDelegate> delegate;
@property(nonatomic) struct CGSize adSize;
@property(retain, nonatomic) NSArray *data;
@property(retain, nonatomic) BUAdSlot *adslot;
- (void)loadAdDataWithCount:(long long)arg1;
- (id)initWithSlot:(BUAdSlot *)arg1;
@end

