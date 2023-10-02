//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUMCustomConfigAdapter-Protocol.h"

@class NSString;

@interface ABUBaiduConfig : NSObject <BUMCustomConfigAdapter>
{
    NSString *_appId;
}

+ (id)useCustomConfig;
+ (id)customConfig;
+ (id)shared;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)baiduVersion;
- (void)didRequestAdPrivacyConfigUpdate:(id)arg1;
- (id)drawAdapter;
- (id)fullscreenVideoAdapter;
- (id)interstitialAdapter;
- (id)nativeAdapter;
- (id)splashAdapter;
- (id)rewardedVideoAdapter;
- (id)bannerAdapter;
- (id)supportedMaximumVersion;
- (id)supportedMinimumVersion;
- (id)networkSdkVersion;
- (id)adapterVersion;
- (void)initializeAdapterWithConfiguration:(id)arg1;
- (id)basedOnCustomAdapterVersion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCustomAdapter;
@property(readonly) Class superclass;

@end

