//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UMHelper : NSObject
{
    _Bool _logEnabled;
    NSMutableDictionary *moduleTag;
    NSMutableDictionary *moduleVer;
    NSMutableDictionary *autoTestDic;
    struct dispatch_semaphore_s *_umsema;
    struct dispatch_semaphore_s *_umsemasl;
    NSString *_umfvStr;
    NSString *_machine;
    NSString *_isSilent;
}

+ (int)getAppState;
+ (_Bool)isCheckVersion:(id)arg1;
+ (id)preVersions:(id)arg1;
+ (double)elapsedTimeFromLastPost:(id)arg1;
+ (double)elapsedTimeFromPost;
+ (_Bool)defconPass;
+ (_Bool)isOverSeas;
+ (_Bool)checkIsOverseas;
+ (id)preInitFilePath;
+ (id)dplusEventsPath;
+ (id)dplusPreFilePath;
+ (id)dplusSuperFilePath;
+ (id)trimUTF8String:(id)arg1 toByteLen:(long long)arg2;
+ (_Bool)checkU48Character:(id)arg1;
+ (unsigned long long)UTCTimeIntervalMS;
+ (id)arrayToAgStr:(id)arg1;
+ (id)appVersionString;
+ (id)sdkVersionString;
+ (_Bool)isDebugging;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) NSString *isSilent; // @synthesize isSilent=_isSilent;
@property(copy) NSString *machine; // @synthesize machine=_machine;
@property(copy) NSString *umfvStr; // @synthesize umfvStr=_umfvStr;
@property(nonatomic) struct dispatch_semaphore_s *umsemasl; // @synthesize umsemasl=_umsemasl;
@property(nonatomic) struct dispatch_semaphore_s *umsema; // @synthesize umsema=_umsema;
@property _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(retain) NSMutableDictionary *autoTestDic; // @synthesize autoTestDic;
@property(retain) NSMutableDictionary *moduleVer; // @synthesize moduleVer;
@property(retain) NSMutableDictionary *moduleTag; // @synthesize moduleTag;
- (id)init;

@end

