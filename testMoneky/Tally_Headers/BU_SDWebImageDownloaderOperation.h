//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "SDWebImageDownloaderOperation-Protocol.h"

@class NSData, NSDictionary, NSError, NSMutableArray, NSMutableData, NSObject, NSString, NSURLCredential, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface BU_SDWebImageDownloaderOperation : NSOperation <SDWebImageDownloaderOperation>
{
    _Bool _executing;
    _Bool _finished;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSURLSessionTask *_dataTask;
    NSURLCredential *_credential;
    double _minimumProgressInterval;
    unsigned long long _options;
    NSDictionary *_context;
    NSMutableArray *_callbackBlocks;
    NSMutableData *_imageData;
    NSData *_cachedData;
    unsigned long long _expectedSize;
    unsigned long long _receivedSize;
    NSError *_responseError;
    double _previousProgress;
    NSURLSession *_unownedSession;
    NSURLSession *_ownedSession;
    NSObject<OS_dispatch_queue> *_coderQueue;
    unsigned long long _backgroundTaskId;
}

+ (unsigned long long)imageOptionsFromDownloaderOptions:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coderQueue; // @synthesize coderQueue=_coderQueue;
@property(retain, nonatomic) NSURLSession *ownedSession; // @synthesize ownedSession=_ownedSession;
@property(nonatomic) __weak NSURLSession *unownedSession; // @synthesize unownedSession=_unownedSession;
@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(nonatomic) unsigned long long receivedSize; // @synthesize receivedSize=_receivedSize;
@property(nonatomic) unsigned long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(copy, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSMutableArray *callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) double minimumProgressInterval; // @synthesize minimumProgressInterval=_minimumProgressInterval;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) NSURLSessionTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void)callCompletionBlocksWithImage:(id)arg1 imageData:(id)arg2 error:(id)arg3 finished:(_Bool)arg4;
- (void)callCompletionBlocksWithError:(id)arg1;
- (_Bool)shouldContinueWhenAppEntersBackground;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)isConcurrent;
- (void)reset;
- (void)done;
- (void)cancelInternal;
- (void)cancel;
- (void)start;
- (_Bool)cancel:(id)arg1;
- (id)callbacksForKey:(id)arg1;
- (id)addHandlersForProgress:(CDUnknownBlockType)arg1 completed:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 inSession:(id)arg2 options:(unsigned long long)arg3 context:(id)arg4;
- (id)initWithRequest:(id)arg1 inSession:(id)arg2 options:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

