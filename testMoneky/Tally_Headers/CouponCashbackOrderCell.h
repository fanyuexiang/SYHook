//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CouponCashbackOrderModel, UIImageView, UILabel, UIView;

@interface CouponCashbackOrderCell : UITableViewCell
{
    UIImageView *_imgView;
    UIImageView *_typeImgView;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UILabel *_desLabel;
    UILabel *_dateLabel;
    UILabel *_earningsLabel;
    UIView *_bgView;
    CouponCashbackOrderModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CouponCashbackOrderModel *model; // @synthesize model=_model;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

