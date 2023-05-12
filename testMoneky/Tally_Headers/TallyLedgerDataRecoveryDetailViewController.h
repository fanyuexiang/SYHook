//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TallyLedgerViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, SKThemeBaseView, UIImage, UILabel, UITableView, UIView;

@interface TallyLedgerDataRecoveryDetailViewController : TallyLedgerViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_titleArray;
    UILabel *_typeLabel;
    double _remarkHeight;
    long long _operationType;
    UIImage *_remarkimage;
    struct CGSize _remarkimagesize;
    NSDictionary *_editModel;
    CDUnknownBlockType _operationSucces;
    UIView *_naviView;
    SKThemeBaseView *_themeView;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SKThemeBaseView *themeView; // @synthesize themeView=_themeView;
@property(retain, nonatomic) UIView *naviView; // @synthesize naviView=_naviView;
@property(copy, nonatomic) CDUnknownBlockType operationSucces; // @synthesize operationSucces=_operationSucces;
@property(retain, nonatomic) NSDictionary *editModel; // @synthesize editModel=_editModel;
- (void)imageTap;
- (void)loadRemarkImageViewWithData:(id)arg1;
- (void)loadRemarkImageView;
- (void)loadLocalWithFile:(id)arg1;
- (void)operationData;
- (void)recoveryAction;
- (void)deleteAction;
- (void)reloadThemeViewImage:(id)arg1;
- (id)themeImage:(id)arg1;
- (void)dealloc;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setupNaviView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)backAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

