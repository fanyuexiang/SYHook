//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AlibcTradeService-Protocol.h"

@class NSString;

@interface AlibcTradeServiceImpl : NSObject <AlibcTradeService>
{
}

+ (id)sharedInstance;
- (long long)openByBizCode:(id)arg1 page:(id)arg2 webView:(id)arg3 parentController:(id)arg4 showParams:(id)arg5 taoKeParams:(id)arg6 trackParam:(id)arg7 tradeProcessSuccessCallback:(CDUnknownBlockType)arg8 tradeProcessFailedCallback:(CDUnknownBlockType)arg9;
- (_Bool)matchUrl:(id)arg1 WithRules:(id)arg2;
- (long long)openByUrl:(id)arg1 identity:(id)arg2 webView:(id)arg3 parentController:(id)arg4 showParams:(id)arg5 taoKeParams:(id)arg6 trackParam:(id)arg7 tradeProcessSuccessCallback:(CDUnknownBlockType)arg8 tradeProcessFailedCallback:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

