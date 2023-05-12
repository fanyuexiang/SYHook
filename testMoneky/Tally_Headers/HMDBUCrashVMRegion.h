//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDBUCrashModel.h"

@class HMDBUCrashBinaryImage, HMDBUCrashSegment, NSString;

@interface HMDBUCrashVMRegion : HMDBUCrashModel
{
    unsigned char _share_mode;
    unsigned char _external_pager;
    int _protection;
    int _max_protection;
    unsigned int _user_tag;
    unsigned long long _resident_size;
    unsigned long long _swapped_size;
    unsigned long long _dirty_size;
    NSString *_file;
    unsigned long long _base;
    unsigned long long _size;
    NSString *_protectionString;
    NSString *_userTagString;
    NSString *_shareModeString;
    HMDBUCrashSegment *_segment;
    HMDBUCrashBinaryImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMDBUCrashBinaryImage *image; // @synthesize image=_image;
@property(retain, nonatomic) HMDBUCrashSegment *segment; // @synthesize segment=_segment;
@property(copy, nonatomic) NSString *shareModeString; // @synthesize shareModeString=_shareModeString;
@property(copy, nonatomic) NSString *userTagString; // @synthesize userTagString=_userTagString;
@property(copy, nonatomic) NSString *protectionString; // @synthesize protectionString=_protectionString;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long base; // @synthesize base=_base;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(nonatomic) unsigned char external_pager; // @synthesize external_pager=_external_pager;
@property(nonatomic) unsigned char share_mode; // @synthesize share_mode=_share_mode;
@property(nonatomic) unsigned long long dirty_size; // @synthesize dirty_size=_dirty_size;
@property(nonatomic) unsigned long long swapped_size; // @synthesize swapped_size=_swapped_size;
@property(nonatomic) unsigned long long resident_size; // @synthesize resident_size=_resident_size;
@property(nonatomic) unsigned int user_tag; // @synthesize user_tag=_user_tag;
@property(nonatomic) int max_protection; // @synthesize max_protection=_max_protection;
@property(nonatomic) int protection; // @synthesize protection=_protection;
- (id)postDict;
- (id)protectionString:(int)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

