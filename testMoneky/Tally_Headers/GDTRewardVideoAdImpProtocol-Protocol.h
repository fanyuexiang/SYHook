//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTAdProtocol-Protocol.h"

@class GDTLoadAdParams, GDTRewardVideoAd, GDTServerSideVerificationOptions, NSDictionary, NSString, UIViewController;
@protocol GDTRewardedVideoAdImpDelegate;

@protocol GDTRewardVideoAdImpProtocol <GDTAdProtocol>
@property(retain, nonatomic) NSDictionary *mediationExtDict;
@property(retain, nonatomic) GDTServerSideVerificationOptions *serverSideVerificationOptions;
@property(nonatomic) __weak id adDelegate;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(nonatomic) _Bool videoMuted;
@property(readonly, nonatomic) NSString *placementId;
@property(copy, nonatomic) NSString *adNetworkName;
@property(nonatomic) __weak id <GDTRewardedVideoAdImpDelegate> delegate;
@property(readonly, nonatomic) long long expiredTimestamp;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
@property(nonatomic) __weak GDTRewardVideoAd *rewardVideoAd;
- (double)videoDuration;
- (NSString *)eCPMLevel;
- (long long)eCPM;
- (_Bool)showAdFromRootViewController:(UIViewController *)arg1;
- (void)loadAd;
- (id)initWithPlacementId:(NSString *)arg1 serverType:(long long)arg2;
- (id)initWithPlacementId:(NSString *)arg1;
@end

