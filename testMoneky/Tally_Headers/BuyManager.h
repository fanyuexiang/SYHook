//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BuyManager : NSObject
{
    NSMutableArray *_hotkeys;
    NSMutableArray *_historykeys;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *historykeys; // @synthesize historykeys=_historykeys;
@property(retain, nonatomic) NSMutableArray *hotkeys; // @synthesize hotkeys=_hotkeys;
- (void)saveHistoryKeys;
- (void)coupon_clear_historyKeys;
- (void)addHistoryKey:(id)arg1;
- (void)requestHotWords;
- (void)userChanged;
- (id)init;

@end

