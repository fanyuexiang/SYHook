//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;

@interface CSJMotionManager : NSObject
{
    NSMapTable *_managerContainer;
    NSHashTable *_hashTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
@property(retain, nonatomic) NSMapTable *managerContainer; // @synthesize managerContainer=_managerContainer;
- (id)getUnavailableModel;
- (id)getSuccessModel;
- (id)stopTwistObserverWithWebView:(id)arg1;
- (id)startTwistObserverWithThreshold:(long long)arg1 webView:(id)arg2;
- (void)wobbleObserverCallBack;
- (id)shakeScenceWithWebView:(id)arg1;
- (id)stopWobbleObserverWithWebView:(id)arg1;
- (id)startWobbleObserverWebView:(id)arg1 shakeAmplitude:(double)arg2 calculateSize:(long long)arg3;
- (void)handleGyroObserverWithWebView:(id)arg1 model:(CDStruct_31142d93)arg2;
- (id)stopGyroObserverObserverWithWebView:(id)arg1;
- (id)startGyroObserverInterval:(double)arg1 webView:(id)arg2;
- (void)handleAccelerometerObserverWithWebView:(id)arg1 model:(CDStruct_31142d93)arg2;
- (id)stopAccelerometerObserverWithWebView:(id)arg1;
- (id)startAccelerometerObserverInterval:(double)arg1 webView:(id)arg2;
- (id)init;

@end

