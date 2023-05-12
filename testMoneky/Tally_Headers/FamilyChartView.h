//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FamilyPopView, NSDate, NSFetchRequest, NSMutableArray, NSNumberFormatter, NSString, UIPanGestureRecognizer, UIScrollView;

@interface FamilyChartView : UIView
{
    NSMutableArray *_dataArray;
    NSFetchRequest *_fetchRequest;
    NSString *_currentDate;
    int _currentYear;
    int _currentMonth;
    int _currentDay;
    FamilyPopView *_popView;
    double _topSpace;
    double _bottomSpace;
    double _leftSpace;
    double _chartHeight;
    long long _currentWeek;
    long long _currentWeekDay;
    long long _countWeek;
    long long _countWeekDay;
    NSDate *_countMondayDate;
    long long _dayCount;
    NSString *_countYear;
    UIPanGestureRecognizer *_panGesture;
    struct CGPoint _movePoint;
    int _maxAmountOfIndex;
    long long _tallyType;
    long long _dateType;
    NSString *_date;
    NSString *_typeName;
    UIScrollView *_scrollView;
    double _sumAmount;
    double _averageAmount;
    double _maxAmount;
    NSString *_maxAmountDate;
    NSNumberFormatter *_numFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumberFormatter *numFormatter; // @synthesize numFormatter=_numFormatter;
@property(readonly, copy, nonatomic) NSString *maxAmountDate; // @synthesize maxAmountDate=_maxAmountDate;
@property(nonatomic) int maxAmountOfIndex; // @synthesize maxAmountOfIndex=_maxAmountOfIndex;
@property(nonatomic) double maxAmount; // @synthesize maxAmount=_maxAmount;
@property(nonatomic) double averageAmount; // @synthesize averageAmount=_averageAmount;
@property(nonatomic) double sumAmount; // @synthesize sumAmount=_sumAmount;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(nonatomic) long long dateType; // @synthesize dateType=_dateType;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
- (void)hidePopView;
- (void)showPopView:(double)arg1;
- (void)panGesture:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tallyDataRefresh;
- (void)tallyDataChange:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)queryData;
- (void)updateData:(id)arg1 dateType:(long long)arg2;
- (void)setupWeek;
- (void)refreshDate;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

