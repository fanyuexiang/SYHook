//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class BU_AFSecurityPolicy, NSArray, NSLock, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol BU_AFURLResponseSerialization, NSURLSessionTaskDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface BU_AFURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSSecureCoding, NSCopying>
{
    _Bool _attemptsToRecreateUploadTasksForBackgroundSessions;
    NSURLSession *_session;
    NSOperationQueue *_operationQueue;
    id <BU_AFURLResponseSerialization> _responseSerializer;
    BU_AFSecurityPolicy *_securityPolicy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    id <NSURLSessionTaskDelegate> _delegate;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSMutableDictionary *_mutableTaskDelegatesKeyedByTaskIdentifier;
    NSLock *_lock;
    CDUnknownBlockType _sessionDidBecomeInvalid;
    CDUnknownBlockType _sessionDidReceiveAuthenticationChallenge;
    CDUnknownBlockType _didFinishEventsForBackgroundURLSession;
    CDUnknownBlockType _taskWillPerformHTTPRedirection;
    CDUnknownBlockType _taskDidReceiveAuthenticationChallenge;
    CDUnknownBlockType _taskNeedNewBodyStream;
    CDUnknownBlockType _taskDidSendBodyData;
    CDUnknownBlockType _taskDidComplete;
    CDUnknownBlockType _dataTaskDidReceiveResponse;
    CDUnknownBlockType _dataTaskDidBecomeDownloadTask;
    CDUnknownBlockType _dataTaskDidReceiveData;
    CDUnknownBlockType _dataTaskWillCacheResponse;
    CDUnknownBlockType _downloadTaskDidFinishDownloading;
    CDUnknownBlockType _downloadTaskDidWriteData;
    CDUnknownBlockType _downloadTaskDidResume;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType downloadTaskDidResume; // @synthesize downloadTaskDidResume=_downloadTaskDidResume;
@property(copy, nonatomic) CDUnknownBlockType downloadTaskDidWriteData; // @synthesize downloadTaskDidWriteData=_downloadTaskDidWriteData;
@property(copy, nonatomic) CDUnknownBlockType downloadTaskDidFinishDownloading; // @synthesize downloadTaskDidFinishDownloading=_downloadTaskDidFinishDownloading;
@property(copy, nonatomic) CDUnknownBlockType dataTaskWillCacheResponse; // @synthesize dataTaskWillCacheResponse=_dataTaskWillCacheResponse;
@property(copy, nonatomic) CDUnknownBlockType dataTaskDidReceiveData; // @synthesize dataTaskDidReceiveData=_dataTaskDidReceiveData;
@property(copy, nonatomic) CDUnknownBlockType dataTaskDidBecomeDownloadTask; // @synthesize dataTaskDidBecomeDownloadTask=_dataTaskDidBecomeDownloadTask;
@property(copy, nonatomic) CDUnknownBlockType dataTaskDidReceiveResponse; // @synthesize dataTaskDidReceiveResponse=_dataTaskDidReceiveResponse;
@property(copy, nonatomic) CDUnknownBlockType taskDidComplete; // @synthesize taskDidComplete=_taskDidComplete;
@property(copy, nonatomic) CDUnknownBlockType taskDidSendBodyData; // @synthesize taskDidSendBodyData=_taskDidSendBodyData;
@property(copy, nonatomic) CDUnknownBlockType taskNeedNewBodyStream; // @synthesize taskNeedNewBodyStream=_taskNeedNewBodyStream;
@property(copy, nonatomic) CDUnknownBlockType taskDidReceiveAuthenticationChallenge; // @synthesize taskDidReceiveAuthenticationChallenge=_taskDidReceiveAuthenticationChallenge;
@property(copy, nonatomic) CDUnknownBlockType taskWillPerformHTTPRedirection; // @synthesize taskWillPerformHTTPRedirection=_taskWillPerformHTTPRedirection;
@property(copy, nonatomic) CDUnknownBlockType didFinishEventsForBackgroundURLSession; // @synthesize didFinishEventsForBackgroundURLSession=_didFinishEventsForBackgroundURLSession;
@property(copy, nonatomic) CDUnknownBlockType sessionDidReceiveAuthenticationChallenge; // @synthesize sessionDidReceiveAuthenticationChallenge=_sessionDidReceiveAuthenticationChallenge;
@property(copy, nonatomic) CDUnknownBlockType sessionDidBecomeInvalid; // @synthesize sessionDidBecomeInvalid=_sessionDidBecomeInvalid;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *mutableTaskDelegatesKeyedByTaskIdentifier; // @synthesize mutableTaskDelegatesKeyedByTaskIdentifier=_mutableTaskDelegatesKeyedByTaskIdentifier;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(nonatomic) __weak id <NSURLSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool attemptsToRecreateUploadTasksForBackgroundSessions; // @synthesize attemptsToRecreateUploadTasksForBackgroundSessions=_attemptsToRecreateUploadTasksForBackgroundSessions;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) BU_AFSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) id <BU_AFURLResponseSerialization> responseSerializer; // @synthesize responseSerializer=_responseSerializer;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (void)setDownloadTaskDidResumeBlock:(CDUnknownBlockType)arg1;
- (void)setDownloadTaskDidWriteDataBlock:(CDUnknownBlockType)arg1;
- (void)setDownloadTaskDidFinishDownloadingBlock:(CDUnknownBlockType)arg1;
- (void)setDataTaskWillCacheResponseBlock:(CDUnknownBlockType)arg1;
- (void)setDataTaskDidReceiveDataBlock:(CDUnknownBlockType)arg1;
- (void)setDataTaskDidBecomeDownloadTaskBlock:(CDUnknownBlockType)arg1;
- (void)setDataTaskDidReceiveResponseBlock:(CDUnknownBlockType)arg1;
- (void)setTaskDidCompleteBlock:(CDUnknownBlockType)arg1;
- (void)setTaskDidSendBodyDataBlock:(CDUnknownBlockType)arg1;
- (void)setTaskDidReceiveAuthenticationChallengeBlock:(CDUnknownBlockType)arg1;
- (void)setTaskWillPerformHTTPRedirectionBlock:(CDUnknownBlockType)arg1;
- (void)setTaskNeedNewBodyStreamBlock:(CDUnknownBlockType)arg1;
- (void)setDidFinishEventsForBackgroundURLSessionBlock:(CDUnknownBlockType)arg1;
- (void)setSessionDidReceiveAuthenticationChallengeBlock:(CDUnknownBlockType)arg1;
- (void)setSessionDidBecomeInvalidBlock:(CDUnknownBlockType)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dataTaskWithRequest:(id)arg1 uploadProgress:(CDUnknownBlockType)arg2 downloadProgress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeNotificationObserverForTask:(id)arg1;
- (void)addNotificationObserverForTask:(id)arg1;
- (void)invalidateSessionCancelingTasks:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *downloadTasks;
@property(readonly, nonatomic) NSArray *uploadTasks;
@property(readonly, nonatomic) NSArray *dataTasks;
@property(readonly, nonatomic) NSArray *tasks;
- (id)tasksForKeyPath:(id)arg1;
- (void)removeDelegateForTask:(id)arg1;
- (void)addDelegateForDownloadTask:(id)arg1 progress:(CDUnknownBlockType)arg2 destination:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addDelegateForUploadTask:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addDelegateForDataTask:(id)arg1 uploadProgress:(CDUnknownBlockType)arg2 downloadProgress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setDelegate:(id)arg1 forTask:(id)arg2;
- (id)delegateForTask:(id)arg1;
- (void)taskDidSuspend:(id)arg1;
- (void)taskDidResume:(id)arg1;
@property(readonly, copy, nonatomic) NSString *taskDescriptionForSessionTasks;
- (void)dealloc;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

