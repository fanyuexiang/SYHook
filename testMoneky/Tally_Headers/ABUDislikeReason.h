//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ABUDislikeReason : NSObject
{
    _Bool _isSelected;
    NSString *_ID;
    NSString *_name;
    NSArray *_subReasons;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSArray *subReasons; // @synthesize subReasons=_subReasons;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)initWithID:(id)arg1 name:(id)arg2 subReasons:(id)arg3;

@end

