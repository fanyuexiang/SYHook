//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUWebViewApplication : NSObject
{
}

+ (void)registeJSBAlias:(id)arg1 for:(id)arg2;
+ (void)fireEvent:(id)arg1 data:(id)arg2 withWebView:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)fireEvent:(id)arg1 data:(id)arg2 withWebView:(id)arg3;
+ (void)invokeJSBCallbackWithCommand:(id)arg1 msg:(unsigned long long)arg2 data:(id)arg3 webView:(id)arg4;
+ (_Bool)handleRequest:(id)arg1 withWebView:(id)arg2 viewController:(id)arg3;
+ (id)sharedInstance;

@end

