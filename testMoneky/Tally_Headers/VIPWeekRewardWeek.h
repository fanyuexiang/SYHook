//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSArray, NSString;

@interface VIPWeekRewardWeek : NSObject <YYModel>
{
    long long _week_num;
    NSString *_sw_date;
    NSString *_ew_date;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *ew_date; // @synthesize ew_date=_ew_date;
@property(copy, nonatomic) NSString *sw_date; // @synthesize sw_date=_sw_date;
@property(nonatomic) long long week_num; // @synthesize week_num=_week_num;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

