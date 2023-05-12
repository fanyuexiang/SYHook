//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSError, NSString, WKFrameInfo, WKNavigation, WKNavigationAction, WKWebView;

@protocol KPWKViewDelegate <WKUIDelegate, WKNavigationDelegate>

@optional
- (void)kp_webView:(WKWebView *)arg1 changeWebViewFrame:(struct CGRect)arg2;
- (void)kp_webView:(WKWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)kp_webView:(WKWebView *)arg1 changeNavigationStatusValue:(double)arg2;
- (void)kp_webView:(WKWebView *)arg1 changeNavigationItemState:(long long)arg2;
- (void)kp_webView:(WKWebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(void))arg4;
- (void)kp_webView:(WKWebView *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)kp_webView:(WKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (void)kp_webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;
@end

