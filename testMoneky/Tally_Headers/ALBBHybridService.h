//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALBBWebViewController, WKWebView;

@interface ALBBHybridService : NSObject
{
    _Bool _hasPendingOperation;
    ALBBWebViewController *_vc;
    WKWebView *_webView;
}

- (void).cxx_destruct;
@property(readonly) _Bool hasPendingOperation; // @synthesize hasPendingOperation=_hasPendingOperation;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak ALBBWebViewController *vc; // @synthesize vc=_vc;
- (void)pDestory;
- (void)pInitialize;
- (id)createJavaScript:(id)arg1 requestId:(id)arg2 data:(id)arg3;
- (void)evaluatingJavaScript:(id)arg1;
- (id)initWithVC:(id)arg1 webView:(id)arg2;

@end

