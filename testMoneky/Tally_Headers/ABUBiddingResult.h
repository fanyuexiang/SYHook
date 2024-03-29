//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABUBiddingAutoExpDetail, ABUBiddingWaterfallModel, NSArray, NSString;

@interface ABUBiddingResult : NSObject
{
    NSString *_requestID;
    NSString *_serverRequestID;
    NSArray *_winners;
    NSArray *_invalidNonServerBiddingResults;
    ABUBiddingWaterfallModel *_waterfall;
    NSString *_serverBiddingExtra;
    ABUBiddingAutoExpDetail *_autoDetail;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ABUBiddingAutoExpDetail *autoDetail; // @synthesize autoDetail=_autoDetail;
@property(readonly, copy, nonatomic) NSString *serverBiddingExtra; // @synthesize serverBiddingExtra=_serverBiddingExtra;
@property(readonly, nonatomic) ABUBiddingWaterfallModel *waterfall; // @synthesize waterfall=_waterfall;
@property(readonly, copy, nonatomic) NSArray *invalidNonServerBiddingResults; // @synthesize invalidNonServerBiddingResults=_invalidNonServerBiddingResults;
@property(readonly, nonatomic) NSArray *winners; // @synthesize winners=_winners;
@property(readonly, copy, nonatomic) NSString *serverRequestID; // @synthesize serverRequestID=_serverRequestID;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)initWithDict:(id)arg1;

@end

