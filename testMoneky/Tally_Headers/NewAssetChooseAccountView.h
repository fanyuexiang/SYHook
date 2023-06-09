//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UITableView;

@interface NewAssetChooseAccountView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    _Bool _hasdefaultaccount;
    UILabel *_titleLabel;
    UIView *_emptyView;
    long long _type;
    CDUnknownBlockType _closeClick;
    long long _defaultID;
    CDUnknownBlockType _clickOneAccount;
    long long _defaultOutID;
    NSString *_titleString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) long long defaultOutID; // @synthesize defaultOutID=_defaultOutID;
@property(copy, nonatomic) CDUnknownBlockType clickOneAccount; // @synthesize clickOneAccount=_clickOneAccount;
@property(nonatomic) long long defaultID; // @synthesize defaultID=_defaultID;
@property(copy, nonatomic) CDUnknownBlockType closeClick; // @synthesize closeClick=_closeClick;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)refreshList;
- (void)viewClose;
- (void)footerbtnclick:(id)arg1;
- (void)clickAdd;
- (id)choosefooterView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 withtype:(long long)arg2 with:(long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

