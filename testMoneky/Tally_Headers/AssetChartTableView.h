//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AssetLineChartView, CBBillDatePicker, FCXPieChartView, NSMutableArray, NSMutableDictionary, NSString, UILabel;

@interface AssetChartTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataArray;
    AssetLineChartView *_lineChartView;
    FCXPieChartView *_pieChartView;
    UILabel *_rankLabel;
    long long _lastIndex;
    UILabel *_assetLabel;
    CBBillDatePicker *_datePicker;
    NSString *_year;
    long long _assetType;
    NSMutableDictionary *_alldata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *alldata; // @synthesize alldata=_alldata;
@property(nonatomic) long long assetType; // @synthesize assetType=_assetType;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (id)lineChartView;
- (id)datePicker;
- (void)hideDatePicker;
- (id)controller;
- (void)showDatePicker;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setupNetAsset:(id)arg1 with:(id)arg2;
- (void)showChartData:(_Bool)arg1;
- (void)requestChartData;
- (id)createShapeLayerWithFrame:(struct CGRect)arg1 fillColor:(struct CGColor *)arg2 lineWidth:(double)arg3 strokeColor:(struct CGColor *)arg4 byRoundingCorners:(unsigned long long)arg5 cornerRadii:(struct CGSize)arg6;
- (void)addHeaderView:(id)arg1 debt:(id)arg2;
- (void)userAccountChange;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
