//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicInteractionAbstractDecorator.h"

@class CSJDynamicInteractionMaskView, CSJDynamicInteractionSlide3View;

@interface CSJDynamicInteractionSlide3Decorator : CSJDynamicInteractionAbstractDecorator
{
    CSJDynamicInteractionSlide3View *_interactionView;
    CSJDynamicInteractionMaskView *_maskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJDynamicInteractionMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CSJDynamicInteractionSlide3View *interactionView; // @synthesize interactionView=_interactionView;
- (void)interactionViewDidShow;
- (void)hiddenInteractionAnimaiton;
- (void)showInteractionAnimation;
- (void)render;

@end
