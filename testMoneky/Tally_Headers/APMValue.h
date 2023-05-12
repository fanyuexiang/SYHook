//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface APMValue : NSObject <NSCopying>
{
    id _value;
    long long _valueType;
}

+ (id)valueFromObject:(id)arg1 allowArray:(_Bool)arg2;
+ (id)valueFromObject:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *arrayValue;
@property(readonly, nonatomic) _Bool isArray;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) _Bool isString;
@property(readonly, nonatomic) long long int64Value;
@property(readonly, nonatomic) _Bool isInt64;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, nonatomic) _Bool isDouble;
- (id)initWithValueType:(long long)arg1 value:(id)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithInt64:(long long)arg1;
- (id)initWithDouble:(double)arg1;

@end

