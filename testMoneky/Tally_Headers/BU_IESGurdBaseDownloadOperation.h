//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class BU_IESGurdDownloadPackageInfo, BU_IESGurdResourceModel, NSDate, NSString;

@interface BU_IESGurdBaseDownloadOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    NSString *_accessKey;
    BU_IESGurdResourceModel *_config;
    CDUnknownBlockType _downloadCompletion;
    BU_IESGurdDownloadPackageInfo *_downloadPackageInfo;
    NSDate *_downloadSuccessDate;
}

+ (id)operationWithAccessKey:(id)arg1 config:(id)arg2 downloadCompletion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *downloadSuccessDate; // @synthesize downloadSuccessDate=_downloadSuccessDate;
@property(retain, nonatomic) BU_IESGurdDownloadPackageInfo *downloadPackageInfo; // @synthesize downloadPackageInfo=_downloadPackageInfo;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletion; // @synthesize downloadCompletion=_downloadCompletion;
@property(retain, nonatomic) BU_IESGurdResourceModel *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (_Bool)isPatch;
- (void)operationDidStart;
- (void)innerSendStatusMessageWithType:(long long)arg1 succeed:(_Bool)arg2 error:(id)arg3 extraInfo:(id)arg4;
- (void)innerFinishDownloadWithPath:(id)arg1 error:(id)arg2;
- (void)traceEventWithMessage:(id)arg1 hasError:(_Bool)arg2;
- (_Bool)checkFileMd5WithPackagePath:(id)arg1 md5:(id)arg2 packageTypeString:(id)arg3 downloadURLString:(id)arg4 errorMessage:(id *)arg5;
- (void)handleBusinessFailedWithType:(long long)arg1 error:(id)arg2;
- (void)handleBusinessSuccessWithPackagePath:(id)arg1 downloadSize:(unsigned long long)arg2 downloadInfo:(id)arg3;
- (void)handleDownloadResultWithDownloadInfo:(id)arg1 succeed:(_Bool)arg2 error:(id)arg3;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)start;

@end

