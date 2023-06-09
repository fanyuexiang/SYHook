//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUYYModel-Protocol.h"
#import "CSJModelSerialization-Protocol.h"

@class NSString;

@interface CSJWCMiniappInfo : NSObject <BUYYModel, CSJModelSerialization>
{
    NSString *_wcMiniappLink;
    unsigned long long _wcSkipType;
    NSString *_advID;
    NSString *_siteID;
    NSString *_wcAppID;
    NSString *_wcUniversialLink;
    NSString *_wcMiniappSDK;
    unsigned long long _wcOpenMethod;
}

+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long wcOpenMethod; // @synthesize wcOpenMethod=_wcOpenMethod;
@property(copy, nonatomic) NSString *wcMiniappSDK; // @synthesize wcMiniappSDK=_wcMiniappSDK;
@property(copy, nonatomic) NSString *wcUniversialLink; // @synthesize wcUniversialLink=_wcUniversialLink;
@property(copy, nonatomic) NSString *wcAppID; // @synthesize wcAppID=_wcAppID;
@property(copy, nonatomic) NSString *siteID; // @synthesize siteID=_siteID;
@property(copy, nonatomic) NSString *advID; // @synthesize advID=_advID;
@property(nonatomic) unsigned long long wcSkipType; // @synthesize wcSkipType=_wcSkipType;
@property(copy, nonatomic) NSString *wcMiniappLink; // @synthesize wcMiniappLink=_wcMiniappLink;
- (_Bool)validWCMiniappOpenSDKRegisterInfo;
- (_Bool)validWCMiniappOpenSDK;
- (_Bool)validWCMiniappLink;
- (_Bool)preferOpenSDKAction;
- (_Bool)preferSchemeLinkAction;
- (id)wcMiniappSourceURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDictionary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

