//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SKNTallyImageUploadItem : NSObject
{
    NSNumber *_sorID;
    long long _maxUploadTimes;
    long long _maxFailedTimes;
    long long _currentUploadTimes;
    long long _currentFailedTimes;
    long long _uploading;
}

- (void).cxx_destruct;
@property(nonatomic) long long uploading; // @synthesize uploading=_uploading;
@property(nonatomic) long long currentFailedTimes; // @synthesize currentFailedTimes=_currentFailedTimes;
@property(nonatomic) long long currentUploadTimes; // @synthesize currentUploadTimes=_currentUploadTimes;
@property(nonatomic) long long maxFailedTimes; // @synthesize maxFailedTimes=_maxFailedTimes;
@property(nonatomic) long long maxUploadTimes; // @synthesize maxUploadTimes=_maxUploadTimes;
@property(retain, nonatomic) NSNumber *sorID; // @synthesize sorID=_sorID;
- (id)init;

@end
