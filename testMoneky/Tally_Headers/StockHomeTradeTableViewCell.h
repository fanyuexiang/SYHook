//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class StockModel;

@interface StockHomeTradeTableViewCell : UITableViewCell
{
    StockModel *_model;
    CDUnknownBlockType _tradeClick;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tradeClick; // @synthesize tradeClick=_tradeClick;
@property(retain, nonatomic) StockModel *model; // @synthesize model=_model;
- (void)tradeEvent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

