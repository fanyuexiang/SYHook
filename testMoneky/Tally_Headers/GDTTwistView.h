//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface GDTTwistView : UIView
{
    double _progress;
    UIView *_backView;
    CAShapeLayer *_arrowLayer;
    CAShapeLayer *_progressLayer;
    double _arrowWidth;
    double _marginTop;
    double _angle;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) double marginTop; // @synthesize marginTop=_marginTop;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)GDTfunctionv79VKa:(double)arg1;
- (id)GDTfunctionn258D1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

