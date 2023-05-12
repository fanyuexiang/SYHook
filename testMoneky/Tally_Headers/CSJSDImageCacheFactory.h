//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface CSJSDImageCacheFactory : NSObject
{
    NSMutableDictionary *_cacheDictionary;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)imageCacheWithType:(unsigned long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
- (id)_createCacheWithType:(unsigned long long)arg1;
- (id)_imageCacheWithType:(unsigned long long)arg1;
- (id)init;

@end
