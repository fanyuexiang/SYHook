//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FamilyMonthBillDetailBaseCell.h"

@class FamilyMonthBillDetailMembershipView;

@interface FamilyMonthBillDetailMembershipCell : FamilyMonthBillDetailBaseCell
{
    FamilyMonthBillDetailMembershipView *_membershipView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FamilyMonthBillDetailMembershipView *membershipView; // @synthesize membershipView=_membershipView;
- (void)pushTallyDetailAction:(id)arg1 memberType:(long long)arg2 tallyType:(long long)arg3;
- (void)responseClickCellAction;
- (void)reloadData;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

