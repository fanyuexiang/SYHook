//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMSocialSinaHandler.h"

#import "UMSocialPlatformProvider-Protocol.h"
#import "WBHttpRequestDelegate-Protocol.h"
#import "WBMediaTransferProtocol-Protocol.h"
#import "WeiboSDKDelegate-Protocol.h"

@class NSString;

@interface UMSocialOfficialSinaHandler : UMSocialSinaHandler <WeiboSDKDelegate, UMSocialPlatformProvider, WBHttpRequestDelegate, WBMediaTransferProtocol>
{
    _Bool _handlingMediaData;
    _Bool _isApiHEFor3_3_0;
    CDUnknownBlockType _wbRequestCompletion;
    CDUnknownBlockType _weiboAlbumHandler;
}

+ (id)defaultManager;
+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) _Bool isApiHEFor3_3_0; // @synthesize isApiHEFor3_3_0=_isApiHEFor3_3_0;
@property(nonatomic) _Bool handlingMediaData; // @synthesize handlingMediaData=_handlingMediaData;
@property(copy, nonatomic) CDUnknownBlockType weiboAlbumHandler; // @synthesize weiboAlbumHandler=_weiboAlbumHandler;
@property(copy, nonatomic) CDUnknownBlockType wbRequestCompletion; // @synthesize wbRequestCompletion=_wbRequestCompletion;
- (void)didReceiveWeiboResponse:(id)arg1;
- (unsigned long long)sendWeiboRequestWithMessage:(id)arg1 userInfo:(id)arg2;
- (void)sendShareRequest:(id)arg1 withType:(unsigned long long)arg2 andUserInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)wbsdk_TransferDidFailWithErrorCode:(long long)arg1 andError:(id)arg2;
- (void)wbsdk_TransferDidReceiveObject:(id)arg1;
- (void)request:(id)arg1 didReciveRedirectResponseWithURI:(id)arg2;
- (void)request:(id)arg1 didFinishLoadingWithDataResult:(id)arg2;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)sendWbRequestWithURL:(id)arg1 HttpMethod:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendCancelAuth:(id)arg1;
- (void)sendUserInfoRequest:(id)arg1 accesstoken:(id)arg2 CompletionHandler:(CDUnknownBlockType)arg3;
- (void)sendAuthRequest:(id)arg1 userInfo:(id)arg2 URI:(id)arg3;
- (_Bool)umSocial_handleUniversalLink:(id)arg1 options:(id)arg2;
- (_Bool)handleUniversalLink:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (id)umSocial_PlatformSDKVersion;
- (_Bool)umSocial_isSupport;
- (_Bool)umSocial_isInstall;
- (void)umSocial_setAppKey:(id)arg1 withAppSecret:(id)arg2 withRedirectURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long socialPlatformType;
@property(readonly) Class superclass;

@end

