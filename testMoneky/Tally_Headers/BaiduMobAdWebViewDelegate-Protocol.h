//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BaiduMobAdWebView, NSError, NSURLRequest, UIScrollView;

@protocol BaiduMobAdWebViewDelegate <NSObject>
- (void)bdWebView:(BaiduMobAdWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)bdWebViewDidFinishLoad:(BaiduMobAdWebView *)arg1;
- (void)bdWebViewDidStartLoad:(BaiduMobAdWebView *)arg1;
- (_Bool)bdWebView:(BaiduMobAdWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;

@optional
- (void)bdWebViewScrollViewDidScroll:(BaiduMobAdWebView *)arg1 scrollView:(UIScrollView *)arg2;
@end

