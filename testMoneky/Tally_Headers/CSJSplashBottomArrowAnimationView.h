//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJSplashBottomBaseComponentView.h"

#import "CSJAnimationDelegate-Protocol.h"

@class CSJSplashArrowAnimationView, NSString;

@interface CSJSplashBottomArrowAnimationView : CSJSplashBottomBaseComponentView <CSJAnimationDelegate>
{
    CSJSplashArrowAnimationView *_arrowAnimationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJSplashArrowAnimationView *arrowAnimationView; // @synthesize arrowAnimationView=_arrowAnimationView;
- (void)bu_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)bu_animationDidStart:(id)arg1;
- (void)splashControlDestColorAnimation;
- (void)startSplashBottomAnimation;
- (struct CGRect)splashBottomFrameWithContainerFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)buildUpView;
- (id)initWithComponentConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
