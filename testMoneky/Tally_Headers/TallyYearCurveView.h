//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSMutableArray;

@interface TallyYearCurveView : UIView
{
    double _edgeSpace;
    double _curveHeight;
    double _curveBottomY;
    double _monthOffsetY;
    double _dotRadius;
    NSMutableArray *_pointArray;
    NSMutableArray *_amountArray;
    NSArray *_monthIndexArray;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
- (double)widthForText:(id)arg1 attributed:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupAmountArray:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

