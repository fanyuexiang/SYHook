//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

@class BUMUserConfig, NSString;

@interface BUMSdkInitConfig : BUInterfaceBaseObject
{
    _Bool _valid;
    _Bool _custom;
    BUMUserConfig *_userConfig;
    NSString *_appID;
    NSString *_appKey;
    NSString *_name;
    NSString *_customAdnClassName;
    NSString *_customBannerAdapterClassName;
    NSString *_customInterstitialAdapterClassName;
    NSString *_customRewardedVideoAdapterClassName;
    NSString *_customFullscreenVideoAdapterClassName;
    NSString *_customSplashAdapterClassName;
    NSString *_customNativeAdapterClassName;
    NSString *_customDrawAdapterClassName;
    BUMSdkInitConfig *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUMSdkInitConfig *iteration; // @synthesize iteration=_iteration;
@property(readonly, copy, nonatomic) NSString *customDrawAdapterClassName; // @synthesize customDrawAdapterClassName=_customDrawAdapterClassName;
@property(readonly, copy, nonatomic) NSString *customNativeAdapterClassName; // @synthesize customNativeAdapterClassName=_customNativeAdapterClassName;
@property(readonly, copy, nonatomic) NSString *customSplashAdapterClassName; // @synthesize customSplashAdapterClassName=_customSplashAdapterClassName;
@property(readonly, copy, nonatomic) NSString *customFullscreenVideoAdapterClassName; // @synthesize customFullscreenVideoAdapterClassName=_customFullscreenVideoAdapterClassName;
@property(readonly, copy, nonatomic) NSString *customRewardedVideoAdapterClassName; // @synthesize customRewardedVideoAdapterClassName=_customRewardedVideoAdapterClassName;
@property(readonly, copy, nonatomic) NSString *customInterstitialAdapterClassName; // @synthesize customInterstitialAdapterClassName=_customInterstitialAdapterClassName;
@property(readonly, copy, nonatomic) NSString *customBannerAdapterClassName; // @synthesize customBannerAdapterClassName=_customBannerAdapterClassName;
@property(readonly, copy, nonatomic) NSString *customAdnClassName; // @synthesize customAdnClassName=_customAdnClassName;
@property(readonly, nonatomic) _Bool custom; // @synthesize custom=_custom;
@property(readonly, nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) BUMUserConfig *userConfig; // @synthesize userConfig=_userConfig;
- (id)init;

@end
