//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABURewardedVideoModel : NSObject
{
    NSString *_userId;
    NSString *_rewardName;
    long long _rewardAmount;
    NSString *_extra;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) long long rewardAmount; // @synthesize rewardAmount=_rewardAmount;
@property(copy, nonatomic) NSString *rewardName; // @synthesize rewardName=_rewardName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)toString;
- (_Bool)isEqual:(id)arg1;

@end

