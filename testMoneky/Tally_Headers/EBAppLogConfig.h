//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EBAppLogConfig : NSObject
{
    _Bool _autoActiveUser;
    _Bool _showDebugLog;
    _Bool _logNeedEncrypt;
    NSString *_channel;
    NSString *_appName;
    NSString *_appID;
    long long _serviceVendor;
    CDUnknownBlockType _logger;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool logNeedEncrypt; // @synthesize logNeedEncrypt=_logNeedEncrypt;
@property(copy, nonatomic) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool showDebugLog; // @synthesize showDebugLog=_showDebugLog;
@property(nonatomic) _Bool autoActiveUser; // @synthesize autoActiveUser=_autoActiveUser;
@property(nonatomic) long long serviceVendor; // @synthesize serviceVendor=_serviceVendor;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (id)init;

@end

