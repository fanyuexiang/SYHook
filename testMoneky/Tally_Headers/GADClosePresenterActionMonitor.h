//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection;
@protocol GADPresenting;

@interface GADClosePresenterActionMonitor : NSObject
{
    id <GADPresenting> _presenter;
    GADObserverCollection *_observers;
}

- (void).cxx_destruct;
- (void)handleCloseNotification;
- (id)initWithPresenter:(id)arg1 messageSource:(id)arg2;

@end

