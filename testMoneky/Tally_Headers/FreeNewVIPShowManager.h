//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FreeNewVIPShowManager : NSObject
{
    long long _newvipabType;
    NSString *_yellowText;
    NSString *_minenewvipText;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *minenewvipText; // @synthesize minenewvipText=_minenewvipText;
@property(retain, nonatomic) NSString *yellowText; // @synthesize yellowText=_yellowText;
@property(nonatomic) long long newvipabType; // @synthesize newvipabType=_newvipabType;
- (id)todayDateString;
- (id)getWeekEndWith:(id)arg1;
- (_Bool)canShowYellowText;
- (void)clearYellowTxt;
- (void)gotoActivityDetail;
- (void)pushViewShow;
- (void)showwithType:(long long)arg1;
- (void)requestMineNewVIPText;
- (void)requestNewVIPType;
- (void)addTally:(id)arg1;
- (void)userAccountDidChange:(id)arg1;
- (id)init;

@end

