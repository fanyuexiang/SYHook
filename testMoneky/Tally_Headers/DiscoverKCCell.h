//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CBAttributedLabel, DiscoverModel, UIImageView, UILabel;

@interface DiscoverKCCell : UITableViewCell
{
    UIImageView *_imgView;
    UILabel *_sectionHeaderLabel;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UILabel *_buyCountLabel;
    CBAttributedLabel *_priceLabel;
    UILabel *_periodLabel;
    DiscoverModel *_model;
}

+ (void)setupData:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) DiscoverModel *model; // @synthesize model=_model;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

