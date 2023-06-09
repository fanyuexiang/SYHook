//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JXCategoryIndicatorCell.h"

@class CALayer, NSLayoutConstraint, UILabel;

@interface JXCategoryTitleCell : JXCategoryIndicatorCell
{
    UILabel *_titleLabel;
    UILabel *_maskTitleLabel;
    NSLayoutConstraint *_titleLabelCenterX;
    NSLayoutConstraint *_titleLabelCenterY;
    NSLayoutConstraint *_maskTitleLabelCenterX;
    CALayer *_titleMaskLayer;
    CALayer *_maskTitleMaskLayer;
    NSLayoutConstraint *_maskTitleLabelCenterY;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *maskTitleLabelCenterY; // @synthesize maskTitleLabelCenterY=_maskTitleLabelCenterY;
@property(retain, nonatomic) CALayer *maskTitleMaskLayer; // @synthesize maskTitleMaskLayer=_maskTitleMaskLayer;
@property(retain, nonatomic) CALayer *titleMaskLayer; // @synthesize titleMaskLayer=_titleMaskLayer;
@property(retain, nonatomic) NSLayoutConstraint *maskTitleLabelCenterX; // @synthesize maskTitleLabelCenterX=_maskTitleLabelCenterX;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelCenterY; // @synthesize titleLabelCenterY=_titleLabelCenterY;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelCenterX; // @synthesize titleLabelCenterX=_titleLabelCenterX;
@property(retain, nonatomic) UILabel *maskTitleLabel; // @synthesize maskTitleLabel=_maskTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (CDUnknownBlockType)preferredTitleColorAnimationBlock:(id)arg1;
- (CDUnknownBlockType)preferredTitleStrokeWidthAnimationBlock:(id)arg1 attributedString:(id)arg2;
- (CDUnknownBlockType)preferredTitleZoomAnimationBlock:(id)arg1 baseScale:(double)arg2;
- (void)reloadData:(id)arg1;
- (void)layoutSubviews;
- (void)initializeViews;

@end

