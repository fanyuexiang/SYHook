//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface BUDislikeWords : BUInterfaceBaseObject <NSCoding>
{
    BUDislikeWords *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUDislikeWords *iteration; // @synthesize iteration=_iteration;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *dislikeID; // @dynamic dislikeID;
@property(readonly, nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, copy, nonatomic) NSArray *options; // @dynamic options;

@end
