//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Extension)
+ (id)formatWeekOfYearStringWidthDate:(id)arg1;
+ (long long)weekOfYearWithDateString:(id)arg1;
+ (long long)daysOfMonth:(id)arg1;
+ (id)weekDayStringForDate:(id)arg1;
+ (id)weekDayWithDate:(id)arg1;
+ (id)currentDateWithDateFormat:(id)arg1;
+ (id)wvGetUserDefaultsKey:(id)arg1;
+ (_Bool)wvCheckAndMark:(id)arg1 withInterval:(double)arg2;
+ (_Bool)wvCheckMark:(id)arg1 withInterval:(double)arg2;
+ (void)wvMarkNow:(id)arg1;
+ (id)wvGMTCalendar;
+ (id)wvDateWithRFC6265String:(id)arg1;
+ (id)wvDateWithRFC1123String:(id)arg1;
+ (double)wvCurrentMilliseconds;
+ (double)wvcurrentTimeInterval;
+ (id)zeroOfDate;
+ (id)hmdbu_accurateDate;
- (long long)WPKUTCIntervalMS;
- (id)wvStringWithRFC1123Format;
- (id)wvStringWithISO8601Format;
- (long long)wvGetYear;
- (id)wvGetComponents;
- (double)wvMillisecondsSinceNow;
- (double)wvMillisecondsSince1970;
@end

