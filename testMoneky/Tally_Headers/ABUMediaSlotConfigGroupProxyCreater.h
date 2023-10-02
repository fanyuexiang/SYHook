//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABUWeakProxy.h"

#import "ABUMediaSlotConfigGroupProxyProtocol-Protocol.h"

@class ABUMediaSlotConfigGroup, ABUMediationSlotConfig, ABUUValueRule, NSArray, NSDictionary, NSString;

@interface ABUMediaSlotConfigGroupProxyCreater : ABUWeakProxy <ABUMediaSlotConfigGroupProxyProtocol>
{
    ABUMediationSlotConfig *slotConfig;
    NSDictionary *_infoForUV;
    ABUUValueRule *_rule;
    long long _useTime;
    NSArray *_normalConfigs;
    long long _normalConfigsCount;
    ABUMediaSlotConfigGroup *_group;
    NSArray *_serverBiddingConfigs;
    NSArray *_clientBiddingConfigs;
    NSArray *_privilegeConfigs;
    long long _privilegeConfigsCount;
    long long _refreshTime;
}

+ (id)groupWithOriginGroup:(id)arg1 filterNormalConfigsForUValueType:(unsigned long long)arg2 filterExtra:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) long long privilegeConfigsCount; // @synthesize privilegeConfigsCount=_privilegeConfigsCount;
@property(copy, nonatomic) NSArray *privilegeConfigs; // @synthesize privilegeConfigs=_privilegeConfigs;
@property(copy, nonatomic) NSArray *clientBiddingConfigs; // @synthesize clientBiddingConfigs=_clientBiddingConfigs;
@property(copy, nonatomic) NSArray *serverBiddingConfigs; // @synthesize serverBiddingConfigs=_serverBiddingConfigs;
@property(retain, nonatomic) ABUMediaSlotConfigGroup *group; // @synthesize group=_group;
@property(nonatomic) long long normalConfigsCount; // @synthesize normalConfigsCount=_normalConfigsCount;
@property(copy, nonatomic) NSArray *normalConfigs; // @synthesize normalConfigs=_normalConfigs;
@property(nonatomic) long long useTime; // @synthesize useTime=_useTime;
@property(retain, nonatomic) ABUUValueRule *rule; // @synthesize rule=_rule;
@property(copy, nonatomic) NSDictionary *infoForUV; // @synthesize infoForUV=_infoForUV;
@property(retain, nonatomic) ABUMediationSlotConfig *slotConfig; // @synthesize slotConfig;
- (void)updateCanvasRefreshTime:(long long)arg1;
- (long long)needLoadCountInPN;
- (id)uvalueGroup;
- (id)buildFilterExtraWithParam:(id)arg1 andRuleType:(unsigned long long *)arg2;
- (void)_filterNormalConfigsForAutoExpPVWithExtra:(id)arg1;
- (void)filterNormalConfigsForAutoExpPVWithExtra:(id)arg1;
- (void)filterNormalConfigsForUValueType:(unsigned long long)arg1 extra:(id)arg2;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
