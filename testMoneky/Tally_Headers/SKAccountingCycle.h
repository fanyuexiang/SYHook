//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKAccountingCycle : NSObject
{
}

+ (id)sk_showACMonthFormatOneWithBeginDate:(id)arg1 endDate:(id)arg2;
+ (id)sk_caculateBetweenDates:(id)arg1 toDate:(id)arg2 formate:(id)arg3;
+ (long long)sk_caculateBetweenDays:(id)arg1 toDate:(id)arg2;
+ (id)sk_getACYearMonths:(long long)arg1 year:(id)arg2 formate:(id)arg3;
+ (id)sk_getACMonthSection:(long long)arg1 acDate:(id)arg2 formate:(id)arg3;
+ (id)sk_getACycleMonth:(long long)arg1 naturalDate:(id)arg2 formate:(id)arg3;
+ (id)sk_monthPredicate:(long long)arg1 acMonth:(id)arg2;
+ (_Bool)sk_setACMonthTipViewDateWithUserId:(id)arg1 sortId:(id)arg2 acMonth:(id)arg3;
+ (id)sk_getACMonthTipViewDateWithUserId:(id)arg1 sortId:(id)arg2;
+ (void)sk_resetACMonthDayWithCurrentSortId:(id)arg1 day:(long long)arg2;
+ (void)sk_resetACMonthDayWithCurrentSortId:(long long)arg1;
+ (long long)sk_accountingCycleWithSortId:(id)arg1;
+ (long long)sk_ACMonthDayWithCurrentSortId;
+ (id)share;
- (id)cacheDF:(id)arg1;

@end

