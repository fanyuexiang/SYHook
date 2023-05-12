//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AuthParamObj, NSArray, NSMutableArray, NSString, TBSDKRequest, UTDataSet;
@protocol MtopExtRequestDelegate;

@interface MtopExtRequest : NSObject
{
    _Bool isFromOfflineOperation;
    _Bool isForceHttps;
    _Bool isForceSpdy;
    _Bool _isSync;
    _Bool _isNeedEcode;
    _Bool _isNeedAuth;
    _Bool _isEnableWUA;
    _Bool _isCanceled;
    _Bool _isNeedValidateResponse;
    BOOL _retryCount;
    _Bool _isNotUseMainThreadCallback;
    _Bool _priorityFlag;
    float _xCoordinate;
    float _yCoordinate;
    int _serverType;
    long long sessionExpiredOption;
    unsigned long long cachePolicy;
    NSMutableArray *excludedCacheKeyParameters;
    TBSDKRequest *mrequest;
    id <MtopExtRequestDelegate> delegate;
    NSString *ttid;
    NSString *_customHost;
    long long _authExpiredOption;
    unsigned long long _wuaType;
    NSString *_userID;
    NSString *_clientTraceId;
    NSString *_fullTraceID;
    NSString *_bizID;
    NSString *_pageName;
    NSString *_pageUrl;
    unsigned long long _UnitStrategy;
    AuthParamObj *_authObj;
    NSString *_miniAppkey;
    NSString *_requestAppkey;
    NSString *_openBizCode;
    NSString *_openBizData;
    CDUnknownBlockType _startedBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _succeedBlock;
    UTDataSet *_mtopUT;
    NSString *_h5URL;
    NSString *_wuaPageName;
    NSString *_wuaCtrlName;
    NSArray *_customHostList;
    id _context;
    NSString *_request_id;
}

