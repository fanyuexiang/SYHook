//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class BUAdSlot, BUDictionary, BURewardedVideoModel, NSObject, NSString, UIViewController;
@protocol BUMRewardedVideoAdDelegate, BURewardedVideoAdMediationProtocol;

@protocol BURewardedVideoAd_MProtocol <BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
@property(readonly, nonatomic) double expireTimestamp;
@property(readonly, nonatomic) _Bool materialMetaIsFromPreload;
@property(readonly, copy, nonatomic) BUDictionary *mediaExt;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
@property(nonatomic) __weak id <BUMRewardedVideoAdDelegate> rewardPlayAgainInteractionDelegate;
@property(nonatomic) __weak id <BUMRewardedVideoAdDelegate> delegate;
@property(retain, nonatomic) BURewardedVideoModel *rewardedVideoModel;
@property(readonly, nonatomic) NSObject<BURewardedVideoAdMediationProtocol> *mediation;
- (double)getExpireTimestamp;
- (_Bool)showAdFromRootViewController:(UIViewController *)arg1 ritScene:(long long)arg2 ritSceneDescribe:(NSString *)arg3;
- (_Bool)showAdFromRootViewController:(UIViewController *)arg1;
- (NSString *)getAdCreativeToken;
- (void)loadAdData;
- (id)initWithSlot:(BUAdSlot *)arg1 rewardedVideoModel:(BURewardedVideoModel *)arg2;
- (id)initWithSlotID:(NSString *)arg1 rewardedVideoModel:(BURewardedVideoModel *)arg2;
@end
