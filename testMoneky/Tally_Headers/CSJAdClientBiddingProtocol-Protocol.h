//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol CSJAdClientBiddingProtocol <NSObject>

@optional
- (void)loss:(NSNumber *)arg1 lossReason:(NSString *)arg2 winBidder:(NSString *)arg3;
- (void)win:(NSNumber *)arg1;
- (void)setPrice:(NSNumber *)arg1;
@end

