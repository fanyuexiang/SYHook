//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UgenEngine, UgenTracker;

@protocol UgenTrackerDelegate <NSObject>
- (void)onTemplateRenderEnd:(UgenTracker *)arg1 engine:(UgenEngine *)arg2;
- (void)onTemplateRenderBegin:(UgenTracker *)arg1 engine:(UgenEngine *)arg2;
- (void)onTemplateParseEnd:(UgenTracker *)arg1 engine:(UgenEngine *)arg2;
- (void)onTemplateParseBegin:(UgenTracker *)arg1 engine:(UgenEngine *)arg2;
@end

