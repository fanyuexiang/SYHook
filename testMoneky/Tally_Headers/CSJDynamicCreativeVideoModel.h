//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSJDynamicCreativeVideoModel : NSObject
{
    long long _cover_height;
    NSString *_cover_url;
    long long _cover_width;
    NSString *_endcard;
    long long _fallback_endcard_judge;
    NSString *_file_hash;
    NSString *_resolution;
    long long _size;
    long long _video_duration;
    NSString *_video_url;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(nonatomic) long long video_duration; // @synthesize video_duration=_video_duration;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(copy, nonatomic) NSString *file_hash; // @synthesize file_hash=_file_hash;
@property(nonatomic) long long fallback_endcard_judge; // @synthesize fallback_endcard_judge=_fallback_endcard_judge;
@property(copy, nonatomic) NSString *endcard; // @synthesize endcard=_endcard;
@property(nonatomic) long long cover_width; // @synthesize cover_width=_cover_width;
@property(copy, nonatomic) NSString *cover_url; // @synthesize cover_url=_cover_url;
@property(nonatomic) long long cover_height; // @synthesize cover_height=_cover_height;
- (id)initWithDictionary:(id)arg1;

@end

