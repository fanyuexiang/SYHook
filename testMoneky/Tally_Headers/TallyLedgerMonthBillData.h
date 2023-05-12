//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TallyLedgerMonthBillData : NSObject
{
    double _topSpace;
    double _bottomSpace;
    double _leftSpace;
    double _chartHeight;
    NSString *_year;
    NSString *_month;
}

+ (void)queryMonthData:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *month; // @synthesize month=_month;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
- (id)newQueryCurrentMonthExpend;
- (id)queryChangeExpendTop3;
- (id)queryLast6MonthIncome;
- (id)queryLast6MonthExpend;
- (id)queryTop3Expend;
- (id)queryTop5WithTallyType:(long long)arg1;
- (id)queryMonthData:(id)arg1 tallyType:(long long)arg2;
- (id)queryTop5Income;
- (id)queryTop5Expend;
- (id)queryLastMonthIncome;
- (id)queryCurrentMonthIncome;
- (id)queryLastMonthExpend;
- (id)queryCurrentMonthExpend;
- (void)setupMonthData:(int)arg1 maxMonth:(int)arg2 monthDict:(id)arg3 maxAmount:(double)arg4 monthArray:(id)arg5;
- (id)queryRecent5MonthExpend;

@end

