//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface JDURLParamsManager : NSObject
{
    NSMutableDictionary *_paramsValueDic;
}

+ (id)getSkuIDFromAllURL:(id)arg1;
+ (_Bool)isPureNumandCharacters:(id)arg1;
+ (id)getSkuIDFromURL:(id)arg1;
+ (_Bool)isKeplerProductDetailURL:(id)arg1;
+ (id)keplerProductDetailURLFromURL:(id)arg1;
+ (id)getSKUInfoFromProductDetailURL:(id)arg1;
+ (_Bool)isHttpSchemeURL:(id)arg1;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *paramsValueDic; // @synthesize paramsValueDic=_paramsValueDic;
- (_Bool)isPayUrl:(id)arg1;
- (_Bool)isInBlackList:(id)arg1;
- (_Bool)gobackShouldJump:(id)arg1 lastURL:(id)arg2;
- (_Bool)isMainAnchor:(id)arg1;
- (_Bool)inRedirectToURL:(id)arg1;
- (id)needResetAndRedirect:(id)arg1;
- (id)shouldRedirect:(id)arg1;
- (id)setParamsToURL:(id)arg1;
- (void)getParamsFromURL:(id)arg1;
- (id)addToURL:(id)arg1 query:(id)arg2;
- (id)addToURL:(id)arg1 param:(id)arg2 value:(id)arg3;
- (void)fetchDataFromServer;
- (id)paramKeysFormArray:(id)arg1;
- (id)getParamValueDicFromURL:(id)arg1 key:(id)arg2;
- (id)getAllParamsDicFromURL:(id)arg1;

@end
