//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSession.h>

@interface NSURLSession (GDTDownloader)
+ (void)hookOriginalDelegate:(id)arg1 proxy:(id)arg2;
+ (void)hookDelegateMethod:(id)arg1 oriDelegate:(id)arg2 proxy:(id)arg3;
+ (id)wpkNetwork_sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)wpkNetwork_sharedSession;
+ (void)setupWPKNetworkHook;
+ (void)enableNetworkForProtocol:(_Bool)arg1;
@property(copy, nonatomic) CDUnknownBlockType GDTfunctionm4tix4;
@property(copy, nonatomic) CDUnknownBlockType GDTfunctionj7Lz0D;
@property(nonatomic) unsigned long long GDTfunctionq0J0G5;
@property(nonatomic) unsigned long long GDTfunctiond38FBN;
- (id)gul_dataTaskPromiseWithRequest:(id)arg1;
- (id)wpkNetwork_uploadTaskWithStreamedRequest:(id)arg1;
- (id)wpkNetwork_uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)wpkNetwork_uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)wpkNetwork_uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)wpkNetwork_uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)wpkNetwork_downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)wpkNetwork_downloadTaskWithResumeData:(id)arg1;
- (id)wpkNetwork_downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)wpkNetwork_downloadTaskWithRequest:(id)arg1;
- (id)wpkNetwork_downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)wpkNetwork_downloadTaskWithURL:(id)arg1;
- (id)wpkNetwork_dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)wpkNetwork_dataTaskWithRequest:(id)arg1;
- (id)wpkNetwork_dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)wpkNetwork_dataTaskWithURL:(id)arg1;
- (void)createWPKNetworkTask:(unsigned long long)arg1;
- (id)wpkNetworkTaskIdentifierWithTaskIdentifier:(unsigned long long)arg1;
- (id)wpkNetworkTaskIdentifierWithTask:(id)arg1;
@end
