//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QQApiInterface : NSObject
{
}

+ (void)setSwitchPrintLogToFile:(_Bool)arg1;
+ (id)getLogFilePath;
+ (void)stopLog;
+ (void)startLogWithBlock:(CDUnknownBlockType)arg1;
+ (void)reportSDKCheck:(long long)arg1 cmd:(id)arg2 isQzone:(_Bool)arg3;
+ (id)getTIMInstallUrl;
+ (id)getQQInstallUrl;
+ (_Bool)openTIM;
+ (_Bool)openQQ;
+ (_Bool)isSupportPushToQZone;
+ (_Bool)isSupportShareToQQ;
+ (_Bool)isTIMSupportApi;
+ (_Bool)isQQSupportApi;
+ (_Bool)isTIMInstalled;
+ (_Bool)isQQInstalled;
+ (long long)sendMessageToFaceCollectionWithReq:(id)arg1;
+ (void)sendQueryQQGroupProInfo:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)sendMessageToQQGroupProWithMessageRequest:(id)arg1 sendResultBlock:(CDUnknownBlockType)arg2;
+ (void)sendMessageToJoinQQGroupProWithMessageRequest:(id)arg1 sendResultBlock:(CDUnknownBlockType)arg2;
+ (void)sendMessageToCreateQQGroupProWithMessageRequest:(id)arg1 sendResultBlock:(CDUnknownBlockType)arg2;
+ (long long)sendMessageToQQAuthWithReq:(id)arg1;
+ (long long)sendMessageToQQAvatarWithReq:(id)arg1;
+ (long long)SendReqToQZone:(id)arg1;
+ (id)jasonValueWithStringData:(id)arg1;
+ (id)serializeURL:(id)arg1 params:(id)arg2;
+ (void)sendThirdAppJoinGroupReq:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)sendThirdAppUnBindGroupReq:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)sendThirdAppBindGroupReq:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (long long)sendReq:(id)arg1;
+ (long long)sendMessageToQQQZoneWithReq:(id)arg1;
+ (long long)sendMessageToQQWithReq:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenUniversallink:(id)arg1 delegate:(id)arg2;
+ (_Bool)responseToSendMessageToQQ:(id)arg1 delegate:(id)arg2;
+ (long long)responseToShowMessageFromQQ:(id)arg1;
+ (long long)responseToGetMessageFromQQ:(id)arg1;
+ (long long)SendMessageToQQRequest:(id)arg1;
+ (void)getMessageRequestFromQQ:(id)arg1;
+ (void)showMessageRequestFromQQ:(id)arg1 delegate:(id)arg2;

@end

