//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJSplashBottomBaseComponentView.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, CSJTwistMotionManager, NSString, UIImageView, UIView;

@interface CSJSplashTwistComponentView : CSJSplashBottomBaseComponentView <CAAnimationDelegate>
{
    UIView *_maskView;
    UIImageView *_arrowEmptyImageView;
    UIImageView *_arrowFillImageView;
    CAShapeLayer *_arrowFillShapeLayer;
    UIImageView *_phoneImageView;
    CSJTwistMotionManager *_twistMotionManager;
    unsigned long long _layoutType;
    double _twistRotationThreshold;
}

- (void).cxx_destruct;
@property(nonatomic) double twistRotationThreshold; // @synthesize twistRotationThreshold=_twistRotationThreshold;
- (void)_onTapGR;
- (void)_runArrowFillAnimation;
- (void)startTwistUpdates;
- (void)_setupUI;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startSplashBottomAnimation;
- (struct CGRect)splashBottomFrameWithContainerFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithComponentConfiguration:(id)arg1 layoutType:(unsigned long long)arg2;
- (id)initWithComponentConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

