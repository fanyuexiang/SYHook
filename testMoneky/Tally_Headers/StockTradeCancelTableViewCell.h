//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class StockTradeCancelModel, UIButton, UILabel;

@interface StockTradeCancelTableViewCell : UITableViewCell
{
    UILabel *_tradetypeLabel;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_entrustpriceLabel;
    UILabel *_tradepriceLabel;
    UILabel *_entrustnumLabel;
    UILabel *_tradenumLabel;
    UIButton *_cancelBtn;
    StockTradeCancelModel *_model;
    CDUnknownBlockType _cancelEvent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelEvent; // @synthesize cancelEvent=_cancelEvent;
@property(retain, nonatomic) StockTradeCancelModel *model; // @synthesize model=_model;
- (void)cancelClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

