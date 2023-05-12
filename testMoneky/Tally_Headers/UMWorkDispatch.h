//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface UMWorkDispatch : NSObject
{
    struct dispatch_queue_s *_workQueue;
    NSMutableArray *_components;
}

+ (void)sendEvent:(id)arg1 withType:(int)arg2 component:(id)arg3;
+ (_Bool)isInWorkQueue;
+ (struct dispatch_queue_s *)getWorkQueue;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
- (void)dispatchEvent:(id)arg1 inComponent:(id)arg2;
- (_Bool)isInWorkQueue;
- (struct dispatch_queue_s *)getWorkQueue;
- (id)init;

@end

