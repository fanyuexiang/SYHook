//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSJAPIThrottling : NSObject
{
    _Bool _enable;
    _Bool _isThrottling;
    _Bool _report;
    double _beginTime;
    double _lastRequest;
    long long _times;
    long long _maxTimes;
    double _timeDuration;
}

@property(nonatomic) double timeDuration; // @synthesize timeDuration=_timeDuration;
@property(nonatomic) long long maxTimes; // @synthesize maxTimes=_maxTimes;
@property(nonatomic) _Bool report; // @synthesize report=_report;
@property(nonatomic) _Bool isThrottling; // @synthesize isThrottling=_isThrottling;
@property(nonatomic) long long times; // @synthesize times=_times;
@property(nonatomic) double lastRequest; // @synthesize lastRequest=_lastRequest;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void)reportAPIStat:(id)arg1;
- (_Bool)canMakeRequest;

@end
