//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSArray;

@interface GADCrashReporter : NSObject
{
    GADObserverCollection *_observers;
    NSArray *_crashFileURLs;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasReported
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)reportURL:(id)arg1;
- (void)reportIssuesInternal;
- (void)reportIssues;
- (id)symbolTableFileURL;
- (void)storeEnvironmentInfo;
- (void)updateSettings;
- (id)init;

@end

