//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UTDOnlineConfDelegate-Protocol.h"

@class NSString;

@interface UTDOnlineConfBusiness : NSObject <UTDOnlineConfDelegate>
{
    id mConfManager;
}

- (void).cxx_destruct;
- (void)onFail:(id)arg1;
- (void)onNoConfArrived:(id)arg1;
- (void)onArrived:(id)arg1 confContent:(id)arg2;
- (void)onPreLoad:(id)arg1 confContent:(id)arg2;
- (id)requiredConfName;
- (id)requiredConfNameList;
- (void)setMConfManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
