//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CSJSecCheck : NSObject
{
    _Bool _isFore;
    double _lastTime;
    double _foregroundTime;
    double _runningTime;
    NSString *_sof_chara;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (CDUnknownFunctionPointerType)p_getMethodImpl:(id)arg1 methodName:(id)arg2;
+ (id)p_getModuleByAddr:(void *)arg1;
+ (id)p_checkFuncHook:(id)arg1 className:(id)arg2 methodName:(id)arg3 ID:(id)arg4;
+ (id)dicToNSString:(id)arg1;
+ (id)checkEvilFiles:(id)arg1 suffix:(id)arg2;
+ (id)checkEnv:(id)arg1;
+ (_Bool)hasEmbeddedMobileProvision;
+ (_Bool)isAppStoreReceiptSandbox;
+ (_Bool)isFromTestFlight;
+ (_Bool)isFromAppStore;
+ (_Bool)hasJailBroken;
+ (_Bool)isJailBroken;
+ (id)checkMethodHook:(id)arg1;
+ (id)getBundleId;
+ (void)fetchHardwareInfo:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *sof_chara; // @synthesize sof_chara=_sof_chara;
@property(nonatomic) double runningTime; // @synthesize runningTime=_runningTime;
@property(nonatomic) double foregroundTime; // @synthesize foregroundTime=_foregroundTime;
@property(nonatomic) _Bool isFore; // @synthesize isFore=_isFore;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
- (id)getDylibs;
- (id)getUserApps;
- (id)getDyld;
- (void)fetchAndUpdateAppStats:(id)arg1;
- (void)setBackTime:(double)arg1;
- (void)setForeTime:(double)arg1;
- (id)getSofChara:(_Bool)arg1 chFunc:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

