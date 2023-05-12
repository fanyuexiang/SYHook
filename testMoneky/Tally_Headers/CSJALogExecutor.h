//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUCloudCommandProtocol-Protocol.h"

@class NSString;

@interface CSJALogExecutor : NSObject <BUCloudCommandProtocol>
{
}

+ (void)writeLog:(id)arg1 tag:(id)arg2 level:(long long)arg3;
+ (id)getDid;
+ (id)getALogDir:(id)arg1;
+ (_Bool)isDemoEnv;
+ (_Bool)isAlogAndCloudCommandEnable;
+ (void)enableAlogAndCloudCommand;
+ (void)configCloudCommand;
+ (void)configALog;
+ (id)createInstance;
+ (void)initialize;
- (void)uploadLogFiles:(id)arg1 commandModel:(id)arg2 originFilesCount:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)excuteCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
