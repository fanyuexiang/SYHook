//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TallyLedgerViewController.h"

@class NSDictionary, TallyLedgerBatchTransDataTableView, UIButton, UIImageView;

@interface TallyLedgerBatchTransDataListViewController : TallyLedgerViewController
{
    UIImageView *_selectIcon;
    UIButton *_nextBtn;
    NSDictionary *_tallyTypeInfo;
    TallyLedgerBatchTransDataTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TallyLedgerBatchTransDataTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSDictionary *tallyTypeInfo; // @synthesize tallyTypeInfo=_tallyTypeInfo;
- (void)nextClick;
- (void)clickAll;
- (void)setupUI;
- (void)viewDidLoad;
- (void)dealloc;

@end

