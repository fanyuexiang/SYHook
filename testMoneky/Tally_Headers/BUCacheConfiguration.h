//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class BUContentInfo, NSArray, NSLock, NSString, NSURL;

@interface BUCacheConfiguration : NSObject <NSCoding>
{
    float _version;
    NSArray *_cacheFragments;
    NSURL *_url;
    NSString *_filePath;
    BUContentInfo *_contentInfo;
    NSLock *_cacheFragmentsLock;
}

+ (id)configurationWithMP4FilePath:(id)arg1 downloadURL:(id)arg2;
+ (id)configurationFilePathForFilePath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *cacheFragmentsLock; // @synthesize cacheFragmentsLock=_cacheFragmentsLock;
@property(retain, nonatomic) BUContentInfo *contentInfo; // @synthesize contentInfo=_contentInfo;
@property(nonatomic) float version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)addDownloadedBytes:(long long)arg1 spent:(double)arg2;
- (struct _NSRange)unionStickyFragment:(struct _NSRange)arg1 range2:(struct _NSRange)arg2;
- (void)addCacheFragment:(struct _NSRange)arg1;
- (void)save;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long downloadedBytes;
@property(readonly, nonatomic) float progress;
@property(retain, nonatomic) NSArray *cacheFragments; // @synthesize cacheFragments=_cacheFragments;
- (id)init;

@end
