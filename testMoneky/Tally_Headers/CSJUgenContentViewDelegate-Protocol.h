//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSJUgenContentView, NSDictionary, NSError, UgenEvent;

@protocol CSJUgenContentViewDelegate <NSObject>
- (void)ugenContentView:(CSJUgenContentView *)arg1 event:(UgenEvent *)arg2;
- (void)ugenContentView:(CSJUgenContentView *)arg1 loadFailWithInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)ugenContentView:(CSJUgenContentView *)arg1 loadFinishWithInfo:(NSDictionary *)arg2;
- (void)ugenContentView:(CSJUgenContentView *)arg1 loadStartWithInfo:(NSDictionary *)arg2;
@end
