//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSDictionary, NSString;

@interface QQApiCommonServiceObject : QQApiObject
{
    NSString *_openID;
    NSString *_serviceID;
    NSDictionary *_extendInfo;
}

+ (id)objecWithOpenID:(id)arg1 serviceID:(id)arg2 extendInfo:(id)arg3;
@property(copy, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(copy, nonatomic) NSString *openID; // @synthesize openID=_openID;
- (id)initWithOpenID:(id)arg1 serviceID:(id)arg2 extendInfo:(id)arg3;

@end
