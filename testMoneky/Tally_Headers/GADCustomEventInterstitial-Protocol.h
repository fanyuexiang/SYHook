//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADCustomEventRequest, NSString, UIViewController;
@protocol GADCustomEventInterstitialDelegate;

@protocol GADCustomEventInterstitial <NSObject>
@property(nonatomic) __weak id <GADCustomEventInterstitialDelegate> delegate;
- (void)presentFromRootViewController:(UIViewController *)arg1;
- (void)requestInterstitialAdWithParameter:(NSString *)arg1 label:(NSString *)arg2 request:(GADCustomEventRequest *)arg3;
- (id)init;
@end

