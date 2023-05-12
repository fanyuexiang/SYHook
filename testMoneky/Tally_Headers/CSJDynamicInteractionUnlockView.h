//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJSplashBottomBaseComponentView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CSJDynamicInteractionContainerView, CSJDynamicInteractionUnlockAnimationView, NSString;

@interface CSJDynamicInteractionUnlockView : CSJSplashBottomBaseComponentView <UIGestureRecognizerDelegate>
{
    _Bool _unlockAnimationValid;
    CSJDynamicInteractionContainerView *_backgroundContainerView;
    CSJDynamicInteractionUnlockAnimationView *_unlockAnimationView;
    struct CGPoint _beginPoint;
    struct CGPoint _endPoint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool unlockAnimationValid; // @synthesize unlockAnimationValid=_unlockAnimationValid;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint beginPoint; // @synthesize beginPoint=_beginPoint;
@property(retain, nonatomic) CSJDynamicInteractionUnlockAnimationView *unlockAnimationView; // @synthesize unlockAnimationView=_unlockAnimationView;
@property(retain, nonatomic) CSJDynamicInteractionContainerView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
- (void)layoutSubviews;
- (struct CGRect)splashBottomFrameWithContainerFrame:(struct CGRect)arg1;
- (void)stopSplashBottomAnimation;
- (void)startSplashBottomAnimation;
- (void)animationViewTapAction:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)animationViewAddGesture;
- (void)buildUpView;
- (id)initWithComponentConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

