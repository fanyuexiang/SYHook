//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJSplashBottomBaseComponentView.h"

@class CAGradientLayer, CSJSplashRippleAnimationView, UIImageView;

@interface CSJDynamicInteractionSlide2_4View : CSJSplashBottomBaseComponentView
{
    UIImageView *_touchHandleImageView;
    CSJSplashRippleAnimationView *_rippleAnimationView;
    CAGradientLayer *_gradientTrailLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientTrailLayer; // @synthesize gradientTrailLayer=_gradientTrailLayer;
@property(retain, nonatomic) CSJSplashRippleAnimationView *rippleAnimationView; // @synthesize rippleAnimationView=_rippleAnimationView;
@property(retain, nonatomic) UIImageView *touchHandleImageView; // @synthesize touchHandleImageView=_touchHandleImageView;
- (void)startSplashBottomAnimation;
- (void)layoutSubviews;
- (void)buildUpViewWith:(id)arg1;
- (id)initWithComponentConfiguration:(id)arg1;

@end

