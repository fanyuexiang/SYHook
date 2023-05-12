//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABUSingleton.h"

@class NSMutableDictionary;

@interface ABUUValueManager : ABUSingleton
{
    NSMutableDictionary *_uvalues;
    NSMutableDictionary *_uvaluesForPreload;
    long long _ecpmTTL;
}

+ (id)sharedInstance;
+ (void)updateEcpmTTL:(long long)arg1;
+ (void)resetUValuesWithMode:(long long)arg1;
+ (void)addUValue:(id)arg1 withRitType:(long long)arg2 andMode:(long long)arg3;
+ (void)addUValue:(id)arg1 withRitType:(long long)arg2;
+ (id)uvaluesForConfigWithMode:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long ecpmTTL; // @synthesize ecpmTTL=_ecpmTTL;
@property(retain, nonatomic) NSMutableDictionary *uvaluesForPreload; // @synthesize uvaluesForPreload=_uvaluesForPreload;
@property(retain, nonatomic) NSMutableDictionary *uvalues; // @synthesize uvalues=_uvalues;
- (void)removeAll;
- (void)removeUValuesFromDisk;
- (void)unarchiveUValuesFromDisk;
- (void)archiveUValuesToDisk;
- (void)resetUValuesForPreload;
- (void)resetUValues;
- (void)_addUvalue:(id)arg1 forRitType:(long long)arg2 andMode:(long long)arg3;
- (void)addUValue:(id)arg1 withRitType:(long long)arg2 withMode:(long long)arg3;
- (void)resetUValuesWithMode:(long long)arg1;
- (id)uvaluesForConfigWithMode:(long long)arg1;
- (id)init;

@end

