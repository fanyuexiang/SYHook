//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FamilyDetailsController, UIImageView, UILabel;

@interface FamilyDetailsHeaderTitleView : UIView
{
    FamilyDetailsController *_controller;
    UILabel *_titleLab;
    UIImageView *_appImgView;
    UIView *_rightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIImageView *appImgView; // @synthesize appImgView=_appImgView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) __weak FamilyDetailsController *controller; // @synthesize controller=_controller;
- (void)refreshTheme;
- (void)reloadData;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;
- (void)dealloc;

@end

