//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CSJWKWebViewClientResponseDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class BUWebViewProgressView, CSJAdSlot, CSJDislikeContext, CSJWKWebViewClient, CSJWebViewControllerViewModel, NSDictionary, NSString, UISwipeGestureRecognizer;

@interface CSJWebViewController : UIViewController <UIScrollViewDelegate, CSJWKWebViewClientResponseDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _isFromClick;
    _Bool _hasWebViewBeginDrag;
    _Bool _hasNotifyForAnchor;
    _Bool _firstTimeClickWebview;
    _Bool _fingerOnScreen;
    _Bool _needReportClick;
    CDUnknownBlockType _webViewNotifyForAnchor;
    double _videoViewHeight;
    CSJWebViewControllerViewModel *_webViewModel;
    CSJDislikeContext *_dislikeContext;
    double _lastContentOffset;
    UISwipeGestureRecognizer *_rightSwipeGestureRecognizer;
    struct CGPoint _startScrollOffset;
    struct BUWebViewClickStruct _indexClick;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReportClick; // @synthesize needReportClick=_needReportClick;
@property(retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGestureRecognizer; // @synthesize rightSwipeGestureRecognizer=_rightSwipeGestureRecognizer;
@property(nonatomic) _Bool fingerOnScreen; // @synthesize fingerOnScreen=_fingerOnScreen;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) _Bool firstTimeClickWebview; // @synthesize firstTimeClickWebview=_firstTimeClickWebview;
@property(nonatomic) struct CGPoint startScrollOffset; // @synthesize startScrollOffset=_startScrollOffset;
@property(nonatomic) struct BUWebViewClickStruct indexClick; // @synthesize indexClick=_indexClick;
@property(nonatomic) _Bool hasNotifyForAnchor; // @synthesize hasNotifyForAnchor=_hasNotifyForAnchor;
@property(nonatomic) _Bool hasWebViewBeginDrag; // @synthesize hasWebViewBeginDrag=_hasWebViewBeginDrag;
@property(retain, nonatomic) CSJDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(retain, nonatomic) CSJWebViewControllerViewModel *webViewModel; // @synthesize webViewModel=_webViewModel;
@property(nonatomic) _Bool isFromClick; // @synthesize isFromClick=_isFromClick;
@property(nonatomic) double videoViewHeight; // @synthesize videoViewHeight=_videoViewHeight;
@property(copy, nonatomic) CDUnknownBlockType webViewNotifyForAnchor; // @synthesize webViewNotifyForAnchor=_webViewNotifyForAnchor;
- (void)showCloseButton;
- (void)hideCloseButton;
@property(nonatomic) _Bool hasEnterBackground;
@property(retain, nonatomic) BUWebViewProgressView *progressView;
@property(nonatomic) _Bool isNavBarHidden;
@property(nonatomic) struct CGSize size;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)responseView:(id)arg1 hitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)bu_loadRequest:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType hasLoadLubanListPage;
@property(copy, nonatomic) NSDictionary *relatedMaterialMeta;
@property(copy, nonatomic) CDUnknownBlockType CloseBlock;
@property(copy, nonatomic) NSString *webTitle;
@property(retain, nonatomic) CSJWKWebViewClient *webView;
@property(retain, nonatomic) CSJAdSlot *adSlot;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)rightSwipeGestureRecognizerAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRequestURL:(id)arg1 adinfo:(id)arg2 size:(struct CGSize)arg3 isNavBarHidden:(_Bool)arg4 landingPageType:(unsigned long long)arg5 isFromClick:(_Bool)arg6;
- (id)initWithRequestURL:(id)arg1 adinfo:(id)arg2 size:(struct CGSize)arg3 isNavBarHidden:(_Bool)arg4 landingPageType:(unsigned long long)arg5;
- (id)initWithRequestURL:(id)arg1 adinfo:(id)arg2 size:(struct CGSize)arg3 isNavBarHidden:(_Bool)arg4 isNativeExpress:(_Bool)arg5 pageType:(unsigned long long)arg6;
- (id)initWithRequestURL:(id)arg1 adinfo:(id)arg2 size:(struct CGSize)arg3 isNavBarHidden:(_Bool)arg4;
@property(copy, nonatomic) CDUnknownBlockType loadLubanJsonFail;
@property(copy, nonatomic) NSDictionary *luban_json;
@property(nonatomic) _Bool isLuban;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

