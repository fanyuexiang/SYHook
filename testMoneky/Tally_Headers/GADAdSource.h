//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GADAdSourceDelegate;

@interface GADAdSource : NSObject
{
    id <GADAdSourceDelegate> _delegate;
    // Error parsing type: AB, name: _invalidated
}

- (void).cxx_destruct;
- (void)asyncLoadAdWithServerRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncLoadWithSignalsServerRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncLoadWithAdReferencesServerRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadServerRequest:(id)arg1 fromServerTransactionSources:(id)arg2 index:(unsigned long long)arg3 errors:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadServerTransaction:(id)arg1 errors:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadAdsWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callCompletionHandlerWithInvalidatedError:(CDUnknownBlockType)arg1;
- (void)renderServerTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (_Bool)invalidated;
- (void)invalidateAndCancel;

@end
