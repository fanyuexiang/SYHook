//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface CSJAudioInfo : NSObject <NSCoding>
{
    NSString *_audio_url;
    NSString *_file_hash;
    NSString *_format;
    long long _size;
    long long _cache_type;
    long long _duaration;
    long long _preload_size;
}

- (void).cxx_destruct;
@property(nonatomic) long long preload_size; // @synthesize preload_size=_preload_size;
@property(nonatomic) long long duaration; // @synthesize duaration=_duaration;
@property(nonatomic) long long cache_type; // @synthesize cache_type=_cache_type;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *file_hash; // @synthesize file_hash=_file_hash;
@property(copy, nonatomic) NSString *audio_url; // @synthesize audio_url=_audio_url;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

