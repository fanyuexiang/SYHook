//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

@class NSArray, NSString;

@interface BUMDislikeReason : BUInterfaceBaseObject
{
    NSString *_ID;
    NSString *_name;
    NSArray *_subReasons;
    BUMDislikeReason *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUMDislikeReason *iteration; // @synthesize iteration=_iteration;
@property(readonly, copy, nonatomic) NSArray *subReasons; // @synthesize subReasons=_subReasons;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 subReasons:(id)arg3;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;

@end

