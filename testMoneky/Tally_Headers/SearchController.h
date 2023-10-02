//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class AdjustButton, DetaiSearchTableView, NSString, SearchHeaderView, SearchTallyChooseView, UIImageView, UILabel, UITextField, UIView;

@interface SearchController : UIViewController <UITextFieldDelegate>
{
    UIImageView *_chooseimgView;
    AdjustButton *_currentBtn;
    UITextField *_seachtextfield;
    _Bool _isSearch;
    UILabel *_timeLabel;
    _Bool _isAdvanceSearch;
    _Bool _noLabel;
    long long _tallyType;
    long long _sortType;
    NSString *_startTimeString;
    NSString *_endTimeString;
    NSString *_searchString;
    NSString *_typeName;
    long long _cid;
    UIView *_filerbgView;
    SearchTallyChooseView *_chooseView;
    SearchHeaderView *_searchHeaderView;
    DetaiSearchTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DetaiSearchTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SearchHeaderView *searchHeaderView; // @synthesize searchHeaderView=_searchHeaderView;
@property(retain, nonatomic) SearchTallyChooseView *chooseView; // @synthesize chooseView=_chooseView;
@property(retain, nonatomic) UIView *filerbgView; // @synthesize filerbgView=_filerbgView;
@property(nonatomic) _Bool noLabel; // @synthesize noLabel=_noLabel;
@property(nonatomic) long long cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSString *endTimeString; // @synthesize endTimeString=_endTimeString;
@property(retain, nonatomic) NSString *startTimeString; // @synthesize startTimeString=_startTimeString;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
- (void)searchWithKeyWord:(id)arg1;
- (void)chooseTap;
- (void)tallyDetailAction:(id)arg1;
- (void)updateTimeString:(id)arg1 end:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)closeAction;
- (void)backAction;
- (void)refreshParam;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

