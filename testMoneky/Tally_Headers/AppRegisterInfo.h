//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface AppRegisterInfo : NSObject <NSCoding>
{
    _Bool needUpdateInfo;
    _Bool needUpdateIcon;
    _Bool needUpdateWatermark;
    _Bool appAddedByUser;
    _Bool appCanShowNew;
    _Bool isNewApp;
    unsigned int lastUpdateInfoTime;
    unsigned int lastUpdateWatermarkTime;
    unsigned int lastUpdateIconTime;
    unsigned int appInfoFlag;
    unsigned int appUpdateVersion;
    unsigned int nextUpdateInfoTime;
    unsigned int rankWeight;
    unsigned long long appInfoVer;
    NSString *appName;
    NSString *appName4ZhTw;
    NSString *appName4EnUs;
    NSString *appID;
    NSString *appIdentifier;
    NSString *appDescription;
    NSString *appDescription4ZhTw;
    NSString *appDescription4EnUs;
    NSString *appInstallUrl;
    NSString *appIconUrl;
    NSString *appWatermarkUrl;
    NSString *appTypeList;
    NSString *appDevInfo;
    NSString *appDownloadUrl;
    NSString *appDownloadUrlMD5;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int rankWeight; // @synthesize rankWeight;
@property(nonatomic) unsigned int nextUpdateInfoTime; // @synthesize nextUpdateInfoTime;
@property(copy, nonatomic) NSString *appDownloadUrlMD5; // @synthesize appDownloadUrlMD5;
@property(copy, nonatomic) NSString *appDownloadUrl; // @synthesize appDownloadUrl;
@property(nonatomic) _Bool isNewApp; // @synthesize isNewApp;
@property(nonatomic) _Bool appCanShowNew; // @synthesize appCanShowNew;
@property(nonatomic) unsigned int appUpdateVersion; // @synthesize appUpdateVersion;
@property(nonatomic) unsigned int appInfoFlag; // @synthesize appInfoFlag;
@property(copy, nonatomic) NSString *appDevInfo; // @synthesize appDevInfo;
@property(copy, nonatomic) NSString *appTypeList; // @synthesize appTypeList;
@property(nonatomic) unsigned int lastUpdateIconTime; // @synthesize lastUpdateIconTime;
@property(nonatomic) unsigned int lastUpdateWatermarkTime; // @synthesize lastUpdateWatermarkTime;
@property(nonatomic) unsigned int lastUpdateInfoTime; // @synthesize lastUpdateInfoTime;
@property(copy, nonatomic) NSString *appWatermarkUrl; // @synthesize appWatermarkUrl;
@property(copy, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl;
@property(copy, nonatomic) NSString *appInstallUrl; // @synthesize appInstallUrl;
@property(copy, nonatomic) NSString *appDescription4EnUs; // @synthesize appDescription4EnUs;
@property(copy, nonatomic) NSString *appDescription4ZhTw; // @synthesize appDescription4ZhTw;
@property(copy, nonatomic) NSString *appDescription; // @synthesize appDescription;
@property(nonatomic) _Bool appAddedByUser; // @synthesize appAddedByUser;
@property(nonatomic) _Bool needUpdateWatermark; // @synthesize needUpdateWatermark;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier;
@property(copy, nonatomic) NSString *appID; // @synthesize appID;
@property(copy, nonatomic) NSString *appName4EnUs; // @synthesize appName4EnUs;
@property(copy, nonatomic) NSString *appName4ZhTw; // @synthesize appName4ZhTw;
@property(copy, nonatomic) NSString *appName; // @synthesize appName;
@property(nonatomic) _Bool needUpdateIcon; // @synthesize needUpdateIcon;
@property(nonatomic) _Bool needUpdateInfo; // @synthesize needUpdateInfo;
@property(nonatomic) unsigned long long appInfoVer; // @synthesize appInfoVer;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

