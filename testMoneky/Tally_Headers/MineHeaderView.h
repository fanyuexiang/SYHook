//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AdjustButton, CAShapeLayer, LOTAnimationView, MineHeaderButton, MineSignTipView, MineViewController, MineVipActivitySectionView, UIButton, UIImageView, UILabel;

@interface MineHeaderView : UIView
{
    AdjustButton *_signinBtn;
    MineHeaderButton *_headerBtn;
    UIImageView *_vipImgView;
    UILabel *_vipStatusLabel;
    UILabel *_vipSubStatusLabel;
    UILabel *_vipDayLabel;
    LOTAnimationView *_signloadingView;
    UIButton *_vipBtn;
    MineVipActivitySectionView *_vipActivityView;
    double _sectionOffsetY;
    UIView *_vipView;
    UIButton *_newvipBtn;
    UILabel *_newvipstatusLabel;
    CAShapeLayer *_yellowlayer;
    _Bool _uploadMypageShowFreeVip;
    MineSignTipView *_signTipView;
    MineViewController *_controller;
    UILabel *_signinDaysLabel;
    UILabel *_tallyDaysLabel;
    UILabel *_tallyCountLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tallyCountLabel; // @synthesize tallyCountLabel=_tallyCountLabel;
@property(retain, nonatomic) UILabel *tallyDaysLabel; // @synthesize tallyDaysLabel=_tallyDaysLabel;
@property(retain, nonatomic) UILabel *signinDaysLabel; // @synthesize signinDaysLabel=_signinDaysLabel;
@property(nonatomic) __weak MineViewController *controller; // @synthesize controller=_controller;
- (void)refresVIPActivityInfo;
- (void)dealloc;
- (void)signinAction;
- (void)refresUesrInfo;
- (void)addVipViewWithOffsetY:(double)arg1;
- (void)addVipActivityView;
- (void)setupContent;

@end

