//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface CSJAdGroupInfo : NSObject <NSCoding>
{
    NSString *_group_id;
    NSString *_group_tag;
    NSString *_card_tag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *card_tag; // @synthesize card_tag=_card_tag;
@property(copy, nonatomic) NSString *group_tag; // @synthesize group_tag=_group_tag;
@property(copy, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
