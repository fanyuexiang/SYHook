//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class GADEventContext, NSString, WKWebView;
@protocol GADWebViewControllerDelegate;

@interface GADWebViewController : NSObject <WKNavigationDelegate, WKUIDelegate, GADEventContextSource>
{
    WKWebView *_webView;
    GADEventContext *_context;
    CDUnknownBlockType _completionHandler;
    id <GADWebViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GADWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GADEventContext *context;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)didFinishLoadCompletelyWithError:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)asyncEvaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadRequest:(id)arg1;
- (void)resetLoadState;
- (void)overrideWebViewPermissionAPI;
- (void)loadDynamicContentSize;
- (void)loadViewport;
- (void)loadMRAID:(id)arg1;
- (void)addUserScript:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(_Bool)arg3;
@property(readonly, nonatomic) WKWebView *webView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 eventContext:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

