//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADFullScreenContentDelegate-Protocol.h"
#import "GADFullScreenPresentingAd-Protocol.h"

@class GADFullScreenAd, GADResponseInfo, NSString;
@protocol GADFullScreenContentDelegate;

@interface GADAppOpenAd : NSObject <GADFullScreenContentDelegate, GADFullScreenPresentingAd>
{
    GADFullScreenAd *_fullScreenAd;
    id <GADFullScreenContentDelegate> _fullScreenContentDelegate;
}

+ (void)updateTargeting:(id)arg1 orientation:(long long)arg2;
+ (void)loadWithAdUnitID:(id)arg1 request:(id)arg2 orientation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GADFullScreenContentDelegate> fullScreenContentDelegate; // @synthesize fullScreenContentDelegate=_fullScreenContentDelegate;
- (void)adDidRecordClick:(id)arg1;
- (void)adDidRecordImpression:(id)arg1;
- (void)adDidDismissFullScreenContent:(id)arg1;
- (void)adWillDismissFullScreenContent:(id)arg1;
- (void)adDidPresentFullScreenContent:(id)arg1;
- (void)ad:(id)arg1 didFailToPresentFullScreenContentWithError:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType paidEventHandler;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
- (void)presentFromRootViewController:(id)arg1;
- (_Bool)canPresentFromRootViewController:(id)arg1 error:(id *)arg2;
- (id)initWithFullScreenAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
