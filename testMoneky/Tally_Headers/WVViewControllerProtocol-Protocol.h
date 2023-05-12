//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, NSURLRequest, UIScrollView, UIView;
@protocol WVWebViewProtocol;

@protocol WVViewControllerProtocol <NSObject>
@property(nonatomic, getter=isUseCustomPullToRefresh) _Bool useCustomPullToRefresh;
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh;
@property(copy, nonatomic) CDUnknownBlockType webContentProcessDidTerminateAction;
@property(copy, nonatomic) CDUnknownBlockType didReceiveJSLogAction;
@property(copy, nonatomic) CDUnknownBlockType didFailLoadAction;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoadAction;
@property(copy, nonatomic) CDUnknownBlockType didStartLoadAction;
@property(copy, nonatomic) CDUnknownBlockType shouldStartLoadAction;
@property(readonly, nonatomic) _Bool webViewCanGoForward;
@property(readonly, nonatomic) _Bool webViewCanGoBack;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(nonatomic, getter=isOpenLongPressSaveImage) _Bool openLongPressSaveImage;
@property(nonatomic, getter=isOpenWebKitLongPress) _Bool openWebKitLongPress;
@property(readonly, copy, nonatomic) NSURL *webViewURL;
@property(readonly, copy, nonatomic) NSURLRequest *webViewRequest;
@property(readonly, nonatomic, getter=isWebViewLoading) _Bool webViewLoading;
@property(nonatomic) _Bool bounces;
@property(readonly, nonatomic) __weak UIScrollView *webViewScrollView;
@property(readonly, nonatomic) UIView<WVWebViewProtocol> *internalWebView;
@property(readonly, nonatomic) UIView<WVWebViewProtocol> *webView;
@property(nonatomic, getter=isUseWKWebView) long long useWKWebView;
- (void)h5ActiveFrom:(NSString *)arg1 withData:(id)arg2;
- (void)webViewReload;
- (void)webViewStopLoading;
- (void)webViewGoForward;
- (void)webViewGoBack;
- (_Bool)decideIsUseWKWebView;
- (void)loadPageByUrl:(NSString *)arg1 postBody:(NSString *)arg2;
- (void)loadPageByUrl:(NSString *)arg1;
- (void)loadPageByRequest:(NSURLRequest *)arg1;
@end
