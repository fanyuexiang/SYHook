//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AlibcTradeShowParams : NSObject
{
    _Bool _isNeedPush;
    _Bool _isNeedCustomNativeFailMode;
    unsigned long long _openType;
    NSString *_backUrl;
    NSString *_linkKey;
    long long _nativeFailMode;
    NSString *_degradeUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *degradeUrl; // @synthesize degradeUrl=_degradeUrl;
@property(nonatomic) long long nativeFailMode; // @synthesize nativeFailMode=_nativeFailMode;
@property(nonatomic) _Bool isNeedCustomNativeFailMode; // @synthesize isNeedCustomNativeFailMode=_isNeedCustomNativeFailMode;
@property(retain, nonatomic) NSString *linkKey; // @synthesize linkKey=_linkKey;
@property(retain, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
@property(nonatomic) unsigned long long openType; // @synthesize openType=_openType;
@property(nonatomic) _Bool isNeedPush; // @synthesize isNeedPush=_isNeedPush;
- (id)init;

@end

