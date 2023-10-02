//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJWebURLSchemeTaskHandler-Protocol.h"

@class NSString, WKWebView;
@protocol WKURLSchemeTask;

@interface CSJWKURLSchemeTaskHandler : NSObject <CSJWebURLSchemeTaskHandler>
{
    WKWebView *_webView;
    id <WKURLSchemeTask> _schemeTask;
    unsigned long long _status;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) __weak id <WKURLSchemeTask> schemeTask; // @synthesize schemeTask=_schemeTask;
@property(readonly, nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (double)p_getCurrentTime;
- (_Bool)p_canAddResponseForStatus:(unsigned long long)arg1 webView:(id)arg2 schemeTask:(id)arg3;
- (void)p_uploadExceptionEvent:(id)arg1 webView:(id)arg2;
- (void)p_handleError:(id)arg1 webView:(id)arg2 urlSchemeTask:(id)arg3;
- (void)p_handleSuccessWithResponse:(id)arg1 data:(id)arg2 webView:(id)arg3 schemeTask:(id)arg4;
- (void)p_playableZipGet:(id)arg1 webView:(id)arg2;
- (void)p_webView:(id)arg1 schemeTask:(id)arg2 downloadDataWithPath:(id)arg3;
- (void)p_updateWebViewInterceptResourceWithStartTime:(double)arg1 imageData:(id)arg2 completion:(CDUnknownBlockType)arg3 isLocalData:(_Bool)arg4;
- (void)p_deal_startTime:(double)arg1 image:(id)arg2 data:(id)arg3 error:(id)arg4 imageURL:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)p_downLoadImageDataUseSD_withCompletion:(CDUnknownBlockType)arg1;
- (void)p_downLoadImageDataUseFileCache_withWebView:(id)arg1 schemeTask:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)p_downLoadImageData_withWebView:(id)arg1 schemeTask:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)p_checkPlayableType:(id)arg1;
- (void)p_appendDataWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)bu_isValid;
- (void)bu_stopURLSchemeTask;
- (void)bu_startURLSchemeTask;
- (id)initWithWebView:(id)arg1 schemeTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

