//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALBBRPCProtocol-Protocol.h"

@class ALBBRequest, NSError, NSMutableData, NSString, NSURL, NSURLConnection;
@protocol IDataEnDecrypt;

@interface ALBBHTTPInvoker : NSObject <ALBBRPCProtocol>
{
    double _timeout;
    _Bool _isCancelled;
    _Bool _hasReTried;
    NSURLConnection *_urlConnection;
    id <IDataEnDecrypt> _enDecryptor;
    CDUnknownBlockType _resultCallback;
    NSMutableData *_responseData;
    NSError *_resultError;
    NSURL *_requestUrl;
    ALBBRequest *_request;
}

+ (id)getRpcInvoker;
- (void).cxx_destruct;
@property(retain, nonatomic) ALBBRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
@property _Bool hasReTried; // @synthesize hasReTried=_hasReTried;
@property(retain, nonatomic) id <IDataEnDecrypt> enDecryptor; // @synthesize enDecryptor=_enDecryptor;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
- (_Bool)isDNSRelatedError:(id)arg1;
- (_Bool)isCancelled;
- (void)cancel;
- (void)setNetworkActivityVisible:(_Bool)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)encodePostData:(id)arg1;
- (void)invokeCallbackOnly;
- (void)doSendRequestAsync:(id)arg1;
- (void)doAsyncRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)initInvoker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

