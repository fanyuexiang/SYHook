//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSJRewardedRetainAlertConfig : NSObject
{
    _Bool _alertDidReduceTime;
    long long _alertType;
    NSString *_template_url;
    NSString *_template_md5;
    long long _reduce_time;
    long long _reduce_duration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alertDidReduceTime; // @synthesize alertDidReduceTime=_alertDidReduceTime;
@property(nonatomic) long long reduce_duration; // @synthesize reduce_duration=_reduce_duration;
@property(nonatomic) long long reduce_time; // @synthesize reduce_time=_reduce_time;
@property(copy, nonatomic) NSString *template_md5; // @synthesize template_md5=_template_md5;
@property(copy, nonatomic) NSString *template_url; // @synthesize template_url=_template_url;
@property(nonatomic) long long alertType; // @synthesize alertType=_alertType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setupDataWithDictionary:(id)arg1;
- (void)prefetchDSLWithSlotId:(id)arg1;
- (_Bool)isValid;
- (id)initWithDictionary:(id)arg1;

@end

