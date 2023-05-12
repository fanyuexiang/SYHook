//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TallyLedgerViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class AdjustButton, NSString, SearchHeaderView, SearchTallyChooseView, TallyLedgerDetaiSearchTableView, UILabel, UITextField;

@interface TallyLedgerSearchViewController : TallyLedgerViewController <UITextFieldDelegate>
{
    TallyLedgerDetaiSearchTableView *_tableView;
    AdjustButton *_currentBtn;
    SearchTallyChooseView *_chooseView;
    UITextField *_seachtextfield;
    _Bool _isSearch;
    UILabel *_timeLabel;
    _Bool _noLabel;
    long long _tallyType;
    long long _sortType;
    NSString *_startTimeString;
    NSString *_endTimeString;
    NSString *_searchString;
    NSString *_typeName;
    long long _cid;
    SearchHeaderView *_searchHeaderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SearchHeaderView *searchHeaderView; // @synthesize searchHeaderView=_searchHeaderView;
@property(nonatomic) _Bool noLabel; // @synthesize noLabel=_noLabel;
@property(nonatomic) long long cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSString *endTimeString; // @synthesize endTimeString=_endTimeString;
@property(retain, nonatomic) NSString *startTimeString; // @synthesize startTimeString=_startTimeString;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
- (void)updateTimeString:(id)arg1 end:(id)arg2;
- (void)btnClick:(id)arg1;
- (void)setupSegmentView;
- (void)keyboardWillHide:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)closeAction;
- (void)refreshParam;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

