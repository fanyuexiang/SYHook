//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTNetUtil : NSObject
{
}

+ (_Bool)isRedirection:(long long)arg1;
+ (id)stringByAppendURLParameterString:(id)arg1 toURL:(id)arg2;
+ (void)changeURLRequestUserAgentToCDNUA:(id)arg1;
+ (void)changeURLRequestUserAgentToWebViewUA:(id)arg1;
+ (id)httpBodyForParameters:(id)arg1;
+ (id)getURLParams:(id)arg1;
+ (id)encodeURL:(id)arg1;
+ (id)decodeURL:(id)arg1;

@end

