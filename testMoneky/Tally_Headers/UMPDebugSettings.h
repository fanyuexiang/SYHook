//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface UMPDebugSettings : NSObject <NSCopying>
{
    NSArray *_testDeviceIdentifiers;
    long long _geography;
}

- (void).cxx_destruct;
@property(nonatomic) long long geography; // @synthesize geography=_geography;
@property(retain, nonatomic) NSArray *testDeviceIdentifiers; // @synthesize testDeviceIdentifiers=_testDeviceIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
