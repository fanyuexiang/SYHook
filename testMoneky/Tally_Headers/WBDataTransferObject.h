//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WeiboSDK3rdApp;

@interface WBDataTransferObject : NSObject
{
    _Bool shouldOpenWeiboAppInstallPageIfNotInstalled;
    _Bool _pasteBoardUnenable;
    NSDictionary *userInfo;
    WeiboSDK3rdApp *app;
    NSString *sdkVersion;
}

+ (id)open3rdAppSchemeWithID:(id)arg1 appKey:(id)arg2;
+ (id)openWeiboAppSchemeWithID:(id)arg1;
+ (id)objectFormSchemeUrl:(id)arg1 sdkID:(id)arg2 sdkVersion:(id)arg3;
+ (id)objectFromPasteboardWithID:(id)arg1 sdkVersion:(id)arg2 url:(id)arg3;
+ (id)unSupportedObjectFromPasteboard;
+ (id)mappedObjectWithDictionary:(id)arg1;
+ (id)transferType;
+ (id)UUID;
- (void).cxx_destruct;
@property(nonatomic) _Bool pasteBoardUnenable; // @synthesize pasteBoardUnenable=_pasteBoardUnenable;
@property(nonatomic) _Bool shouldOpenWeiboAppInstallPageIfNotInstalled; // @synthesize shouldOpenWeiboAppInstallPageIfNotInstalled;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) WeiboSDK3rdApp *app; // @synthesize app;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
- (void)removeFromPasteboard;
- (id)open3rdAppUniversalLink:(id)arg1 withAppKey:(id)arg2;
- (id)open3rdAppSchemeWithAppKey:(id)arg1;
- (id)openWeiboAppUniversalLink;
- (id)openWeiboAppScheme;
- (id)appAttachment;
- (id)transferObjectForattachment;
- (id)transferObjectsForPasteboard;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validateAfterReceive;
- (id)validateBeforeSend;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
- (id)validateUserInfo;
- (id)validate;
- (void)setObjectID:(id)arg1;
- (id)objectID;
- (id)init;

@end

