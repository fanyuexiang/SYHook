//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

@class BUMDislikeReason, NSArray;

@interface BUMDislikeReporter : BUInterfaceBaseObject
{
    NSArray *_reasons;
    BUMDislikeReason *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUMDislikeReason *iteration; // @synthesize iteration=_iteration;
@property(readonly, copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
- (id)init;

@end
