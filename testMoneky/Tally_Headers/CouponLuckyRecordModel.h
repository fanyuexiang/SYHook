//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CouponLuckyRecordModel : NSObject
{
    long long _type;
    NSNumber *_acticityID;
    NSNumber *_periodID;
    NSString *_periodDate;
    NSString *_releaseTime;
    long long _status;
    NSString *_image;
    NSString *_name;
    NSString *_des;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *releaseTime; // @synthesize releaseTime=_releaseTime;
@property(copy, nonatomic) NSString *periodDate; // @synthesize periodDate=_periodDate;
@property(nonatomic) NSNumber *periodID; // @synthesize periodID=_periodID;
@property(nonatomic) NSNumber *acticityID; // @synthesize acticityID=_acticityID;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithDict:(id)arg1;

@end

