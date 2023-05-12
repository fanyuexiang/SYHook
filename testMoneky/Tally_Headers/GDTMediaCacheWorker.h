//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTCacheConfiguration, NSDate, NSError, NSFileHandle, NSString;

@interface GDTMediaCacheWorker : NSObject
{
    _Bool _writting;
    float _writeBytes;
    NSError *_setupError;
    long long _cacheCount;
    NSFileHandle *_readFileHandle;
    NSFileHandle *_writeFileHandle;
    NSString *_filePath;
    GDTCacheConfiguration *_internalCacheConfiguration;
    long long _currentOffset;
    NSDate *_startWriteDate;
}

@property(nonatomic) _Bool writting; // @synthesize writting=_writting;
@property(nonatomic) float writeBytes; // @synthesize writeBytes=_writeBytes;
@property(retain, nonatomic) NSDate *startWriteDate; // @synthesize startWriteDate=_startWriteDate;
@property(nonatomic) long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) GDTCacheConfiguration *internalCacheConfiguration; // @synthesize internalCacheConfiguration=_internalCacheConfiguration;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSFileHandle *writeFileHandle; // @synthesize writeFileHandle=_writeFileHandle;
@property(retain, nonatomic) NSFileHandle *readFileHandle; // @synthesize readFileHandle=_readFileHandle;
@property(nonatomic) long long cacheCount; // @synthesize cacheCount=_cacheCount;
@property(retain, nonatomic) NSError *setupError; // @synthesize setupError=_setupError;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)GDTfunctioni4vjhe;
- (void)GDTfunctione7Zrrh;
- (void)save;
- (void)setContentInfo:(id)arg1 error:(id *)arg2;
- (id)GDTfunctiony5nofQ:(struct _NSRange)arg1;
- (id)GDTfunctiony2gqrN:(struct _NSRange)arg1 error:(id *)arg2;
- (void)GDTfunctiona80VYc:(id)arg1 forRange:(struct _NSRange)arg2 error:(id *)arg3;
@property(readonly, nonatomic) GDTCacheConfiguration *GDTfunctiong7mf6Z;
- (id)initWithURL:(id)arg1 specifiedFilePath:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

@end

