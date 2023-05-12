//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABUAppLogManager : NSObject
{
    _Bool _isFirstRegister;
    _Bool _isFirstCallback;
    NSString *_deviceID;
    NSString *_installID;
    NSString *_ssID;
    CDUnknownBlockType _didCompletion;
}

+ (void)hook_swizzleAppLogSetRegisterFinishBlock;
+ (id)sdkVersion;
+ (id)host_appid;
+ (id)appName;
+ (id)appID;
+ (void)startLogsdkWithDC:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)startLogsdkWithDC1:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)sharedAppLogManager;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstCallback; // @synthesize isFirstCallback=_isFirstCallback;
@property(copy, nonatomic) CDUnknownBlockType didCompletion; // @synthesize didCompletion=_didCompletion;
@property(nonatomic) _Bool isFirstRegister; // @synthesize isFirstRegister=_isFirstRegister;
@property(copy, nonatomic) NSString *ssID; // @synthesize ssID=_ssID;
@property(copy, nonatomic) NSString *installID; // @synthesize installID=_installID;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)ABUBDAutoTrackNotificationRegisterSuccessAction:(id)arg1;
- (void)_checkDeviceId;
- (void)_setupObserver;
- (void)dealloc;

@end
