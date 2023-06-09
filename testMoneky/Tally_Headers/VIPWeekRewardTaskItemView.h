//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, VIPWeekRewardController, VIPWeekRewardTaskItem;

@interface VIPWeekRewardTaskItemView : UIView
{
    VIPWeekRewardController *_controller;
    UILabel *_titleLab;
    UIView *_smalltitleView;
    UILabel *_subtitleLab;
    UIButton *_rewardBtn;
    VIPWeekRewardTaskItem *_data;
}

+ (double)regetHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) VIPWeekRewardTaskItem *data; // @synthesize data=_data;
@property(retain, nonatomic) UIButton *rewardBtn; // @synthesize rewardBtn=_rewardBtn;
@property(retain, nonatomic) UILabel *subtitleLab; // @synthesize subtitleLab=_subtitleLab;
@property(retain, nonatomic) UIView *smalltitleView; // @synthesize smalltitleView=_smalltitleView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) __weak VIPWeekRewardController *controller; // @synthesize controller=_controller;
- (void)reloadData;
- (void)clickButtonAction:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

