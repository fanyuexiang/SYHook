//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface CSJRewardLiveModel : NSObject <NSCoding>
{
    long long _rewardLiveType;
    long long _rewardLiveStyle;
    NSString *_rewardLiveText;
    long long _rewardStartTime;
    long long _rewardCloseTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long rewardCloseTime; // @synthesize rewardCloseTime=_rewardCloseTime;
@property(nonatomic) long long rewardStartTime; // @synthesize rewardStartTime=_rewardStartTime;
@property(copy, nonatomic) NSString *rewardLiveText; // @synthesize rewardLiveText=_rewardLiveText;
@property(nonatomic) long long rewardLiveStyle; // @synthesize rewardLiveStyle=_rewardLiveStyle;
@property(nonatomic) long long rewardLiveType; // @synthesize rewardLiveType=_rewardLiveType;
- (id)dictionaryValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setupDataWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

