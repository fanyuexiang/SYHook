//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUDBCondition.h"

@class NSString;

@interface BUDBSingleCondition : BUDBCondition
{
    NSString *_field;
    id _value;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *field; // @synthesize field=_field;
- (id)_type;
- (id)conditionStringForGroup;
- (id)conditionString;

@end

