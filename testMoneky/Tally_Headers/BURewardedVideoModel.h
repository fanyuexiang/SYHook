//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

@class NSArray, NSString;

@interface BURewardedVideoModel : BUInterfaceBaseObject
{
    BURewardedVideoModel *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BURewardedVideoModel *iteration; // @synthesize iteration=_iteration;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSArray *advancedRewardTypes; // @dynamic advancedRewardTypes;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) long long rewardAmount; // @dynamic rewardAmount;
@property(copy, nonatomic) NSString *rewardName; // @dynamic rewardName;
@property(nonatomic) float rewardPropose; // @dynamic rewardPropose;
@property(nonatomic) long long rewardType; // @dynamic rewardType;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

