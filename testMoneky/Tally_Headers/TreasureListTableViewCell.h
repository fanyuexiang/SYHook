//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TreasureListModel, UIButton, UIImageView, UILabel;

@interface TreasureListTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_progressView;
    UILabel *_descLabel;
    UIButton *_btn;
    TreasureListModel *_data;
    CDUnknownBlockType _nextClick;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType nextClick; // @synthesize nextClick=_nextClick;
@property(copy, nonatomic) TreasureListModel *data; // @synthesize data=_data;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)btnClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

