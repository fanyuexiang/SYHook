//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionDownloadTask;

@interface GDTImageDownloader : NSObject
{
    NSURLSessionDownloadTask *_task;
    CDUnknownBlockType _finishBlock;
}

+ (void)cleanAllImageCache;
+ (void)downloadImageWithURL:(id)arg1 finished:(CDUnknownBlockType)arg2;
+ (void)downloadImageDataWithURL:(id)arg1 readCache:(_Bool)arg2 finished:(CDUnknownBlockType)arg3;
+ (id)cachedImageDataWithURL:(id)arg1;
+ (id)cachedImageWithURL:(id)arg1;
+ (id)cachePathImageWithURL:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)GDTfunctione0ip2z:(id)arg1 progress:(CDUnknownBlockType)arg2 finished:(CDUnknownBlockType)arg3;

@end
