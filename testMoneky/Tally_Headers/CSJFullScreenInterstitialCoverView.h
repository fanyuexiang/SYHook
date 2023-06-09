//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJFullScreenInterstitialAdView.h"

#import "CSJCoverViewDelegate-Protocol.h"
#import "CSJInterstitialCoverViewDelegate-Protocol.h"

@class NSString;

@interface CSJFullScreenInterstitialCoverView : CSJFullScreenInterstitialAdView <CSJCoverViewDelegate, CSJInterstitialCoverViewDelegate>
{
}

- (void)videoAdViewFinishViewDidClick:(id)arg1;
- (void)videoAdViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)videoAdViewDidClick:(id)arg1;
- (void)playerDidPlayFinish:(id)arg1;
- (void)playerReadyToPlay:(id)arg1;
- (void)interstitialCoverView:(id)arg1 videoStateDidChanged:(long long)arg2;
- (void)interstitialCoverView:(id)arg1 videoDidLoadFailWithError:(id)arg2;
- (void)coverViewClickVideo:(id)arg1;
- (void)coverViewClickDownload:(id)arg1 clickExtraInfo:(id)arg2;
- (void)coverViewClickClose:(id)arg1;
- (void)coverViewClickAdLogo:(id)arg1;
- (void)coverViewClick:(id)arg1 areaCategory:(long long)arg2 clickExtraInfo:(id)arg3;
- (void)logoImageViewAction;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithMaterial:(id)arg1 adSlot:(id)arg2 imageStyle:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

