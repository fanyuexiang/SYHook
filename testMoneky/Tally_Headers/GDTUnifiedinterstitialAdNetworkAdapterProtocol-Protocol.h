//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseAdNetworkAdapterProtocol-Protocol.h"

@class UIViewController;

@protocol GDTUnifiedinterstitialAdNetworkAdapterProtocol <GDTBaseAdNetworkAdapterProtocol>
- (void)presentAdFromRootViewController:(UIViewController *)arg1;
- (void)loadAd;
- (_Bool)isAdValid;

@optional
@property(nonatomic) _Bool shouldShowFullscreenAd;
@property(nonatomic) _Bool shouldLoadFullscreenAd;
@property(readonly, nonatomic) _Bool isVideoAd;
@property(nonatomic) long long maxVideoDuration;
@property(nonatomic) long long minVideoDuration;
@property(nonatomic) _Bool detailPageVideoMuted;
@property(nonatomic) _Bool videoMuted;
@property(nonatomic) _Bool videoAutoPlayOnWWAN;
- (double)videoPlayTime;
- (double)videoDuration;
@end

