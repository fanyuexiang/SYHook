//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABUDeviceNetwork : NSObject
{
    NSString *_imsi;
    NSString *_carrierName;
    NSString *_MCC;
    NSString *_MNC;
    NSString *_ip;
    NSString *_ua;
    long long _networkTypeCode;
    NSString *_networkType;
    CDUnknownBlockType _listener;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType listener; // @synthesize listener=_listener;
@property(copy) NSString *networkType; // @synthesize networkType=_networkType;
@property long long networkTypeCode; // @synthesize networkTypeCode=_networkTypeCode;
@property(copy) NSString *ua; // @synthesize ua=_ua;
@property(copy) NSString *ip; // @synthesize ip=_ip;
@property(copy) NSString *MNC; // @synthesize MNC=_MNC;
@property(copy) NSString *MCC; // @synthesize MCC=_MCC;
@property(copy) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(copy) NSString *imsi; // @synthesize imsi=_imsi;
- (id)reachabilityStringWithType:(long long)arg1;
- (long long)getNetWorkType;
- (_Bool)_isValidatIP:(id)arg1;
- (id)_IPAddresses;
- (id)_IPAddress:(_Bool)arg1;
- (id)_getCarrierName;
- (void)_intervalUpdate:(_Bool)arg1;
- (id)initWithUpdateListener:(CDUnknownBlockType)arg1;

@end
