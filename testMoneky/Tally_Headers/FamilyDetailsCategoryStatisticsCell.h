//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FamilyDetailBaseCell.h"

@class FamilyDetailsCategoryStatisticsView;

@interface FamilyDetailsCategoryStatisticsCell : FamilyDetailBaseCell
{
    FamilyDetailsCategoryStatisticsView *_monthView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FamilyDetailsCategoryStatisticsView *monthView; // @synthesize monthView=_monthView;
- (void)responseClickCellAction;
- (void)setMonthDate:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
