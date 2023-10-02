//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface HMDBUEmbedSessionRecord : NSObject
{
    NSString *_aid;
    NSString *_sessionID;
    NSString *_deviceID;
    NSString *_hostAppID;
    double _timestamp;
    NSString *_sdkVersion;
    NSDictionary *_filters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *hostAppID; // @synthesize hostAppID=_hostAppID;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
- (id)recordJSON;
- (id)init;

@end

