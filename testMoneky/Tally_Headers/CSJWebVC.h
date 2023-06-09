//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUWebViewDelegate-Protocol.h"

@class CSJMaterialMeta, CSJWKWebViewClient, NSString, UIButton, UILabel, UIView;

@interface CSJWebVC : UIViewController <BUWebViewDelegate>
{
    _Bool _showCopyLinkButton;
    CDUnknownBlockType _closeBlock;
    CSJWKWebViewClient *_webView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    CSJMaterialMeta *_meta;
    UIView *_custormNavigationView;
    UIButton *_copyLinksButton;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *copyLinksButton; // @synthesize copyLinksButton=_copyLinksButton;
@property(retain, nonatomic) UIView *custormNavigationView; // @synthesize custormNavigationView=_custormNavigationView;
@property(retain, nonatomic) CSJMaterialMeta *meta; // @synthesize meta=_meta;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) CSJWKWebViewClient *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool showCopyLinkButton; // @synthesize showCopyLinkButton=_showCopyLinkButton;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void)showToastView:(id)arg1;
- (void)copyLink:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)goback:(id)arg1;
- (void)createNavigationItems;
- (void)creatWebView;
- (void)bu_loadRequest:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithMaterialMeta:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

