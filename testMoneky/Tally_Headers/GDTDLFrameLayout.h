//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTDLLayerFramelayout.h"

@class CALayer, UIView;

@interface GDTDLFrameLayout : GDTDLLayerFramelayout
{
    UIView *_rootCocoaView;
    CALayer *_rootCanvasLayer;
    unsigned long long _layoutGravity;
    UIView *_containerView;
    struct CGRect nodeFrame;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct CGRect nodeFrame; // @synthesize nodeFrame;
- (void)setLayoutGravity:(unsigned long long)arg1;
- (unsigned long long)layoutGravity;
- (id)rootCanvasLayer;
- (id)rootCocoaView;
- (void).cxx_destruct;
- (void)setRootCanvasLayer:(id)arg1;
- (void)setRootCocoaView:(id)arg1;
- (id)cocoaView;
- (void)GDTfunctionb8wWTn;
- (id)init;

@end

