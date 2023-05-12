//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MtopError, MtopExtRequest, NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface MtopExtResponse : NSObject
{
    _Bool _isFromCache;
    _Bool _isCacheExpired;
    _Bool _isLoginCancel;
    int _httpResponseCode;
    MtopError *_error;
    NSMutableDictionary *_headers;
    NSData *_rawbody;
    NSString *_body;
    NSDictionary *_json;
    MtopExtRequest *_request;
    NSURL *_requestURL;
    NSString *_requestMethod;
    NSDictionary *_requestHeaders;
    NSData *_requestBody;
}

@property(nonatomic) _Bool isLoginCancel; // @synthesize isLoginCancel=_isLoginCancel;
@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) MtopExtRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool isCacheExpired; // @synthesize isCacheExpired=_isCacheExpired;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSData *rawbody; // @synthesize rawbody=_rawbody;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) MtopError *error; // @synthesize error=_error;
@property(nonatomic) int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
- (void).cxx_destruct;
- (id)resolveNetworkError:(id)arg1;
- (id)resolveError:(id)arg1;
- (id)description;
- (void)removeHeader:(id)arg1;
- (_Bool)validateResponse;
- (_Bool)isSucceed;
- (void)fillWithOther:(id)arg1;
- (id)initWithError:(id)arg1 request:(id)arg2;
- (id)initWithRequest:(id)arg1 erequest:(id)arg2;
- (id)initWithHttp:(int)arg1 headers:(id)arg2 rawbody:(id)arg3 isFromCache:(_Bool)arg4 request:(id)arg5;

@end
