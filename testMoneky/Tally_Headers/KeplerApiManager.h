//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDDMOAuth, KPWebViewController, NSDictionary, NSString, NSURLSessionDataTask;

@interface KeplerApiManager : NSObject
{
    JDDMOAuth *_oAuth;
    _Bool _isValidApp;
    _Bool _isOpenByH5;
    NSString *_secondAppKey;
    CDUnknownBlockType _startOpenJDAppBlock;
    CDUnknownBlockType _finishOpenJDAppBlock;
    NSString *_JDappBackTagID;
    NSString *_actId;
    NSString *_ext;
    double _openJDTimeout;
    NSDictionary *_categoryDic;
    NSURLSessionDataTask *_openJDAppTask;
    NSURLSessionDataTask *_queryJXTask;
    NSURLSessionDataTask *_JDLoginCheckStatusTask;
    NSURLSessionDataTask *_fastPurchaseTask;
    KPWebViewController *_webViewController;
}

+ (void)setDebugLogOpen:(_Bool)arg1;
+ (id)sharedKPService;
- (void).cxx_destruct;
@property(nonatomic) __weak KPWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) __weak NSURLSessionDataTask *fastPurchaseTask; // @synthesize fastPurchaseTask=_fastPurchaseTask;
@property(nonatomic) __weak NSURLSessionDataTask *JDLoginCheckStatusTask; // @synthesize JDLoginCheckStatusTask=_JDLoginCheckStatusTask;
@property(nonatomic) __weak NSURLSessionDataTask *queryJXTask; // @synthesize queryJXTask=_queryJXTask;
@property(nonatomic) __weak NSURLSessionDataTask *openJDAppTask; // @synthesize openJDAppTask=_openJDAppTask;
@property(retain, nonatomic) NSDictionary *categoryDic; // @synthesize categoryDic=_categoryDic;
@property(nonatomic) double openJDTimeout; // @synthesize openJDTimeout=_openJDTimeout;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *actId; // @synthesize actId=_actId;
@property(copy, nonatomic) NSString *JDappBackTagID; // @synthesize JDappBackTagID=_JDappBackTagID;
@property(copy, nonatomic) CDUnknownBlockType finishOpenJDAppBlock; // @synthesize finishOpenJDAppBlock=_finishOpenJDAppBlock;
@property(copy, nonatomic) CDUnknownBlockType startOpenJDAppBlock; // @synthesize startOpenJDAppBlock=_startOpenJDAppBlock;
@property(nonatomic) _Bool isOpenByH5; // @synthesize isOpenByH5=_isOpenByH5;
@property(copy, nonatomic) NSString *secondAppKey; // @synthesize secondAppKey=_secondAppKey;
- (id)getKeplerJDAInfo;
- (_Bool)canOpenJDAppWithUrl:(id)arg1;
- (void)cancelOpenJD;
- (void)queryProductTypeWithSkuids:(id)arg1 url:(id)arg2 withParentController:(id)arg3 withJumpType:(long long)arg4 customParams:(id)arg5;
- (void)requestFastPurchaseWith:(id)arg1 subUnionId:(id)arg2 webID:(id)arg3 skuID:(id)arg4 refer:(id)arg5 pt_key:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)keplerFastPurchaseWith:(id)arg1 appID:(id)arg2 skuID:(id)arg3 refer:(id)arg4 subUnionId:(id)arg5 controller:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)requestFastPurchaseWith:(id)arg1 subUnionId:(id)arg2 webID:(id)arg3 skuID:(id)arg4 countSKUs:(id)arg5 refer:(id)arg6 pt_key:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)keplerFastPurchaseWith:(id)arg1 appID:(id)arg2 skuIDs:(id)arg3 skuCounts:(id)arg4 refer:(id)arg5 subUnionId:(id)arg6 controller:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)openJXAppWithUrl:(id)arg1 sku:(id)arg2 parentController:(id)arg3 jumpType:(long long)arg4 customInfo:(id)arg5;
- (void)openJDAppWithUrl:(id)arg1 parentController:(id)arg2 jumpType:(long long)arg3 customInfo:(id)arg4;
- (id)openShoppingCartWithUserInfo:(id)arg1 hiddenNavigationBar:(_Bool)arg2;
- (id)openShoppingCartWithCustomParams:(id)arg1 hiddenNavigationBar:(_Bool)arg2;
- (id)openSearchResult:(id)arg1 userInfo:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (id)openSearchResult:(id)arg1 customParams:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (id)openCategoryListWithName:(id)arg1 userInfo:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (id)openCategoryListWithName:(id)arg1 customParams:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (id)openOrderListWithUserInfo:(id)arg1 hiddenNavigationBar:(_Bool)arg2;
- (id)openOrderListWithCustomParams:(id)arg1 hiddenNavigationBar:(_Bool)arg2;
- (id)openItemDetailWithSKU:(id)arg1 userInfo:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (id)openItemDetailWithSKU:(id)arg1 customParams:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (id)openNavigationPageWithUserInfo:(id)arg1 hiddenNavigationBar:(_Bool)arg2;
- (id)openNavigationPageWithCustomParams:(id)arg1 hiddenNavigationBar:(_Bool)arg2;
- (id)openKeplerPageWithURL:(id)arg1 userInfo:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (id)openKeplerPageWithURL:(id)arg1 customParams:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (void)openH5WithUrl:(id)arg1 parentController:(id)arg2 jumpType:(long long)arg3 customInfo:(id)arg4;
- (void)openWebVieWithUrl:(id)arg1 withParentController:(id)arg2 withJumpType:(long long)arg3 customParams:(id)arg4;
- (void)addToCartWithSkuList:(id)arg1 numList:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)addToCartWithSkuList:(id)arg1 numList:(id)arg2 sourceController:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)addToCart:(id)arg1 numList:(id)arg2 sourceController:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)addToCartWithSku:(id)arg1 num:(id)arg2 sourceController:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)openShoppingCart:(id)arg1 jumpType:(long long)arg2 userInfo:(id)arg3;
- (void)openShoppingCart:(id)arg1 jumpType:(long long)arg2 customParams:(id)arg3;
- (void)openSearchResult:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 userInfo:(id)arg4;
- (void)openSearchResult:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 customParams:(id)arg4;
- (void)openCategoryListWithName:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 userInfo:(id)arg4;
- (void)openCategoryListWithName:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 customParams:(id)arg4;
- (void)openOrderList:(id)arg1 jumpType:(long long)arg2 userInfo:(id)arg3;
- (void)openOrderList:(id)arg1 jumpType:(long long)arg2 customParams:(id)arg3;
- (void)openJXItemDetailWithSKU:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 userInfo:(id)arg4;
- (void)openItemDetailWithSKU:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 userInfo:(id)arg4;
- (void)openItemDetailWithSKU:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 customParams:(id)arg4;
- (void)openNavigationPage:(id)arg1 jumpType:(long long)arg2 userInfo:(id)arg3;
- (void)openNavigationPage:(id)arg1 jumpType:(long long)arg2 customParams:(id)arg3;
- (void)openKeplerPageWithURL:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 userInfo:(id)arg4;
- (void)openKeplerPageWithURL:(id)arg1 sourceController:(id)arg2 jumpType:(long long)arg3 customParams:(id)arg4;
- (_Bool)isKeplerLogin;
- (void)keplerLoginWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)openOrderListWithNavigationBarHidden:(_Bool)arg1;
- (void)keplerLoginWithViewController:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)getCurrentViewController;
- (id)hexStringFromString:(id)arg1;
- (_Bool)isValidAppWithAppkey:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (void)setKeplerNavBtnFont:(id)arg1;
- (void)setKeplerNavBtnTextColor:(id)arg1;
- (void)setKeplerNavTitleFont:(id)arg1;
- (void)setKeplerNavTitleTextColor:(id)arg1;
- (void)setKeplerNavHeight:(double)arg1;
- (void)setKeplerNavBackgroundColor:(id)arg1;
- (void)setKeplerProgressBarColor:(id)arg1;
- (void)cancelAuth;
- (void)cancelAuthWithBlock:(CDUnknownBlockType)arg1;
- (void)firsLoadClearToken;
- (void)checkUpdate;
- (void)checkJDKeplerConfig;
- (void)getTokenWithCode:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)jdInnerLoginResult:(long long)arg1 code:(id)arg2;
- (id)openWebViewPageNoGate:(id)arg1 customParams:(id)arg2 hiddenNavigationBar:(_Bool)arg3;
- (void)asyncInitSdk:(id)arg1 secretKey:(id)arg2 jdInnerLogin:(CDUnknownBlockType)arg3 sucessCallback:(CDUnknownBlockType)arg4 failedCallback:(CDUnknownBlockType)arg5;
- (void)asyncInitSdk:(id)arg1 secretKey:(id)arg2 sucessCallback:(CDUnknownBlockType)arg3 failedCallback:(CDUnknownBlockType)arg4;
- (void)initKPBugly:(id)arg1;
- (id)init;

@end

