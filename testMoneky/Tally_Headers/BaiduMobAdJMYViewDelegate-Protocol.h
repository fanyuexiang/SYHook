//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BaiduMobAdWebView, NSError, UIScrollView;

@protocol BaiduMobAdJMYViewDelegate <NSObject>

@optional
- (void)JMYWebViewScrollViewDidScroll:(BaiduMobAdWebView *)arg1 scrollView:(UIScrollView *)arg2;
- (void)JMYWebView:(BaiduMobAdWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)JMYWebViewDidFinishLoad:(BaiduMobAdWebView *)arg1;
- (void)JMYWebViewDidStartLoad:(BaiduMobAdWebView *)arg1;
- (void)JMYWebViewDidClick:(BaiduMobAdWebView *)arg1 clickType:(int)arg2;
@end

