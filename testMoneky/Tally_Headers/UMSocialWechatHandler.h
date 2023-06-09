//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMSocialHandler.h"

#import "BriefWebControllerDelegate-Protocol.h"
#import "UMSocialPlatformProvider-Protocol.h"

@class NSArray, NSString, UINavigationController;

@interface UMSocialWechatHandler : UMSocialHandler <UMSocialPlatformProvider, BriefWebControllerDelegate>
{
    NSArray *_platformSchemeList;
    NSString *_currentInstalledScheme;
    UINavigationController *_wechatRootVC;
}

+ (id)socialPlatformTypes;
+ (id)defaultManager;
+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *wechatRootVC; // @synthesize wechatRootVC=_wechatRootVC;
@property(retain, nonatomic) NSString *currentInstalledScheme; // @synthesize currentInstalledScheme=_currentInstalledScheme;
@property(retain, nonatomic) NSArray *platformSchemeList; // @synthesize platformSchemeList=_platformSchemeList;
- (long long)checkErrorCodeWithResponseDic:(id)arg1;
- (int)sceneWithShareType:(long long)arg1;
- (void)shareLaunchMiniProgram:(id)arg1;
- (id)urlEncode:(id)arg1;
- (_Bool)sendLaunchMiniProgramRequest:(id)arg1 urlStr:(id)arg2;
- (void)shareMiniProgram:(id)arg1;
- (void)shareFile:(id)arg1;
- (void)shareEmotion:(id)arg1;
- (void)shareVedio:(id)arg1;
- (void)shareMusic:(id)arg1;
- (void)shareWebPage:(id)arg1;
- (void)shareImage:(id)arg1;
- (void)shareText:(id)arg1;
- (void)fillParams:(id)arg1 withType:(unsigned long long)arg2;
- (unsigned long long)umSocial_SupportedFeatures;
- (void)umSocial_ShareWithObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)accessWechatAuthWithCode:(id)arg1;
- (void)sendOurServerAsyncRequestWithPath:(id)arg1 headers:(id)arg2 body:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sendAsyncRequestWithPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)umSocial_RequestForUserProfileWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doUMSocial_RequestForUserProfileWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doCheckValidAccesstoken:(id)arg1 withRefreshToken:(id)arg2 withUnionid:(id)arg3 withAppID:(id)arg4 withViewController:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)doDirectUMSocial_RequestForUserProfileWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)umSocial_AuthorizeWithUserInfo:(id)arg1 withViewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)umSocial_cancelAuthWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configHandle;
- (_Bool)processLauchFromPlatformCallback:(long long)arg1 command:(long long)arg2 userInfo:(id)arg3;
- (void)shareResultCallback:(long long)arg1 command:(long long)arg2;
- (_Bool)handleShareResult:(id)arg1;
- (void)getReceivedCommandWithCommand:(long long *)arg1 andCode:(long long *)arg2 andUserInfo:(id)arg3;
- (void)getReceivedCommandWithCommand:(long long *)arg1 andCode:(long long *)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (id)filterString:(id)arg1;
- (_Bool)umSocial_handleUniversalLink:(id)arg1 options:(id)arg2;
- (_Bool)handleUniversalLink:(id)arg1 options:(id)arg2;
- (_Bool)umSocial_handleOpenURL:(id)arg1;
- (_Bool)checkWechatScheme:(id)arg1;
- (id)checkInstall;
- (_Bool)sendRequest:(id)arg1;
- (void)briefWebView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)briefWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)handleWebviewUrl:(id)arg1;
- (void)backFromBriefWebController;
- (_Bool)sendAuthRequest;
- (_Bool)sendShareRequest:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)checkUrlSchema;
- (void)umSocial_clearCacheData;
- (id)umSocial_PlatformSDKVersion;
- (_Bool)umSocial_isSupport;
- (_Bool)umSocial_isInstall;
- (void)umSocial_setLauchFromPlatform:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)umSocial_setAppKey:(id)arg1 withAppSecret:(id)arg2 withRedirectURL:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long socialPlatformType;
@property(readonly) Class superclass;

@end

