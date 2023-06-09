//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface BaiduMobAdDiskLRUCache : NSObject
{
    NSObject<OS_dispatch_queue> *_diskIOQueue;
    NSString *_diskCachePath;
    NSString *_videoDiskCachePath;
    NSString *_fileCachePath;
    unsigned long long _numBytesStoredForSizeCheck;
}

+ (id)sharedDiskCache;
- (void).cxx_destruct;
@property unsigned long long numBytesStoredForSizeCheck; // @synthesize numBytesStoredForSizeCheck=_numBytesStoredForSizeCheck;
@property(copy, nonatomic) NSString *fileCachePath; // @synthesize fileCachePath=_fileCachePath;
@property(copy, nonatomic) NSString *videoDiskCachePath; // @synthesize videoDiskCachePath=_videoDiskCachePath;
@property(copy, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *diskIOQueue; // @synthesize diskIOQueue=_diskIOQueue;
- (_Bool)moveItemAtKey:(id)arg1 andCacheType:(int)arg2 toPath:(id)arg3;
- (_Bool)moveItemAtKey:(id)arg1 toPath:(id)arg2;
- (_Bool)isExistsAtPath:(id)arg1;
- (id)cacheFilePathForKey:(id)arg1 FilePath:(id)arg2;
- (id)cacheFilePathForKey:(id)arg1 andCacheType:(int)arg2;
- (id)cacheFilePathForKey:(id)arg1;
- (unsigned long long)sizeOfCacheFilesInArray:(id)arg1;
- (id)cacheFilesSortedByModDateWithCachePath:(id)arg1;
- (id)expiredCachedFilesInArray:(id)arg1;
- (unsigned long long)getFileCacheSoftMaxSize;
- (unsigned long long)getVideoCacheSoftMaxSize;
- (unsigned long long)getImageCacheSoftMaxSize;
- (void)ensureCacheSizeLimitWithCacheType:(int)arg1;
- (void)storeData:(id)arg1 forKey:(id)arg2 andCacheType:(int)arg3;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (id)retrieveDataForKey:(id)arg1 InCachePath:(id)arg2;
- (id)retrieveDataForKey:(id)arg1 andCacheType:(int)arg2;
- (id)retrieveDataForKey:(id)arg1;
- (_Bool)cachedDataExistsForKey:(id)arg1 FilePath:(id)arg2;
- (_Bool)cachedDataExistsForKey:(id)arg1 andCacheType:(int)arg2;
- (_Bool)cachedDataExistsForKey:(id)arg1;
- (void)removeAllCachedFiles;
- (_Bool)removeCacheFileWithFilePath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

