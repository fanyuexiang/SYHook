//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UTDDeviceInfo, UTDSDKInfo, UTDSession;

@interface UTDContext : NSObject
{
    NSMutableArray *_sdkInfoArray;
    UTDSDKInfo *_sdkInfo;
    UTDDeviceInfo *_deviceInfo;
    UTDSession *_currentSession;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedUTDContext;
@property(retain, nonatomic) UTDSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) UTDDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) UTDSDKInfo *sdkInfo; // @synthesize sdkInfo=_sdkInfo;
- (void).cxx_destruct;
- (_Bool)valid;
- (id)getDefaultSdkInfo;
- (void)putSdkInfoInArray:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

