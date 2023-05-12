//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BeforeFilter-Protocol.h"

@class MtopService, NSString;

@interface MCOAuthBeforeFilter : NSObject <BeforeFilter>
{
    MtopService *_service;
    long long _defaultAuthExpiredOption;
}

@property(nonatomic) long long defaultAuthExpiredOption; // @synthesize defaultAuthExpiredOption=_defaultAuthExpiredOption;
@property(retain, nonatomic) MtopService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)handle:(id)arg1 result:(id)arg2;
- (id)getName;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

