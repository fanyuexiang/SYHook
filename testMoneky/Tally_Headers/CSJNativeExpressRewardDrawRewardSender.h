//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJMaterialMeta, NSString;
@protocol CSJNativeExpressVideoAdDelegate;

@interface CSJNativeExpressRewardDrawRewardSender : NSObject
{
    id <CSJNativeExpressVideoAdDelegate> _rewardedVideoAd;
    CSJMaterialMeta *_materialMeta;
    NSString *_playStartTS;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *playStartTS; // @synthesize playStartTS=_playStartTS;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) __weak id <CSJNativeExpressVideoAdDelegate> rewardedVideoAd; // @synthesize rewardedVideoAd=_rewardedVideoAd;
- (void)_updateRewardWithType:(long long)arg1 propose:(float)arg2;
- (void)verifyRewardWithDurationTime:(double)arg1 type:(long long)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)sendVerifiedRewardWithDuration:(double)arg1 type:(long long)arg2 meta:(id)arg3 settingModel:(id)arg4 playStartTS:(id)arg5 resultBlock:(CDUnknownBlockType)arg6;
- (id)initWithRewardedVideoAd:(id)arg1;

@end
