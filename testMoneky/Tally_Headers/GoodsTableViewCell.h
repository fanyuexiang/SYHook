//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIImageView, UILabel, UIView;

@interface GoodsTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UIImageView *_tmallImageView;
    UILabel *_titleLabel;
    UILabel *_volumLabel;
    UILabel *_shoplabel;
    UILabel *_couponLabel;
    UILabel *_priceLabel;
    UILabel *_prepriceLabel;
    UIView *_prepriceLine;
    UILabel *_rebateLabel;
    long long _platformType;
    NSDictionary *_model;
    NSDictionary *_jdModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *jdModel; // @synthesize jdModel=_jdModel;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

