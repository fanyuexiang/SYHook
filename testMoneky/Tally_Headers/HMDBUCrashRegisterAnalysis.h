//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDBUCrashAddressAnalysis.h"

@class NSString;

@interface HMDBUCrashRegisterAnalysis : HMDBUCrashAddressAnalysis
{
    NSString *_registerName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *registerName; // @synthesize registerName=_registerName;
- (id)postDict;
- (void)updateWithDictionary:(id)arg1;

@end

