//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABUMediationSlotConfig, NSArray;

@interface ABUMediaSlotConfigGroup : NSObject
{
    NSArray *_normalConfigs;
    NSArray *_serverBiddingConfigs;
    NSArray *_clientBiddingConfigs;
    NSArray *_privilegeConfigs;
    long long _normalConfigsCount;
    long long _privilegeConfigsCount;
    ABUMediationSlotConfig *_slotConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABUMediationSlotConfig *slotConfig; // @synthesize slotConfig=_slotConfig;
@property(nonatomic) long long privilegeConfigsCount; // @synthesize privilegeConfigsCount=_privilegeConfigsCount;
@property(nonatomic) long long normalConfigsCount; // @synthesize normalConfigsCount=_normalConfigsCount;
@property(copy, nonatomic) NSArray *privilegeConfigs; // @synthesize privilegeConfigs=_privilegeConfigs;
@property(copy, nonatomic) NSArray *clientBiddingConfigs; // @synthesize clientBiddingConfigs=_clientBiddingConfigs;
@property(copy, nonatomic) NSArray *serverBiddingConfigs; // @synthesize serverBiddingConfigs=_serverBiddingConfigs;
@property(copy, nonatomic) NSArray *normalConfigs; // @synthesize normalConfigs=_normalConfigs;
@property(readonly, nonatomic) long long needLoadCountInPN;
- (void)_parseConfigsInParallelType3WithConfigs:(id)arg1;
- (void)_parseConfigsInParallelType0WithConfigs:(id)arg1;
- (void)_parseMediationSlotConfig:(id)arg1 Configs:(id)arg2;
- (id)initWithMediationSlotConfig:(id)arg1 configs:(id)arg2;

@end
