//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FamilyInfoModel, UIImageView, UILabel;

@interface FamilyMonthBillDetailHeaderView : UIView
{
    long long _year;
    long long _month;
    FamilyInfoModel *_model;
    UIImageView *_bgImgView;
    UIView *_yearView;
    UILabel *_yearLab;
    UILabel *_monthLab;
    UIView *_lineView;
    UIView *_avatarView;
    UIImageView *_avatarImgView1;
    UIImageView *_avatarImgView2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarImgView2; // @synthesize avatarImgView2=_avatarImgView2;
@property(retain, nonatomic) UIImageView *avatarImgView1; // @synthesize avatarImgView1=_avatarImgView1;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *monthLab; // @synthesize monthLab=_monthLab;
@property(retain, nonatomic) UILabel *yearLab; // @synthesize yearLab=_yearLab;
@property(retain, nonatomic) UIView *yearView; // @synthesize yearView=_yearView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) FamilyInfoModel *model; // @synthesize model=_model;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;
- (void)reloadData;
- (void)reloadDataWithMonth;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

