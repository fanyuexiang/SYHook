//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJTrackerProxy, NSString;

@interface CSJStatsTracker : NSObject
{
    long long _clockType;
    NSString *_batchURLString;
    CSJTrackerProxy *_trackerProxy;
}

+ (id)sharedTracker;
- (void).cxx_destruct;
@property(retain, nonatomic) CSJTrackerProxy *trackerProxy; // @synthesize trackerProxy=_trackerProxy;
@property(copy, nonatomic) NSString *batchURLString; // @synthesize batchURLString=_batchURLString;
@property(nonatomic) long long clockType; // @synthesize clockType=_clockType;
- (void)eventData:(id)arg1 clockType:(long long)arg2;
- (void)eventData:(id)arg1;

@end
