//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CSJUser : NSObject
{
    NSString *_phone;
    NSString *_data;
    long long _ageGroup;
    NSNumber *_coppa;
    NSNumber *_CCPA;
    NSNumber *_is_gdpr_user;
    NSNumber *_GDPR;
    long long _personalized_ad;
}

- (void).cxx_destruct;
@property(nonatomic) long long personalized_ad; // @synthesize personalized_ad=_personalized_ad;
@property(retain, nonatomic) NSNumber *GDPR; // @synthesize GDPR=_GDPR;
@property(retain, nonatomic) NSNumber *is_gdpr_user; // @synthesize is_gdpr_user=_is_gdpr_user;
@property(retain, nonatomic) NSNumber *CCPA; // @synthesize CCPA=_CCPA;
@property(retain, nonatomic) NSNumber *coppa; // @synthesize coppa=_coppa;
@property(nonatomic) long long ageGroup; // @synthesize ageGroup=_ageGroup;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (id)dictionaryValue;

@end

