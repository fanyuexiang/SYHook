//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AssetBaseController.h"

@class AssetHomeListTableView, UIView;

@interface AssetHomeController : AssetBaseController
{
    _Bool _needRequest;
    AssetHomeListTableView *_tableView;
    UIView *_headerBgView;
    UIView *_footerBgView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needRequest; // @synthesize needRequest=_needRequest;
@property(retain, nonatomic) UIView *footerBgView; // @synthesize footerBgView=_footerBgView;
@property(retain, nonatomic) UIView *headerBgView; // @synthesize headerBgView=_headerBgView;
@property(retain, nonatomic) AssetHomeListTableView *tableView; // @synthesize tableView=_tableView;
- (void)responseNotification:(id)arg1;
- (void)setupListView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
