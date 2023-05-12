//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSString;

@interface WVWebViewRecorder : NSObject
{
    NSHashTable *_webViewList;
    NSMutableArray *_urlArray;
    NSString *_currentURL;
    long long _currentStatus;
    NSString *_invalidWKDelegate;
}

+ (id)topWebView;
+ (id)allWebView;
+ (id)currentWebViewInfo;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *invalidWKDelegate; // @synthesize invalidWKDelegate=_invalidWKDelegate;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(copy, nonatomic) NSString *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) NSMutableArray *urlArray; // @synthesize urlArray=_urlArray;
@property(retain, nonatomic) NSHashTable *webViewList; // @synthesize webViewList=_webViewList;
- (void).cxx_destruct;
- (void)syncWKWebViewCookie;
- (id)allWebView;
- (void)reportWebViewClose:(id)arg1;
- (void)reportWebView:(id)arg1 loadURL:(id)arg2;
- (void)reportVisiblityChanged:(id)arg1;
- (void)addWebViewCount:(id)arg1;
- (void)reportWebViewOpen:(id)arg1;
- (void)dealloc;
- (id)init;

@end
