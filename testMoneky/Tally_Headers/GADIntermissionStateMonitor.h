//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSOperationQueue;
@protocol GADPresenterSource;

@interface GADIntermissionStateMonitor : NSObject
{
    GADObserverCollection *_observers;
    _Bool _idleTimerWasOriginallyDisabled;
    NSOperationQueue *_deactivationQueue;
    _Bool _applicationBackgroundedDueToAdAction;
    _Bool _applicationStateIntermissionControlled;
    id <GADPresenterSource> _presenterSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GADPresenterSource> presenterSource; // @synthesize presenterSource=_presenterSource;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)setDeactivationQueueSuspended:(_Bool)arg1;
- (void)checkWhetherIntermissionActivated;
- (void)checkWhetherIntermissionDeactivated;
- (_Bool)intermissionActive;
- (void)intermissionWillEnd;
- (void)intermissionWillBegin;
- (void)restoreApplicationState;
- (void)saveApplicationState;
- (id)init;

@end

