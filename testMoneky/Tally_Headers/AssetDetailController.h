//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AssetBaseController.h"

@class AssetDetailHeaderView, AssetDetailTableView, AssetItemModel;

@interface AssetDetailController : AssetBaseController
{
    AssetItemModel *_accountModel;
    AssetDetailHeaderView *_headerView;
    AssetDetailTableView *_listTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AssetDetailTableView *listTable; // @synthesize listTable=_listTable;
@property(retain, nonatomic) AssetDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) AssetItemModel *accountModel; // @synthesize accountModel=_accountModel;
- (void)editAmountAction;
- (void)deleteAssetAction;
- (void)editAssetAction;
- (void)transferAssetAction;
- (void)responseNotification:(id)arg1;
- (void)reloadDataWithHeaderView;
- (void)setupRecordView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
