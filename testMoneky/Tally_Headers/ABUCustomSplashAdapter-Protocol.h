//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABUCustomAdapter-Protocol.h"

@class NSDictionary, NSString, UIViewController, UIWindow;
@protocol ABUCustomSplashAdapterBridge><ABUCustomSplashAdapterZoomOutViewBridge><ABUCustomSplashAdapterCardViewBridge;

@protocol ABUCustomSplashAdapter <ABUCustomAdapter>
- (CDStruct_2ec95fd7)mediatedAdStatus;
- (void)dismissSplashAd;
- (void)showSplashAdInWindow:(UIWindow *)arg1 parameter:(NSDictionary *)arg2;
- (void)loadSplashAdWithSlotID:(NSString *)arg1 andParameter:(NSDictionary *)arg2;

@optional
@property(nonatomic) __weak id <ABUCustomSplashAdapterBridge><ABUCustomSplashAdapterZoomOutViewBridge><ABUCustomSplashAdapterCardViewBridge> bridge;
- (void)showSplashCardInRootVC:(UIViewController *)arg1 parameter:(NSDictionary *)arg2;
@end
