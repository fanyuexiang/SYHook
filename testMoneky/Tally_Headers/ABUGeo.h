//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ABUGeo : NSObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
}

- (void).cxx_destruct;
@property(retain) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain) NSNumber *latitude; // @synthesize latitude=_latitude;
- (id)initWithDictionaryValue:(id)arg1;
- (id)dictionaryValue;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end
