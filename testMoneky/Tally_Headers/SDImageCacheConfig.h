//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSFileManager;

@interface SDImageCacheConfig : NSObject <NSCopying>
{
    _Bool _shouldDisableiCloud;
    _Bool _shouldCacheImagesInMemory;
    _Bool _shouldUseWeakMemoryCache;
    _Bool _shouldRemoveExpiredDataWhenEnterBackground;
    unsigned long long _diskCacheReadingOptions;
    unsigned long long _diskCacheWritingOptions;
    double _maxDiskAge;
    unsigned long long _maxDiskSize;
    unsigned long long _maxMemoryCost;
    unsigned long long _maxMemoryCount;
    unsigned long long _diskCacheExpireType;
    NSFileManager *_fileManager;
    Class _memoryCacheClass;
    Class _diskCacheClass;
}

+ (id)defaultCacheConfig;
- (void).cxx_destruct;
@property(nonatomic) Class diskCacheClass; // @synthesize diskCacheClass=_diskCacheClass;
@property(nonatomic) Class memoryCacheClass; // @synthesize memoryCacheClass=_memoryCacheClass;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) unsigned long long diskCacheExpireType; // @synthesize diskCacheExpireType=_diskCacheExpireType;
@property(nonatomic) unsigned long long maxMemoryCount; // @synthesize maxMemoryCount=_maxMemoryCount;
@property(nonatomic) unsigned long long maxMemoryCost; // @synthesize maxMemoryCost=_maxMemoryCost;
@property(nonatomic) unsigned long long maxDiskSize; // @synthesize maxDiskSize=_maxDiskSize;
@property(nonatomic) double maxDiskAge; // @synthesize maxDiskAge=_maxDiskAge;
@property(nonatomic) unsigned long long diskCacheWritingOptions; // @synthesize diskCacheWritingOptions=_diskCacheWritingOptions;
@property(nonatomic) unsigned long long diskCacheReadingOptions; // @synthesize diskCacheReadingOptions=_diskCacheReadingOptions;
@property(nonatomic) _Bool shouldRemoveExpiredDataWhenEnterBackground; // @synthesize shouldRemoveExpiredDataWhenEnterBackground=_shouldRemoveExpiredDataWhenEnterBackground;
@property(nonatomic) _Bool shouldUseWeakMemoryCache; // @synthesize shouldUseWeakMemoryCache=_shouldUseWeakMemoryCache;
@property(nonatomic) _Bool shouldCacheImagesInMemory; // @synthesize shouldCacheImagesInMemory=_shouldCacheImagesInMemory;
@property(nonatomic) _Bool shouldDisableiCloud; // @synthesize shouldDisableiCloud=_shouldDisableiCloud;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

