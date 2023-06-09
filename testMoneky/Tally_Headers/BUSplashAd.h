//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class BUSplashCardView, BUSplashView, BUSplashZoomOutView, NSDictionary, NSString, UIView, UIViewController;
@protocol BUSplashAdDelegate, BUSplashCardDelegate, BUSplashZoomOutDelegate;

@interface BUSplashAd : BUInterfaceBaseObject <BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
{
    id <BUSplashAdDelegate> _delegate;
    id <BUSplashCardDelegate> _cardDelegate;
    id <BUSplashZoomOutDelegate> _zoomOutDelegate;
    BUSplashAd *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUSplashAd *iteration; // @synthesize iteration=_iteration;
@property(nonatomic) __weak id <BUSplashZoomOutDelegate> zoomOutDelegate; // @synthesize zoomOutDelegate=_zoomOutDelegate;
@property(nonatomic) __weak id <BUSplashCardDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
@property(nonatomic) __weak id <BUSplashAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)splashZoomOutViewDidClose:(id)arg1;
- (void)splashZoomOutViewDidClick:(id)arg1;
- (void)splashZoomOutReadyToShow:(id)arg1;
- (void)splashCardViewDidClose:(id)arg1;
- (void)splashCardViewDidClick:(id)arg1;
- (void)splashCardReadyToShow:(id)arg1;
- (void)splashVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)splashDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)splashAdViewControllerDidClose:(id)arg1;
- (void)splashAdDidClose:(id)arg1 closeType:(long long)arg2;
- (void)splashAdDidClick:(id)arg1;
- (void)splashAdDidShow:(id)arg1;
- (void)splashAdWillShow:(id)arg1;
- (void)splashAdRenderFail:(id)arg1 error:(id)arg2;
- (void)splashAdRenderSuccess:(id)arg1;
- (void)splashAdLoadFail:(id)arg1 error:(id)arg2;
- (void)splashAdLoadSuccess:(id)arg1;
- (id)initWithSlotID:(id)arg1 adSize:(struct CGSize)arg2;
- (id)initWithSlot:(id)arg1 adSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, nonatomic) BUSplashCardView *cardView; // @dynamic cardView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideSkipButton; // @dynamic hideSkipButton;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt; // @dynamic mediaExt;
@property(readonly, copy, nonatomic) NSString *slotID; // @dynamic slotID;
@property(readonly, nonatomic) __weak UIViewController *splashRootViewController; // @dynamic splashRootViewController;
@property(readonly, nonatomic) BUSplashView *splashView; // @dynamic splashView;
@property(readonly, nonatomic) UIView *splashViewSnapshot; // @dynamic splashViewSnapshot;
@property(readonly) Class superclass;
@property(nonatomic) _Bool supportCardView; // @dynamic supportCardView;
@property(nonatomic) _Bool supportZoomOutView; // @dynamic supportZoomOutView;
@property(nonatomic) double tolerateTimeout; // @dynamic tolerateTimeout;
@property(readonly, nonatomic) BUSplashZoomOutView *zoomOutView; // @dynamic zoomOutView;

@end

