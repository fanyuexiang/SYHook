//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface turing_3DJhQnbeTPUTzQOUDNkWehUNBC : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _bytesOfRequest;
    unsigned long long _bytesOfResponse;
    unsigned long long _networkType;
    NSMutableDictionary *_customStatistics;
    NSString *_storeKey;
    double _timestampOfCollecting;
    double _timestampOfPosting;
    double _timestampOfResponding;
}

+ (_Bool)supportsSecureCoding;
+ (id)lastRecordForKey:(id)arg1;
+ (id)newRecordForKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double timestampOfResponding; // @synthesize timestampOfResponding=_timestampOfResponding;
@property(nonatomic) double timestampOfPosting; // @synthesize timestampOfPosting=_timestampOfPosting;
@property(nonatomic) double timestampOfCollecting; // @synthesize timestampOfCollecting=_timestampOfCollecting;
@property(copy, nonatomic) NSString *storeKey; // @synthesize storeKey=_storeKey;
@property(retain) NSMutableDictionary *customStatistics; // @synthesize customStatistics=_customStatistics;
@property(nonatomic) unsigned long long networkType; // @synthesize networkType=_networkType;
@property(nonatomic) unsigned long long bytesOfResponse; // @synthesize bytesOfResponse=_bytesOfResponse;
@property(nonatomic) unsigned long long bytesOfRequest; // @synthesize bytesOfRequest=_bytesOfRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (void)save;
- (void)donePostingWithResponseSize:(unsigned long long)arg1;
- (void)startPostingWithNetworkType:(unsigned long long)arg1 withRequestSize:(unsigned long long)arg2;
- (void)startCollecting;
@property(readonly, nonatomic) double elapseOfCollecting;
@property(readonly, nonatomic) double elapseOfPosting;
@property(readonly, nonatomic) double elapseOfTotal;

@end

