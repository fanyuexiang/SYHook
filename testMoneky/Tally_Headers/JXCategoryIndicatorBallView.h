//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JXCategoryIndicatorComponentView.h"

@class CAShapeLayer, UIView;

@interface JXCategoryIndicatorBallView : JXCategoryIndicatorComponentView
{
    double _ballScrollOffsetX;
    UIView *_smallBall;
    UIView *_bigBall;
    CAShapeLayer *_shapeLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *bigBall; // @synthesize bigBall=_bigBall;
@property(retain, nonatomic) UIView *smallBall; // @synthesize smallBall=_smallBall;
@property(nonatomic) double ballScrollOffsetX; // @synthesize ballScrollOffsetX=_ballScrollOffsetX;
- (id)getBezierPathWithSmallCir:(id)arg1 andBigCir:(id)arg2;
- (void)jx_selectedCell:(id)arg1;
- (void)jx_contentScrollViewDidScroll:(id)arg1;
- (void)jx_refreshState:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

