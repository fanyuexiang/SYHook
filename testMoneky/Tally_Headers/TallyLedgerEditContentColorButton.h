//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAGradientLayer, TallyLedgerEditContentColorItem, UIView;

@interface TallyLedgerEditContentColorButton : UIButton
{
    UIView *_colorView;
    CAGradientLayer *_gradientLayer;
    UIView *_borderView;
    TallyLedgerEditContentColorItem *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TallyLedgerEditContentColorItem *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
- (void)reloadData;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
