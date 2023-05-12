//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABUAdPackage, ABUMediaSlotConfig, NSDictionary, NSString;

@interface ABUMediaClientBidInfo : NSObject
{
    _Bool _needNotify;
    _Bool _didNotify;
    _Bool _invalid;
    ABUAdPackage *_package;
    NSString *_eCPMLevel;
    NSDictionary *_invalidInfo;
    long long _originECPM;
}

- (void).cxx_destruct;
@property(nonatomic) long long originECPM; // @synthesize originECPM=_originECPM;
@property(readonly, copy, nonatomic) NSDictionary *invalidInfo; // @synthesize invalidInfo=_invalidInfo;
@property(readonly, nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) _Bool didNotify; // @synthesize didNotify=_didNotify;
@property(nonatomic) _Bool needNotify; // @synthesize needNotify=_needNotify;
@property(copy, nonatomic) NSString *eCPMLevel; // @synthesize eCPMLevel=_eCPMLevel;
@property(retain, nonatomic) ABUAdPackage *package; // @synthesize package=_package;
- (void)notifyAllLowThanFloorPrice;
- (void)notifyAllTimeout;
- (void)notifyWithResult:(unsigned long long)arg1 andeCPM:(double)arg2;
@property(readonly, copy, nonatomic) NSString *adnName;
@property(readonly, copy, nonatomic) NSString *adnSlotID;
@property(readonly, copy, nonatomic) NSString *mediaReqID;
@property(readonly, nonatomic) ABUMediaSlotConfig *config;
@property(readonly, nonatomic) double eCPM;
- (void)_parseWithMultiType;
- (void)_parseWithClientType;
- (id)initWithPackage:(id)arg1;
- (id)init;

@end
