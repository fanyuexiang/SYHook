//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotification;

@interface CSJAdAppActionObserver : NSObject
{
    NSNotification *_Cid_ToNow;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNotification *Cid_ToNow; // @synthesize Cid_ToNow=_Cid_ToNow;
- (void)IOS_WeakIdfa:(id)arg1 type:(id)arg2 tag:(id)arg3 label:(id)arg4 adExtraData:(id)arg5;
- (void)appStoreBackWithOpenURL:(id)arg1;
- (void)appStoreWithOpenURL:(id)arg1;
- (void)appStoreControllerDidDisappear:(id)arg1;
- (void)appStoreWithSKStore:(id)arg1;
- (void)Adm_A0Only;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

