//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@class NSDictionary;

@interface UITapGestureRecognizer (BUATouchTracker)
@property(nonatomic) long long user_behavior_move;
@property(readonly, nonatomic) NSDictionary *bu_eventDict_sec;
- (void)setBu_eventDict:(id)arg1;
- (id)bu_eventDict;
@property(nonatomic) long long bu_phase;
- (id)find_horizontal_referenceView_fromView:(id)arg1;
- (void)buTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)buTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)buTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)buTouchesBegan:(id)arg1 withEvent:(id)arg2;
@end

