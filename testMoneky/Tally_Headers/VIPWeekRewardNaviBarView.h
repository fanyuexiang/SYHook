//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface VIPWeekRewardNaviBarView : UIView
{
    UIView *_naviBarBgView;
    UIButton *_naviBarLeftBtn;
    UILabel *_naviBarTitleLab;
    UIButton *_naviBarRightBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *naviBarRightBtn; // @synthesize naviBarRightBtn=_naviBarRightBtn;
@property(retain, nonatomic) UILabel *naviBarTitleLab; // @synthesize naviBarTitleLab=_naviBarTitleLab;
@property(retain, nonatomic) UIButton *naviBarLeftBtn; // @synthesize naviBarLeftBtn=_naviBarLeftBtn;
@property(retain, nonatomic) UIView *naviBarBgView; // @synthesize naviBarBgView=_naviBarBgView;
- (void)resetBackgroundColor:(_Bool)arg1;
- (void)resetNaviBarViewAlpha:(double)arg1 fixAlpha:(double)arg2;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

