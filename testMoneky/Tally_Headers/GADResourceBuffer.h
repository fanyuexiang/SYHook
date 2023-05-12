//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"

@class GADEventContext, GADScheduler, GADURLSessionTransaction, NSDictionary, NSMutableSet, NSOperationQueue, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_queue;

@interface GADResourceBuffer : NSObject <NSURLSessionDataDelegate, GADEventContextSource>
{
    _Bool _removeFileOnDealloc;
    NSOperationQueue *_operationQueue;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    GADURLSessionTransaction *_transaction;
    GADEventContext *_context;
    GADScheduler *_scheduler;
    _Bool _completed;
    NSObject<OS_dispatch_queue> *_lockQueue;
    double _bufferingStartTimeIntervalSinceBoot;
    unsigned long long _bufferedContentSize;
    NSDictionary *_responseHeaders;
    _Bool _valid;
    long long _maxBytes;
    _Bool _responseHeadersReceived;
    _Bool _started;
    NSMutableSet *_notifyBytesObservers;
    _Bool _downloaded;
    NSObject<OS_dispatch_queue> *_fileReadWriteQueue;
    NSURLRequest *_request;
    NSURL *_fileURL;
    NSString *_contentType;
    long long _contentLength;
}

- (void).cxx_destruct;
@property(readonly) long long contentLength; // @synthesize contentLength=_contentLength;
@property(readonly, copy) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) GADEventContext *context;
@property(readonly) _Bool started;
@property(readonly) _Bool responseHeadersReceived;
@property long long maxBytes;
@property(readonly) _Bool downloaded;
@property(readonly) _Bool completed;
@property(readonly) _Bool valid;
- (void)setValid:(_Bool)arg1;
@property(readonly, copy) NSDictionary *responseHeaders;
- (void)setResponseHeaders:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reset;
- (void)finishWithError:(id)arg1;
- (void)notifyObserversWaitingForNotifyBytes;
- (void)reportCSI;
- (void)startPeriodicReportsWithTimeInterval:(double)arg1;
- (void)addObserverForNotifyBytes:(unsigned long long)arg1 toCollection:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (double)networkSpeedInBytesPerSecond;
- (unsigned long long)bufferedContentSize;
- (void)cancelWithError:(id)arg1;
- (void)start;
- (id)dataWithRange:(struct _NSRange)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 fileURL:(id)arg2 removeFileOnDealloc:(_Bool)arg3;
- (id)initWithRequest:(id)arg1 fileURL:(id)arg2 contentType:(id)arg3 contentLength:(long long)arg4 removeFileOnDealloc:(_Bool)arg5;
- (void)commonInitWithRequest:(id)arg1 fileURL:(id)arg2 removeFileOnDealloc:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

