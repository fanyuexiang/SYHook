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
    NSString *_Str_FtcTrue;
    CSJTrackerProxy *_trackerProxy;
}

+ (id)MARK_Fail_rhs;
- (void).cxx_destruct;
@property(retain, nonatomic) CSJTrackerProxy *trackerProxy; // @synthesize trackerProxy=_trackerProxy;
@property(copy, nonatomic) NSString *Str_FtcTrue; // @synthesize Str_FtcTrue=_Str_FtcTrue;
@property(nonatomic) long long clockType; // @synthesize clockType=_clockType;
- (void)ADX_VoidOut:(id)arg1 clockType:(long long)arg2;
- (void)ADX_VoidOut:(id)arg1;

@end

