//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDKeplerAccountModel : NSObject
{
    long long _isLogin;
    NSString *_accessToken;
    NSString *_code;
    NSString *_expiresIn;
    NSString *_refreshToken;
    NSString *_refreshTime;
    NSString *_tokenType;
    NSString *_uid;
    NSString *_userNick;
    NSString *_netWork;
    NSString *_currentDeviceId;
    NSString *_systemVersion;
    NSString *_deviceModel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *currentDeviceId; // @synthesize currentDeviceId=_currentDeviceId;
@property(copy, nonatomic) NSString *netWork; // @synthesize netWork=_netWork;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(copy, nonatomic) NSString *refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *expiresIn; // @synthesize expiresIn=_expiresIn;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) long long isLogin; // @synthesize isLogin=_isLogin;
- (void)modelWithDictionary:(id)arg1;

@end

