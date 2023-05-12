//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcNetPacket.h"

@class NSDictionary, NSString;

@interface AlibcNetCommonPacket : AlibcNetPacket
{
    _Bool _needLogin;
    _Bool _needAuth;
    _Bool _needWUA;
    _Bool _needPost;
    NSString *_cmdName;
    NSString *_version;
    NSDictionary *_dict;
    NSString *_uniqueKey;
    long long _sessionExpireType;
    NSString *_bizId;
    NSDictionary *_extParams;
    NSDictionary *_extHeaders;
    NSString *_ttid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ttid; // @synthesize ttid=_ttid;
@property(retain, nonatomic) NSDictionary *extHeaders; // @synthesize extHeaders=_extHeaders;
@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) long long sessionExpireType; // @synthesize sessionExpireType=_sessionExpireType;
@property(nonatomic) _Bool needPost; // @synthesize needPost=_needPost;
@property(nonatomic) _Bool needWUA; // @synthesize needWUA=_needWUA;
@property(nonatomic) _Bool needAuth; // @synthesize needAuth=_needAuth;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *cmdName; // @synthesize cmdName=_cmdName;
- (_Bool)filterNewPacket:(id)arg1;
- (id)generateMtopExtParams;
- (id)generateMtopBody;
- (id)generateMtopHeader;

@end
