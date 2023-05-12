//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FamilyViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class FamilyEnsureAgreeTip, NSMutableArray, NSString, UIImageView, UIPickerView;

@interface FamilyEnsureViewController : FamilyViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSMutableArray *_yearArray;
    NSMutableArray *_monthArray;
    NSString *_selectedYear;
    NSString *_selectedMonth;
    UIImageView *_checkimageView;
    _Bool _isCheck;
    FamilyEnsureAgreeTip *_checkTipView;
    UIPickerView *_datePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPickerView *datePicker; // @synthesize datePicker=_datePicker;
- (void)closeNotification:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)nextAction;
- (void)checkTipShow;
- (void)changeCheck;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
