//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSLock, NSMutableSet, NSString;

@interface WPKNetworkProxy : NSProxy <NSURLSessionDelegate>
{
    id _reObject;
    NSMutableSet *_swizzleMethodSet;
    NSLock *_lock;
}

+ (id)networkProxyWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableSet *swizzleMethodSet; // @synthesize swizzleMethodSet=_swizzleMethodSet;
@property(retain, nonatomic) id reObject; // @synthesize reObject=_reObject;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (_Bool)containSwizzleMethod:(id)arg1;
- (void)addSwizzleMethod:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)processInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

