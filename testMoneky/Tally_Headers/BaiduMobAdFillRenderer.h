//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdAnimatorRenderNode.h"

@class BaiduMobAdColorInterpolator, BaiduMobAdNumberInterpolator, CALayer;

@interface BaiduMobAdFillRenderer : BaiduMobAdAnimatorRenderNode
{
    BaiduMobAdColorInterpolator *colorInterpolator_;
    BaiduMobAdNumberInterpolator *opacityInterpolator_;
    _Bool _evenOddFillRule;
    CALayer *centerPoint_DEBUG;
}

- (void).cxx_destruct;
- (id)actionsForRenderLayer;
- (void)rebuildOutputs;
- (void)performLocalUpdate;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 shapeFill:(id)arg2;

@end

