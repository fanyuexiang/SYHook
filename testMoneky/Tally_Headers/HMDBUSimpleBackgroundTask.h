//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDBUSimpleBackgroundTask : NSObject
{
    NSString *_name;
    unsigned long long _identifer;
    _Bool _isEnded;
}

+ (void)endBackgroundTaskWithName:(id)arg1;
+ (void)detachBackgroundTaskWithName:(id)arg1 task:(CDUnknownBlockType)arg2;
+ (void)detachBackgroundTaskWithName:(id)arg1 expireTime:(double)arg2 task:(CDUnknownBlockType)arg3;
+ (id)currentBackgroundTask;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;
- (void)completeBackgroundTaskFromTimer:(id)arg1;
- (void)completeBackgroundTask;

@end

