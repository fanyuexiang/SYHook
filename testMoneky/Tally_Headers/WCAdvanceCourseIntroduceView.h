//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, UIView, WCAdvancedCourseViewController, WKWebView;

@interface WCAdvanceCourseIntroduceView : UIScrollView <UIScrollViewDelegate, WKUIDelegate, WKNavigationDelegate>
{
    double _lastOffsetY;
    double _moveHeight;
    UIView *_topView;
    UIView *_hoverView;
    UIScrollView *_associatedScrollview;
    WCAdvancedCourseViewController *_advanceController;
    WKWebView *_webView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak WCAdvancedCourseViewController *advanceController; // @synthesize advanceController=_advanceController;
@property(nonatomic) __weak UIScrollView *associatedScrollview; // @synthesize associatedScrollview=_associatedScrollview;
@property(nonatomic) __weak UIView *hoverView; // @synthesize hoverView=_hoverView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) double moveHeight; // @synthesize moveHeight=_moveHeight;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)adjustAssociatedScrollview;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

