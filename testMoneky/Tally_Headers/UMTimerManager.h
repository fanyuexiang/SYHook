//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UMTimerManager : NSObject
{
    NSMutableDictionary *_timerContainer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *timerContainer; // @synthesize timerContainer=_timerContainer;
- (_Bool)existTimer:(id)arg1;
- (void)cancelTimerWithName:(id)arg1;
- (void)scheduledDispatchTimerWithName:(id)arg1 timeInterval:(double)arg2 queue:(struct dispatch_queue_s *)arg3 repeats:(_Bool)arg4 action:(CDUnknownBlockType)arg5;

@end
