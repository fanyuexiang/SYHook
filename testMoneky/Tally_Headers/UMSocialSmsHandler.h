//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMSocialHandler.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSString;

@interface UMSocialSmsHandler : UMSocialHandler <MFMessageComposeViewControllerDelegate>
{
}

+ (id)defaultManager;
+ (id)socialPlatformTypes;
+ (void)load;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 configBaseInfoWithShareObject:(id)arg2;
- (void)shareFileUrl:(id)arg1;
- (void)shareFile:(id)arg1;
- (void)shareImage:(id)arg1;
- (void)shareTextObject:(id)arg1;
- (void)shareSmsObject:(id)arg1;
- (_Bool)umSocial_isSupport;
- (_Bool)umSocial_isInstall;
- (id)umSocial_PlatformSDKVersion;
- (unsigned long long)umSocial_SupportedFeatures;
- (void)umSocial_RequestForUserProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)checkUrlSchema;
- (void)umSocial_ShareWithObject:(id)arg1 withViewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)umSocial_AuthorizeWithUserInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)umSocial_handleOpenURL:(id)arg1;
- (void)umSocial_clearCacheData;
- (void)umSocial_setAppKey:(id)arg1 withAppSecret:(id)arg2 withRedirectURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

