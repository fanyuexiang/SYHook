//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GDTMAppConfigModel : NSObject
{
    NSString *_version;
    long long _updateInterval;
    NSDictionary *_configDict;
    long long _parallelCount;
}

@property(nonatomic) long long parallelCount; // @synthesize parallelCount=_parallelCount;
@property(retain, nonatomic) NSDictionary *configDict; // @synthesize configDict=_configDict;
@property(nonatomic) long long updateInterval; // @synthesize updateInterval=_updateInterval;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end
