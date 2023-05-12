//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJBasicModel.h"

@interface CSJClickTriggerConfigModel : CSJBasicModel
{
    long long _clickTriggerType;
    double _shakeStartTime;
    double _shakeEndTime;
}

+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:(id)arg1;
@property(nonatomic) double shakeEndTime; // @synthesize shakeEndTime=_shakeEndTime;
@property(nonatomic) double shakeStartTime; // @synthesize shakeStartTime=_shakeStartTime;
@property(nonatomic) long long clickTriggerType; // @synthesize clickTriggerType=_clickTriggerType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDictionary;
- (id)init;

@end

