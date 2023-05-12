//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "JXPagerViewListViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UILabel, UIScrollView, UIView;

@interface CMPersonStockViewController : UIViewController <UIScrollViewDelegate, JXPagerViewListViewDelegate>
{
    UILabel *_noDataLabel;
    NSDictionary *_marketDict;
    UILabel *_totalAssetLabel;
    UILabel *_profitrateLabel;
    UILabel *_holdNumLabel;
    UILabel *_winrateLabel;
    double _yesterdayAsset;
    double _availableMoney;
    double _entrustMoney;
    UIScrollView *_contentScroll;
    UIView *_stockholdbg;
    UILabel *_stockholdnodataLabel;
    UIView *_stockholdheader;
    UIView *_stockrecordbg;
    UILabel *_stockrecordnodateLabel;
    UIView *_stockrecordheader;
    NSString *_uid;
    NSMutableArray *_dataArray;
    UILabel *_availableMoneyLabel;
    CDUnknownBlockType _scrollCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType scrollCallback; // @synthesize scrollCallback=_scrollCallback;
@property(retain, nonatomic) UIScrollView *contentScroll; // @synthesize contentScroll=_contentScroll;
@property(retain, nonatomic) UILabel *availableMoneyLabel; // @synthesize availableMoneyLabel=_availableMoneyLabel;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)gotoHold;
- (void)gotoRecrod;
- (void)refreshHoldStock;
- (void)refreshMarketData;
- (void)marketDidChangeNotification:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)listDidDisappear;
- (void)listDidAppear;
- (void)listViewDidScrollCallback:(CDUnknownBlockType)arg1;
- (id)listScrollView;
- (id)listView;
- (id)addMoneyLabelWithTitle:(id)arg1 left:(double)arg2 width:(double)arg3 textAlignment:(long long)arg4 superView:(id)arg5;
- (void)setupUI;
- (void)requestData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

