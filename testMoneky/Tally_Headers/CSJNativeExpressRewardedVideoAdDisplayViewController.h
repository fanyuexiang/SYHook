//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CSJNativeExpressRewardedVideoAdView;

@interface CSJNativeExpressRewardedVideoAdDisplayViewController : UIViewController
{
    _Bool _isRewardedVideo;
    unsigned long long _transformDirection;
    CSJNativeExpressRewardedVideoAdView *_rewardExpressAdView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJNativeExpressRewardedVideoAdView *rewardExpressAdView; // @synthesize rewardExpressAdView=_rewardExpressAdView;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo=_isRewardedVideo;
@property(nonatomic) unsigned long long transformDirection; // @synthesize transformDirection=_transformDirection;
- (void)storeKitDidClose:(id)arg1;
- (void)storeKitWillOpen:(id)arg1;
- (void)preloadAppStore;
- (void)addNotification;
- (void)buidupViews;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNativeExpressAdView:(id)arg1;

@end

