//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC9Alamofire12TaskDelegate.h"

#import "NSURLSessionDataDelegate-Protocol.h"

@interface _TtC9Alamofire16DataTaskDelegate : _TtC9Alamofire12TaskDelegate <NSURLSessionDataDelegate>
{
    // Error parsing type: , name: progress
    // Error parsing type: , name: progressHandler
    // Error parsing type: , name: dataStream
    // Error parsing type: , name: totalBytesReceived
    // Error parsing type: , name: mutableData
    // Error parsing type: , name: expectedContentLength
    // Error parsing type: , name: dataTaskDidReceiveResponse
    // Error parsing type: , name: dataTaskDidBecomeDownloadTask
    // Error parsing type: , name: dataTaskDidReceiveData
    // Error parsing type: , name: dataTaskWillCacheResponse
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

