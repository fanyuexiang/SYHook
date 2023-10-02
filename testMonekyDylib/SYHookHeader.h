//
//  JLYHookHeader.h
//  testMonekyDylib
//
//  Created by fan on 2023/4/20.
//


#pragma mark - Network
typedef void (^progressBlock)(NSProgress *downloadProgress);
typedef void (^successBlock)(NSURLSessionDataTask *task, id _Nullable responseObject);
typedef void (^failureBlock)(NSURLSessionDataTask * _Nullable task, NSError *error);
typedef void (^responseBlock)(NSURLResponse *response, id _Nullable responseObject,  NSError * _Nullable error);
typedef void (^BUAdSDKManagerStartBlock)(BOOL success, NSError * _Nullable error);

@interface AFHTTPSessionManager : NSObject

- (NSURLSessionDataTask *)dataTaskWithHTTPMethod:(NSString *)method
                                       URLString:(NSString *)URLString
                                      parameters:(id)parameters
                                  uploadProgress:(nullable progressBlock) uploadProgress
                                downloadProgress:(nullable progressBlock) downloadProgress
                                         success:(successBlock)success
                                         failure:(failureBlock)failure;

@end

// 腾讯广点通sdk
@interface GDTSDKConfig : NSObject

+ (BOOL)registerAppId:(NSString *)appId;

@end

// GroMore 穿山甲SDK
@interface BUAdSDKManager : NSObject

+ (BOOL)setAppID:(NSString *)appId;
+ (void)startWithAsyncCompletionHandler:(BUAdSDKManagerStartBlock)hander;

@end

@interface ABUAdSDKManager : NSObject

+ (BOOL)setAppID:(NSString *)appId;

@end

// 用户管理

@interface UserInfoManager : NSObject

- (BOOL)isNoAd;

- (BOOL)isVip;

- (BOOL)isAdVip;

- (BOOL)isFreeVip;
      
@end

// 首页
@interface InviteFriendsPromotiosView : UIView

+ (void)showHome:(id)arg1;

@end

// 墨记会员
@interface DLGlobal : NSObject

- (BOOL)isVip;

@end
