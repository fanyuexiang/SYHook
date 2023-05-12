//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSString, NSTimer, NSURLSessionTask;

@interface StockDBManager : NSObject
{
    _Bool _isNetworkData;
    NSString *_currentRequestURL;
    NSTimer *_timer;
    _Bool _isHomeRequest;
    NSURLSessionTask *_currendTask;
    _Bool _timerIsStarting;
    NSString *_marketURL;
    _Bool _needSign;
    NSString *_codeString;
    FMDatabaseQueue *_dbQueue;
    NSString *_homeRequestCode;
    CDUnknownBlockType _searchResponseHandler;
}

+ (id)sharedManager;
+ (void)downloaddataWithURL:(id)arg1 version:(id)arg2;
+ (void)requestAllData:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needSign; // @synthesize needSign=_needSign;
@property(copy, nonatomic) NSString *marketURL; // @synthesize marketURL=_marketURL;
@property(copy, nonatomic) CDUnknownBlockType searchResponseHandler; // @synthesize searchResponseHandler=_searchResponseHandler;
@property(nonatomic) _Bool isHomeRequest; // @synthesize isHomeRequest=_isHomeRequest;
@property(copy, nonatomic) NSString *homeRequestCode; // @synthesize homeRequestCode=_homeRequestCode;
- (void)dealloc;
- (id)queryStockWithKeyboard:(id)arg1;
- (_Bool)saveListData:(id)arg1;
- (void)setupDB;
- (id)init;
- (void)applicationWillEnterForegroundNotification;
- (void)applicationDidEnterBackgroundNotification;
- (void)suspendTimer;
- (void)startTimer;
- (void)requestStockData;
- (void)stopRequestSpecialStock;
- (void)startRequestSpecialStock:(id)arg1;
- (void)stopRequestHomeData;
- (void)startRequestHomeData;

@end

