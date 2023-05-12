//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UMLogDataProtocol-Protocol.h"

@class NSString, UMCommonBodyModel;

@interface UMCommonStatisticsManager : NSObject <UMLogDataProtocol>
{
    _Bool _isUMEnvelopeBuild;
    UMCommonBodyModel *_bodyModel;
}

+ (id)shareManager;
- (void).cxx_destruct;
@property _Bool isUMEnvelopeBuild; // @synthesize isUMEnvelopeBuild=_isUMEnvelopeBuild;
@property(retain, nonatomic) UMCommonBodyModel *bodyModel; // @synthesize bodyModel=_bodyModel;
- (void)sendVerifyEvent:(id)arg1;
- (void)doSendVerifyEvent;
- (id)setupReportData:(long long)arg1;
- (void)workEvent:(id)arg1;
- (void)doCleanDataBaseModelMapInMemoryModel;
- (void)doCleanMemoryModel;
- (void)sendEvent:(id)arg1 withType:(long long)arg2 component:(id)arg3;
- (void)setCacheDataReady:(_Bool)arg1;
- (_Bool)cacheDataReady;
- (void)removeCacheData:(id)arg1;
- (id)fetchReportData:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

