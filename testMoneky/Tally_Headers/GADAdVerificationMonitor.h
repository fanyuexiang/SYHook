//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdVerificationReporter, GADObserverCollection, GADWebAdView;

@interface GADAdVerificationMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADWebAdView *_adView;
    GADAdVerificationReporter *_adVerificationReporter;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _beginAdSessionExecuted
}

- (void).cxx_destruct;
- (void)trackExpandView:(id)arg1;
- (void)adDidMakeImpression;
- (void)beginAdSession;
- (void)dealloc;
- (id)initWithAd:(id)arg1 adView:(id)arg2 friendlyObstructionView:(id)arg3 mediaType:(long long)arg4 contentURL:(id)arg5 impressionType:(unsigned long long)arg6 adType:(id)arg7;

@end

