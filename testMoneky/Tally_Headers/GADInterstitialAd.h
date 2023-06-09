//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADFullScreenPresentingAd-Protocol.h"

@class GADFullScreenAd, GADResponseInfo, NSString;
@protocol GADAppEventDelegate, GADFullScreenContentDelegate;

@interface GADInterstitialAd : NSObject <GADFullScreenPresentingAd>
{
    GADFullScreenAd *_fullScreenAd;
    id <GADFullScreenContentDelegate> _fullScreenContentDelegate;
    id <GADAppEventDelegate> _appEventDelegate;
}

+ (void)loadWithAdUnitID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadFullScreenAdWithAdUnitID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
@property(nonatomic) __weak id <GADFullScreenContentDelegate> fullScreenContentDelegate; // @synthesize fullScreenContentDelegate=_fullScreenContentDelegate;
- (void)fullScreenAd:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)adDidRecordClick:(id)arg1;
- (void)adDidRecordImpression:(id)arg1;
- (void)ad:(id)arg1 didFailToPresentFullScreenContentWithError:(id)arg2;
- (void)adDidDismissFullScreenContent:(id)arg1;
- (void)adWillDismissFullScreenContent:(id)arg1;
- (void)adDidPresentFullScreenContent:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType paidEventHandler;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
@property(readonly, nonatomic) NSString *adUnitID;
- (void)presentFromRootViewController:(id)arg1;
- (_Bool)canPresentFromRootViewController:(id)arg1 error:(id *)arg2;
- (id)initWithFullScreenAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

