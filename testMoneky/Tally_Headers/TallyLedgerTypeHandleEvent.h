//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TallyLedgerTypeController, TallyLedgerTypeDataSource, TallyLedgerTypeViewManager;

@interface TallyLedgerTypeHandleEvent : NSObject
{
    _Bool _sortChanged;
    _Bool _popToRoot;
    TallyLedgerTypeController *_controller;
    TallyLedgerTypeDataSource *_dataSource;
    TallyLedgerTypeViewManager *_viewManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool popToRoot; // @synthesize popToRoot=_popToRoot;
@property(nonatomic) _Bool sortChanged; // @synthesize sortChanged=_sortChanged;
@property(nonatomic) __weak TallyLedgerTypeViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(nonatomic) __weak TallyLedgerTypeDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak TallyLedgerTypeController *controller; // @synthesize controller=_controller;
- (void)replaceData:(id)arg1;
- (_Bool)canDeleteTallyTypeInfo:(id)arg1;
- (void)reloadData;
- (void)networkChangedAction:(_Bool)arg1;
- (void)adjustShowIndex;
- (void)deleteTypeAction:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)addTypeAction:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)addTypeBtnAction;
- (void)backBtnAction;
- (void)tallyTypeChange:(id)arg1;

@end

