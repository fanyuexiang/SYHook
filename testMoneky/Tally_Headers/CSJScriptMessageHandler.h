//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKScriptMessageHandler-Protocol.h"

@class NSString;
@protocol WKScriptMessageHandler;

@interface CSJScriptMessageHandler : NSObject <WKScriptMessageHandler>
{
    id <WKScriptMessageHandler> _realScriptMessageHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WKScriptMessageHandler> realScriptMessageHandler; // @synthesize realScriptMessageHandler=_realScriptMessageHandler;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

