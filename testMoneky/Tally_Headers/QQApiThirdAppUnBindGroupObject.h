//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiThirdAppUnBindGroupObject : QQApiObject
{
    NSString *_accessToken;
    NSString *_openId;
    NSString *_payToken;
    NSString *_pfkey;
    NSString *_unionID;
}

+ (id)objectWithAccessToken:(id)arg1 payToken:(id)arg2 pfkey:(id)arg3 unionID:(id)arg4 openId:(id)arg5 appId:(id)arg6;
@property(copy, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(copy, nonatomic) NSString *pfkey; // @synthesize pfkey=_pfkey;
@property(copy, nonatomic) NSString *payToken; // @synthesize payToken=_payToken;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (id)initWithAccessToken:(id)arg1 payToken:(id)arg2 pfkey:(id)arg3 unionID:(id)arg4 openId:(id)arg5 appId:(id)arg6;

@end

