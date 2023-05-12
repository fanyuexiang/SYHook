//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FamilyDetailsRecentBillsListView, NSMutableArray, NSString, UIButton, UILabel;

@interface FamilyDetailsRecentBillsView : UIView
{
    CDUnknownBlockType _refreshLayoutBlock;
    CDUnknownBlockType _selectMonthBlock;
    UIView *_headerView;
    UILabel *_titleLab;
    UIButton *_moreBtn;
    UIView *_bottomView;
    FamilyDetailsRecentBillsListView *_conView;
    NSString *_date;
    NSMutableArray *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) FamilyDetailsRecentBillsListView *conView; // @synthesize conView=_conView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType selectMonthBlock; // @synthesize selectMonthBlock=_selectMonthBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshLayoutBlock; // @synthesize refreshLayoutBlock=_refreshLayoutBlock;
- (void)clickButtonAction:(id)arg1;
- (void)reloadData;
- (void)loadDataWithDate:(id)arg1 data:(id)arg2;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

