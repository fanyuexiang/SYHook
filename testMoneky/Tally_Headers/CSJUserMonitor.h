//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CSJUserMonitor : NSObject
{
    NSMutableDictionary *_userActionDictM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userActionDictM; // @synthesize userActionDictM=_userActionDictM;
- (id)dictionaryValue:(id)arg1;
- (void)click:(id)arg1;
- (void)skipClick:(id)arg1;
- (void)resetWithSlotID:(id)arg1 meta:(id)arg2;

@end

