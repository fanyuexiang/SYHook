//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NTallyModel, UIImageView, UILabel;

@interface FamilyMonthBillDetailExpendCategoryListItemView : UIView
{
    UILabel *_indexLab;
    UIImageView *_iconImgView;
    UILabel *_remarkLab;
    UILabel *_dateLab;
    UILabel *_amountLab;
    NTallyModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NTallyModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *amountLab; // @synthesize amountLab=_amountLab;
@property(retain, nonatomic) UILabel *dateLab; // @synthesize dateLab=_dateLab;
@property(retain, nonatomic) UILabel *remarkLab; // @synthesize remarkLab=_remarkLab;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UILabel *indexLab; // @synthesize indexLab=_indexLab;
- (void)reloadData:(long long)arg1;
- (void)clearData;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

