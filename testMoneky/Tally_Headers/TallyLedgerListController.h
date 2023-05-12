//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TallyLedgerListDataSource, TallyLedgerListHandleEvent, TallyLedgerListViewManager;

@interface TallyLedgerListController : UIViewController
{
    long long _fromSource;
    TallyLedgerListDataSource *_dataSource;
    TallyLedgerListViewManager *_viewManager;
    TallyLedgerListHandleEvent *_handleEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TallyLedgerListHandleEvent *handleEvent; // @synthesize handleEvent=_handleEvent;
@property(retain, nonatomic) TallyLedgerListViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) TallyLedgerListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long fromSource; // @synthesize fromSource=_fromSource;
- (void)responseNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

