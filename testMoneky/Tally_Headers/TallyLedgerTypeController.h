//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TallyLedgerViewController.h"

@class NSString, SKThemeSettingItem, TallyLedgerTypeDataSource, TallyLedgerTypeHandleEvent, TallyLedgerTypeViewManager;

@interface TallyLedgerTypeController : TallyLedgerViewController
{
    long long _deleteRow;
    _Bool _closeRightBarItem;
    TallyLedgerTypeDataSource *_dataSource;
    TallyLedgerTypeViewManager *_viewManager;
    TallyLedgerTypeHandleEvent *_handleEvent;
    long long _networkStatus;
    long long _tallyType;
    NSString *_editTypeID;
    SKThemeSettingItem *_theme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKThemeSettingItem *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSString *editTypeID; // @synthesize editTypeID=_editTypeID;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
@property(nonatomic) _Bool closeRightBarItem; // @synthesize closeRightBarItem=_closeRightBarItem;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) TallyLedgerTypeHandleEvent *handleEvent; // @synthesize handleEvent=_handleEvent;
@property(retain, nonatomic) TallyLedgerTypeViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) TallyLedgerTypeDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)networkStatusChangedNotification:(id)arg1;
- (void)typeEditeChangedNotification:(id)arg1;
- (void)typeAddChangedNotification:(id)arg1;
- (void)typeDeleteChangedNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
