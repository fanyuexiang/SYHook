//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ABUServerBiddingManager, NSArray, NSDictionary, NSString;

@protocol ABUBiddingParamHelper <NSObject>
- (NSDictionary *)infoForBidders;
- (long long)waterfallRequestType:(ABUServerBiddingManager *)arg1;
- (NSArray *)clientBidInfoList:(ABUServerBiddingManager *)arg1;
- (NSArray *)biddingMediaConfigList:(ABUServerBiddingManager *)arg1;
- (NSString *)requestId:(ABUServerBiddingManager *)arg1;

@optional
- (void)didWaitingExchangeResultWithParams:(NSDictionary *)arg1 resumeHandler:(void (^)(NSDictionary *, NSError *))arg2;
@end

