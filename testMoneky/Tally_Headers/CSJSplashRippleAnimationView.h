//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAGradientLayer, CAShapeLayer, CSJAnimationConfiguration, NSString;

@interface CSJSplashRippleAnimationView : UIView <CAAnimationDelegate>
{
    CAGradientLayer *_At_SELLeft;
    CAShapeLayer *_MIT_HppCase;
    CSJAnimationConfiguration *_animationConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJAnimationConfiguration *animationConfiguration; // @synthesize animationConfiguration=_animationConfiguration;
@property(retain, nonatomic) CAShapeLayer *MIT_HppCase; // @synthesize MIT_HppCase=_MIT_HppCase;
@property(retain, nonatomic) CAGradientLayer *At_SELLeft; // @synthesize At_SELLeft=_At_SELLeft;
- (void)layoutSubviews;
- (id)Blue_valMeta:(double)arg1;
- (void)Slot_Root_log;
- (void)setup;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

