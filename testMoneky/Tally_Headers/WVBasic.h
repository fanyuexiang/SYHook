//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WVBasic : NSObject
{
}

+ (void)doNotFixIOS7ProtocolBug;
+ (void)init;
+ (void)setFixWKWebViewPostBody:(_Bool)arg1;
+ (_Bool)fixWKWebViewPostBody;
+ (void)setSyncWKWebViewCookie:(_Bool)arg1;
+ (_Bool)syncWKWebViewCookie;
+ (id)externalConfig;
+ (void)setExternalConfig:(id)arg1;
+ (_Bool)isXcode8Compatible;
+ (void)xcode8Compatible;
+ (void)setJSLogLevel:(long long)arg1;
+ (long long)JSLogLevel;
+ (void)setShowsVerticalScrollIndicator:(_Bool)arg1;
+ (_Bool)showsVerticalScrollIndicator;
+ (void)setup;
+ (void)doNotChangeUserAgent;
+ (void)changeUserAgent;
+ (id)userAgent;
+ (id)defaultUserAgent;

@end
