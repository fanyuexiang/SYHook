//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FCXPieChartView, NSFetchRequest, NSMutableArray, NSString, UILabel;

@interface FamilyChartTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSFetchRequest *_fetchRequest;
    NSMutableArray *_dataArray;
    long long _dateType;
    _Bool _isPie;
    long long _tallyType;
    CDUnknownBlockType _didSelectRowBlock;
    NSString *_date;
    NSString *_typeName;
    double _typeSumAmount;
    UILabel *_dateRangeTipLab;
    FCXPieChartView *_pieView;
    UILabel *_typeLabel;
    NSString *_previousDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *previousDate; // @synthesize previousDate=_previousDate;
@property(nonatomic) __weak UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(nonatomic) _Bool isPie; // @synthesize isPie=_isPie;
@property(retain, nonatomic) FCXPieChartView *pieView; // @synthesize pieView=_pieView;
@property(retain, nonatomic) UILabel *dateRangeTipLab; // @synthesize dateRangeTipLab=_dateRangeTipLab;
@property(nonatomic) double typeSumAmount; // @synthesize typeSumAmount=_typeSumAmount;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) CDUnknownBlockType didSelectRowBlock; // @synthesize didSelectRowBlock=_didSelectRowBlock;
@property(nonatomic) long long dateType; // @synthesize dateType=_dateType;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
- (void)updateDateRangeTipLab;
- (void)refreshPieData;
- (void)tallyDataRefresh;
- (void)tallyDataChange:(id)arg1;
- (id)queryTypeData:(id)arg1;
- (void)getTypeData:(id)arg1;
- (void)bindTallyType:(long long)arg1 dateType:(long long)arg2 date:(id)arg3;
- (void)updateData:(id)arg1 dateType:(long long)arg2 previousDate:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

