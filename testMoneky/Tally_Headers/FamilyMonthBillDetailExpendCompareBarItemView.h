//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface FamilyMonthBillDetailExpendCompareBarItemView : UIView
{
    UILabel *_valueLab;
    UIView *_valueLineView;
    UIView *_lineView;
    UILabel *_monthLab;
    double _maxValueHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double maxValueHeight; // @synthesize maxValueHeight=_maxValueHeight;
@property(retain, nonatomic) UILabel *monthLab; // @synthesize monthLab=_monthLab;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *valueLineView; // @synthesize valueLineView=_valueLineView;
@property(retain, nonatomic) UILabel *valueLab; // @synthesize valueLab=_valueLab;
- (void)clearData;
- (id)initWithFrame:(struct CGRect)arg1 maxValueHeight:(double)arg2;

@end

