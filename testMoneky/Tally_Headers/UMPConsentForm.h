//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UMPView;

@interface UMPConsentForm : NSObject
{
    UMPView *_view;
    CDUnknownBlockType _completionHandler;
    _Bool _hasPresented;
}

+ (void)loadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)presentView:(id)arg1 fromViewController:(id)arg2;
- (void)dismissedViewWithError:(id)arg1;
- (void)presentFromViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithView:(id)arg1;
- (id)init;

@end

