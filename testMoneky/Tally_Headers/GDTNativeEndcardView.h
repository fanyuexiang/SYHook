//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDTAdBaseModel, UIButton, UIImageView, UILabel;

@interface GDTNativeEndcardView : UIView
{
    GDTAdBaseModel *_adModel;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_starView;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (void)GDTfunctionl3M4xv;
- (void)GDTfunctionx6O09O;
- (id)initWithFrame:(struct CGRect)arg1 adModel:(id)arg2;

@end

