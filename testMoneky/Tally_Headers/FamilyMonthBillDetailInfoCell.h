//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FamilyMonthBillDetailBaseCell.h"

@class FamilyMonthBillDetailBalanceView, FamilyMonthBillDetailHeaderView, UIView;

@interface FamilyMonthBillDetailInfoCell : FamilyMonthBillDetailBaseCell
{
    FamilyMonthBillDetailHeaderView *_headerView;
    FamilyMonthBillDetailBalanceView *_balanceView;
    double _headerViewHeight;
    UIView *_conView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *conView; // @synthesize conView=_conView;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) FamilyMonthBillDetailBalanceView *balanceView; // @synthesize balanceView=_balanceView;
@property(retain, nonatomic) FamilyMonthBillDetailHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)responseClickCellAction;
- (void)reloadData;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
