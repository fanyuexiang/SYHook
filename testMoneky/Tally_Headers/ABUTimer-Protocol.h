//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol ABUTimer;

@protocol ABUTimer <NSObject>
+ (id <ABUTimer>)startTimerWithId:(NSString *)arg1 execAction:(void (^)(void))arg2 after:(double)arg3 interval:(double)arg4 repeats:(_Bool)arg5 mainThread:(_Bool)arg6;
- (void)cancel;
@end

