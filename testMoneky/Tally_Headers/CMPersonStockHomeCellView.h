//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class StockModel, UILabel;

@interface CMPersonStockHomeCellView : UIView
{
    UILabel *_nameLabel;
    UILabel *_codeLabel;
    UILabel *_plLabel;
    UILabel *_plPercentLabel;
    UILabel *_costPriceLabel;
    UILabel *_currentPriceLabel;
    UILabel *_holdLabel;
    UILabel *_canSellLabel;
    StockModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StockModel *model; // @synthesize model=_model;
- (id)initWithFrame:(struct CGRect)arg1;

@end

