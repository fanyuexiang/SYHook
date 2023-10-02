//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UgenWidget.h"

@class CSJInteractionWebViewJSBridgeHandler, CSJUgenInteractionWebViewParamModel, CSJWKWebViewClient, NSString;

@interface CSJUgenInteractionWebViewWidget : UgenWidget
{
    _Bool _didAppear;
    _Bool _showInteraction;
    NSString *_src;
    CSJWKWebViewClient *_webView;
    CSJInteractionWebViewJSBridgeHandler *_jsbHandler;
    CSJUgenInteractionWebViewParamModel *_paramModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showInteraction; // @synthesize showInteraction=_showInteraction;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(retain, nonatomic) CSJUgenInteractionWebViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
@property(retain, nonatomic) CSJInteractionWebViewJSBridgeHandler *jsbHandler; // @synthesize jsbHandler=_jsbHandler;
@property(retain, nonatomic) CSJWKWebViewClient *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
- (void)p_loadRequestWithUrl:(id)arg1;
- (void)p_setupJSBHandler;
- (void)p_parseWidgetParams;
- (void)p_setupWebViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)viewSizeDidChange:(struct CGSize)arg1;
- (void)layout;
- (void)render;
- (id)ugenView;
- (id)init;

@end
