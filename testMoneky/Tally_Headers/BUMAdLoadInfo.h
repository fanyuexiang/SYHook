//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

@class NSString;

@interface BUMAdLoadInfo : BUInterfaceBaseObject
{
    BUMAdLoadInfo *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUMAdLoadInfo *iteration; // @synthesize iteration=_iteration;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *adnName; // @dynamic adnName;
@property(readonly, copy, nonatomic) NSString *customAdnName; // @dynamic customAdnName;
@property(readonly, nonatomic) long long errCode; // @dynamic errCode;
@property(readonly, copy, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(readonly, copy, nonatomic) NSString *mediationRit; // @dynamic mediationRit;

@end

