//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCChapterListModel : NSObject
{
    NSString *_chapter_name;
    long long _lock_status;
    long long _finish_status;
    NSString *_lock_desc;
    NSArray *_chapter_list;
}

+ (id)parseFromdic:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *chapter_list; // @synthesize chapter_list=_chapter_list;
@property(retain, nonatomic) NSString *lock_desc; // @synthesize lock_desc=_lock_desc;
@property(nonatomic) long long finish_status; // @synthesize finish_status=_finish_status;
@property(nonatomic) long long lock_status; // @synthesize lock_status=_lock_status;
@property(retain, nonatomic) NSString *chapter_name; // @synthesize chapter_name=_chapter_name;
- (id)init;

@end

