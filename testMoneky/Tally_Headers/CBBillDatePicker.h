//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UIPickerView;

@interface CBBillDatePicker : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_datePicker;
    long long _dayNum;
    NSMutableArray *_yearArray;
    NSMutableArray *_monthArray;
    NSMutableArray *_dayArray;
    NSString *_selectedYear;
    NSString *_selectedMonth;
    NSString *_selectedDay;
    UIView *_backgroundView;
    long long _datePickerType;
    UILabel *_titleLabel;
    long long _minYear;
    long long _maxYear;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _selectDateFinishBlock;
}

+ (void)playNewViewSound;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectDateFinishBlock; // @synthesize selectDateFinishBlock=_selectDateFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) NSString *selectedDay; // @synthesize selectedDay=_selectedDay;
@property(copy, nonatomic) NSString *selectedMonth; // @synthesize selectedMonth=_selectedMonth;
@property(copy, nonatomic) NSString *selectedYear; // @synthesize selectedYear=_selectedYear;
@property(retain, nonatomic) UIPickerView *datePicker; // @synthesize datePicker=_datePicker;
@property(readonly, nonatomic) long long maxYear; // @synthesize maxYear=_maxYear;
@property(readonly, nonatomic) long long minYear; // @synthesize minYear=_minYear;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)dealloc;
- (void)cb_selectDateFinishAction;
- (void)cb_dismissAction;
- (void)cb_getDayNum;
- (void)cb_getCurrentDate;
- (void)selectCurrentDate;
- (void)show;
- (void)adjustCurrentSelectStateByYear:(id)arg1 month:(id)arg2;
- (void)adjustCurrentSelectStateByDate:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)applicationDidEnterBackgroundNotification;
- (void)setupYearMonthDayWeek;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 sureButtonTitle:(id)arg3 minYear:(long long)arg4 maxYear:(long long)arg5 topSpace:(double)arg6 pickerType:(long long)arg7 selectFinishBlock:(CDUnknownBlockType)arg8;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 sureButtonTitle:(id)arg3 topSpace:(double)arg4 pickerType:(long long)arg5 selectFinishBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
