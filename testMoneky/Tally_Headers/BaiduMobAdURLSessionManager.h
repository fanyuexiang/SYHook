//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableURLRequest, NSOperationQueue, NSURLResponse, NSURLSessionConfiguration;

@interface BaiduMobAdURLSessionManager : NSObject
{
    _Bool _urlError;
    NSMutableURLRequest *_currentRequest;
    NSURLResponse *_currentResponse;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSOperationQueue *_operationQueue;
}

+ (void)sendAsynchronousLogString:(id)arg1 withTimeoutInterva:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSURLResponse *currentResponse; // @synthesize currentResponse=_currentResponse;
@property(retain, nonatomic) NSMutableURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool urlError; // @synthesize urlError=_urlError;
- (void)sendAsynchronousRequest:(id)arg1 parameters:(id)arg2 headers:(id)arg3 requestMethod:(id)arg4 timeoutInterval:(double)arg5 target:(id)arg6 callback:(SEL)arg7 errback:(SEL)arg8 completion:(CDUnknownBlockType)arg9;
- (id)createWithString:(id)arg1;
- (id)sendSyncRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
- (void)sendAsyncGetUrlString:(id)arg1 parameters:(id)arg2 headers:(id)arg3 timeoutInterval:(double)arg4 target:(id)arg5 callback:(SEL)arg6 errback:(SEL)arg7 completion:(CDUnknownBlockType)arg8;
- (void)sendAsyncPostUrlString:(id)arg1 parameters:(id)arg2 headers:(id)arg3 timeoutInterval:(double)arg4 target:(id)arg5 callback:(SEL)arg6 errback:(SEL)arg7 completion:(CDUnknownBlockType)arg8;
- (void)sendAsyncPostUrlString:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendAsyncGetUrlString:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSessionConfiguration:(id)arg1 withQueue:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

