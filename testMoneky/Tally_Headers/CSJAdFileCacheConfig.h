//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSJAdFileCacheConfig : NSObject
{
    NSString *_directoryName;
    long long _maxFileCount;
    long long _maxSize;
    NSString *_keyLog;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *keyLog; // @synthesize keyLog=_keyLog;
@property(nonatomic) long long maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) long long maxFileCount; // @synthesize maxFileCount=_maxFileCount;
@property(copy, nonatomic) NSString *directoryName; // @synthesize directoryName=_directoryName;
- (_Bool)valid;
- (id)init;

@end
