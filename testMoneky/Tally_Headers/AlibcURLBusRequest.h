//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AlibcURLBusRequest : NSObject
{
    _Bool _isCustomNativeFailMode;
    _Bool _isFrame;
    unsigned long long _pageType;
    NSString *_originalUrl;
    NSString *_pageBizCode;
    NSArray *_openPageActionList;
    unsigned long long _urlSource;
    long long _nativeFailMode;
    NSString *_degradeUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFrame; // @synthesize isFrame=_isFrame;
@property(copy, nonatomic) NSString *degradeUrl; // @synthesize degradeUrl=_degradeUrl;
@property(nonatomic) long long nativeFailMode; // @synthesize nativeFailMode=_nativeFailMode;
@property(nonatomic) _Bool isCustomNativeFailMode; // @synthesize isCustomNativeFailMode=_isCustomNativeFailMode;
@property(nonatomic) unsigned long long urlSource; // @synthesize urlSource=_urlSource;
@property(copy, nonatomic) NSArray *openPageActionList; // @synthesize openPageActionList=_openPageActionList;
@property(copy, nonatomic) NSString *pageBizCode; // @synthesize pageBizCode=_pageBizCode;
@property(copy, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;

@end