@property(nonatomic) _Bool priorityFlag; // @synthesize priorityFlag=_priorityFlag;
@property(copy, nonatomic) NSString *request_id; // @synthesize request_id=_request_id;
@property(nonatomic) int serverType; // @synthesize serverType=_serverType;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *customHostList; // @synthesize customHostList=_customHostList;
@property(nonatomic) float yCoordinate; // @synthesize yCoordinate=_yCoordinate;
@property(nonatomic) float xCoordinate; // @synthesize xCoordinate=_xCoordinate;
@property(retain, nonatomic) NSString *wuaCtrlName; // @synthesize wuaCtrlName=_wuaCtrlName;
@property(retain, nonatomic) NSString *wuaPageName; // @synthesize wuaPageName=_wuaPageName;
@property(retain, nonatomic) NSString *h5URL; // @synthesize h5URL=_h5URL;
@property(retain, nonatomic) UTDataSet *mtopUT; // @synthesize mtopUT=_mtopUT;
@property(copy) CDUnknownBlockType succeedBlock; // @synthesize succeedBlock=_succeedBlock;
@property(copy) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy) CDUnknownBlockType startedBlock; // @synthesize startedBlock=_startedBlock;
@property(retain, nonatomic) NSString *openBizData; // @synthesize openBizData=_openBizData;
@property(retain, nonatomic) NSString *openBizCode; // @synthesize openBizCode=_openBizCode;
@property(retain, nonatomic) NSString *requestAppkey; // @synthesize requestAppkey=_requestAppkey;
@property(retain, nonatomic) NSString *miniAppkey; // @synthesize miniAppkey=_miniAppkey;
@property(readonly, nonatomic) AuthParamObj *authObj; // @synthesize authObj=_authObj;
@property(nonatomic) _Bool isNotUseMainThreadCallback; // @synthesize isNotUseMainThreadCallback=_isNotUseMainThreadCallback;
@property(nonatomic) unsigned long long UnitStrategy; // @synthesize UnitStrategy=_UnitStrategy;
@property(copy, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(readonly, nonatomic) NSString *bizID; // @synthesize bizID=_bizID;
@property(readonly, copy, nonatomic) NSString *fullTraceID; // @synthesize fullTraceID=_fullTraceID;
@property(readonly, nonatomic) NSString *clientTraceId; // @synthesize clientTraceId=_clientTraceId;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) BOOL retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool isNeedValidateResponse; // @synthesize isNeedValidateResponse=_isNeedValidateResponse;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) unsigned long long wuaType; // @synthesize wuaType=_wuaType;
@property(nonatomic) _Bool isEnableWUA; // @synthesize isEnableWUA=_isEnableWUA;
@property(nonatomic) long long authExpiredOption; // @synthesize authExpiredOption=_authExpiredOption;
@property(nonatomic) _Bool isNeedAuth; // @synthesize isNeedAuth=_isNeedAuth;
@property(nonatomic) _Bool isNeedEcode; // @synthesize isNeedEcode=_isNeedEcode;
@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(retain, nonatomic) NSString *customHost; // @synthesize customHost=_customHost;
@property(nonatomic) _Bool isForceSpdy; // @synthesize isForceSpdy;
@property(nonatomic) _Bool isForceHttps; // @synthesize isForceHttps;
@property(retain, nonatomic) NSString *ttid; // @synthesize ttid;
@property __weak id <MtopExtRequestDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) TBSDKRequest *mrequest; // @synthesize mrequest;
@property(nonatomic) _Bool isFromOfflineOperation; // @synthesize isFromOfflineOperation;
@property(retain, nonatomic) NSMutableArray *excludedCacheKeyParameters; // @synthesize excludedCacheKeyParameters;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy;
@property(nonatomic) long long sessionExpiredOption; // @synthesize sessionExpiredOption;
- (void).cxx_destruct;
- (void)useCustomHostIfNeed;
- (id)nextId;
- (_Bool)isNeedCallback;
- (void)cancel;
- (void)utJsonParseEndTime;
- (void)utJsonParseStartTime;
- (void)utEnd;
- (void)utStart:(_Bool)arg1;
- (_Bool)isNeedRetry;
- (void)retryed;
- (_Bool)isUseHttps;
- (_Bool)isUseHttpPost;
- (id)getBizParameters;
- (id)getExtParameters;
- (void)setApiVersion:(id)arg1;
- (void)setApiName:(id)arg1;
- (id)getHttpHeaders;
- (id)getApiVersion;
- (id)getApiName;
- (id)getRequestId;
- (id)enableWUAWithPageName:(id)arg1 ctrlName:(id)arg2 xCoordinate:(float)arg3 yCoordinate:(float)arg4;
- (id)setNeedAuth:(id)arg1 andAuthParam:(id)arg2;
- (id)addExcludedCacheKeyParameter:(id)arg1;
- (id)addUploadFileWithData:(id)arg1 fileName:(id)arg2 forKey:(id)arg3;
- (id)addPriorityData:(id)arg1;
- (id)clearBizParameters;
- (id)removeBizParameter:(id)arg1;
- (id)addBizParameters:(id)arg1;
- (id)addPriorityData:(id)arg1 forKey:(id)arg2;
- (id)addBizParameter:(id)arg1 forKey:(id)arg2;
- (id)removeExtParameter:(id)arg1;
- (id)addExtParameters:(id)arg1;
- (id)addExtParameter:(id)arg1 forKey:(id)arg2;
- (id)addProtocolParameter:(id)arg1 forKey:(id)arg2;
- (id)addCustomHttpHeaders:(id)arg1;
- (id)addCustomHttpHeader:(id)arg1 forKey:(id)arg2;
- (id)addHttpHeaders:(id)arg1;
- (id)addHttpHeader:(id)arg1 forKey:(id)arg2;
- (id)unHostedByNetWork;
- (id)useHttpPost;
- (id)disableHttps;
- (id)useHttps;
- (id)setNetworkTimeout:(int)arg1;
- (void)setNeedWUA:(_Bool)arg1;
- (_Bool)needWUA;
- (void)setNeedAuth:(_Bool)arg1;
- (_Bool)needAuth;
- (void)setNeedLogin:(_Bool)arg1;
- (_Bool)needLogin;
- (void)dealloc;
- (void)setupBizId:(id)arg1;
- (id)initWithApiName:(id)arg1 apiVersion:(id)arg2 bizID:(id)arg3;
- (id)initWithApiName:(id)arg1 apiVersion:(id)arg2;

@end

