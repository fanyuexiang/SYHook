//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BU_IESGurdGroupClean, NSArray;

@interface BU_IESGurdUniversalStrategies : NSObject
{
    NSArray *_specifiedCleanArray;
    BU_IESGurdGroupClean *_groupClean;
}

+ (id)strategiesWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BU_IESGurdGroupClean *groupClean; // @synthesize groupClean=_groupClean;
@property(copy, nonatomic) NSArray *specifiedCleanArray; // @synthesize specifiedCleanArray=_specifiedCleanArray;

@end

