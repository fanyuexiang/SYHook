//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TallyYearBillsData : NSObject
{
    long long _year;
}

+ (id)imagesFolder;
+ (id)zipFolder;
+ (id)downloadFilePath;
+ (void)loadCustomFont:(id)arg1;
+ (_Bool)hasLocal;
@property(nonatomic) long long year; // @synthesize year=_year;
- (long long)getCurrentYearIncomeTallyCount;
- (long long)getCurrentYearExpiredTallyCount;
- (id)getAllMonthIncome;
- (id)getAllMonthExpired;
- (id)getExpiredTallyTop10;
- (id)getExpiredCategoryTop5;
- (id)getCurrentYearIncome;
- (id)getCurrentYearExpired;

@end
