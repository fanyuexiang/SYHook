//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImageView, UILabel, VIPWeekRewardController;

@interface VIPWeekRewardTaskItemsView : UIView
{
    VIPWeekRewardController *_controller;
    UIView *_titleView;
    UILabel *_titleLab;
    UILabel *_desLab;
    UILabel *_subtitleLab;
    UIImageView *_titleImgView;
    UIButton *_titleBtn;
    UIView *_itemsView;
    NSArray *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *itemsView; // @synthesize itemsView=_itemsView;
@property(retain, nonatomic) UIButton *titleBtn; // @synthesize titleBtn=_titleBtn;
@property(retain, nonatomic) UIImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
@property(retain, nonatomic) UILabel *subtitleLab; // @synthesize subtitleLab=_subtitleLab;
@property(retain, nonatomic) UILabel *desLab; // @synthesize desLab=_desLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak VIPWeekRewardController *controller; // @synthesize controller=_controller;
- (double)regetHeight;
- (void)reloadData;
- (void)clickButtonAction:(id)arg1;
- (void)reloadDataWithItemsView;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

