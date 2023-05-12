//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ABUAdPackage, NSDictionary, NSError, NSObject;
@protocol ABUCustomAdapter, ABUMediationWaterfall;

@protocol ABUMediationWaterfallDelegate <NSObject>

@optional
@property(readonly, nonatomic) _Bool bidNotify;
@property(nonatomic) unsigned long long expectAdCount;
@property(nonatomic) long long requestType;
- (void)waterfall:(NSObject<ABUMediationWaterfall> *)arg1 didCollectedAdsTokens:(NSDictionary *)arg2 andResumeHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)waterfall:(NSObject<ABUMediationWaterfall> *)arg1 loadFailedMediaAdWithError:(NSError *)arg2;
- (void)waterfall:(NSObject<ABUMediationWaterfall> *)arg1 didLoadMediaAd:(ABUAdPackage *)arg2 withAdapter:(id <ABUCustomAdapter>)arg3;
- (void)waterfallDidLoadSuccess:(NSObject<ABUMediationWaterfall> *)arg1;
- (void)waterfall:(NSObject<ABUMediationWaterfall> *)arg1 loadFailedWithError:(NSError *)arg2;
- (void)waterfall:(NSObject<ABUMediationWaterfall> *)arg1 willStartLoadWithParams:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

