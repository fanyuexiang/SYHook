//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCourseStep : NSObject
{
    NSString *_name;
    NSString *_desc;
    long long _lock_status;
}

+ (id)parseFromDic:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long lock_status; // @synthesize lock_status=_lock_status;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

