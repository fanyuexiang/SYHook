//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUActionWorker, NSData, NSError, NSString, NSURLResponse;

@protocol BUActionWorkerDelegate <NSObject>
- (void)actionWorker:(BUActionWorker *)arg1 didReceiveLength:(long long)arg2 didFinishWithError:(NSError *)arg3 responseDesc:(NSString *)arg4;
- (void)actionWorker:(BUActionWorker *)arg1 didReceiveData:(NSData *)arg2 isLocal:(_Bool)arg3;
- (void)actionWorker:(BUActionWorker *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end
