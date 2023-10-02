//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SDCallbackQueue : NSObject
{
    unsigned long long _policy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)globalQueue;
+ (id)currentQueue;
+ (id)mainQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property unsigned long long policy; // @synthesize policy=_policy;
- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (id)initWithDispatchQueue:(id)arg1;

@end
