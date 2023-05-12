//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SKCalendarView, UICollectionView, UITableView;

@interface SKPangestureHandle : NSObject <UIGestureRecognizerDelegate>
{
    double _startHeight;
    double _endHeight;
    long long _focusedRow;
    UICollectionView *_collectionView;
    SKCalendarView *_calendarView;
    UITableView *_tableView;
    unsigned long long _transition;
    unsigned long long _state;
    double _lastTranslation;
}

- (void).cxx_destruct;
@property(nonatomic) double lastTranslation; // @synthesize lastTranslation=_lastTranslation;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long transition; // @synthesize transition=_transition;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SKCalendarView *calendarView; // @synthesize calendarView=_calendarView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)scopeTransitionDidEnd:(id)arg1;
- (void)performPathAnimationWithProgress:(double)arg1;
- (void)performAlphaAnimationWithProgress:(double)arg1;
- (void)scopeTransitionDidUpdate:(id)arg1;
- (void)prelayoutForWeekToMonthTransition;
- (void)scopeTransitionDidBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
