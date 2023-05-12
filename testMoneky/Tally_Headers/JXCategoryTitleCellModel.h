//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JXCategoryIndicatorCellModel.h"

@class NSString, UIColor, UIFont;

@interface JXCategoryTitleCellModel : JXCategoryIndicatorCellModel
{
    _Bool _titleLabelMaskEnabled;
    _Bool _titleLabelZoomEnabled;
    _Bool _titleLabelStrokeWidthEnabled;
    NSString *_title;
    long long _titleNumberOfLines;
    UIColor *_titleNormalColor;
    UIColor *_titleCurrentColor;
    UIColor *_titleSelectedColor;
    UIFont *_titleFont;
    UIFont *_titleSelectedFont;
    double _titleLabelNormalZoomScale;
    double _titleLabelCurrentZoomScale;
    double _titleLabelSelectedZoomScale;
    double _titleLabelZoomSelectedVerticalOffset;
    double _titleLabelNormalStrokeWidth;
    double _titleLabelCurrentStrokeWidth;
    double _titleLabelSelectedStrokeWidth;
    double _titleLabelVerticalOffset;
    unsigned long long _titleLabelAnchorPointStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long titleLabelAnchorPointStyle; // @synthesize titleLabelAnchorPointStyle=_titleLabelAnchorPointStyle;
@property(nonatomic) double titleLabelVerticalOffset; // @synthesize titleLabelVerticalOffset=_titleLabelVerticalOffset;
@property(nonatomic) double titleLabelSelectedStrokeWidth; // @synthesize titleLabelSelectedStrokeWidth=_titleLabelSelectedStrokeWidth;
@property(nonatomic) double titleLabelCurrentStrokeWidth; // @synthesize titleLabelCurrentStrokeWidth=_titleLabelCurrentStrokeWidth;
@property(nonatomic) double titleLabelNormalStrokeWidth; // @synthesize titleLabelNormalStrokeWidth=_titleLabelNormalStrokeWidth;
@property(nonatomic, getter=isTitleLabelStrokeWidthEnabled) _Bool titleLabelStrokeWidthEnabled; // @synthesize titleLabelStrokeWidthEnabled=_titleLabelStrokeWidthEnabled;
@property(nonatomic) double titleLabelZoomSelectedVerticalOffset; // @synthesize titleLabelZoomSelectedVerticalOffset=_titleLabelZoomSelectedVerticalOffset;
@property(nonatomic) double titleLabelSelectedZoomScale; // @synthesize titleLabelSelectedZoomScale=_titleLabelSelectedZoomScale;
@property(nonatomic) double titleLabelCurrentZoomScale; // @synthesize titleLabelCurrentZoomScale=_titleLabelCurrentZoomScale;
@property(nonatomic) double titleLabelNormalZoomScale; // @synthesize titleLabelNormalZoomScale=_titleLabelNormalZoomScale;
@property(nonatomic, getter=isTitleLabelZoomEnabled) _Bool titleLabelZoomEnabled; // @synthesize titleLabelZoomEnabled=_titleLabelZoomEnabled;
@property(nonatomic, getter=isTitleLabelMaskEnabled) _Bool titleLabelMaskEnabled; // @synthesize titleLabelMaskEnabled=_titleLabelMaskEnabled;
@property(retain, nonatomic) UIFont *titleSelectedFont; // @synthesize titleSelectedFont=_titleSelectedFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleSelectedColor; // @synthesize titleSelectedColor=_titleSelectedColor;
@property(retain, nonatomic) UIColor *titleCurrentColor; // @synthesize titleCurrentColor=_titleCurrentColor;
@property(retain, nonatomic) UIColor *titleNormalColor; // @synthesize titleNormalColor=_titleNormalColor;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

