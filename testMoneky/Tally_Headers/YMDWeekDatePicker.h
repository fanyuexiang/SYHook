//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBBillDatePicker.h"

@class NSDateFormatter, NSMutableArray, NSString;

@interface YMDWeekDatePicker : CBBillDatePicker
{
    NSMutableArray *_dayWeekArray;
    NSString *_selectedDayWeek;
    NSDateFormatter *_dateFormatter;
    NSString *_currentYear;
    NSString *_currentMonth;
    long long _currentDay;
    NSMutableArray *_fullMonthArray;
    NSMutableArray *_currentMonthArray;
    long long _maxYearCount;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *selectedDayWeek; // @synthesize selectedDayWeek=_selectedDayWeek;
@property(nonatomic) long long maxYearCount; // @synthesize maxYearCount=_maxYearCount;
- (void)cb_selectDateFinishAction;
- (void)cb_refresehSelectMonthDayWeekData;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)selectCurrentDate;
- (void)show;
- (void)cb_getDayWeek;
- (void)adjustCurrentSelectStateByDate:(id)arg1;
- (void)setupYearMonthDayWeek;

@end
