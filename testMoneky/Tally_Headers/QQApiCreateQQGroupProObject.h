//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiCreateQQGroupProObject : QQApiObject
{
    NSString *_from;
    NSString *_openid;
    NSString *_guild_id;
    NSString *_zone_id;
    NSString *_guild_name;
    NSString *_guild_avatar;
    NSString *_platid;
    NSString *_roleid;
    NSString *_areaid;
    NSString *_user_zone_id;
    NSString *_user_label;
    NSString *_nick_name;
    NSString *_type;
    NSString *_specify_uin;
    NSString *_force_account_equal;
    NSString *_from_open_sdk;
    NSString *_signKey;
    NSString *_openKey;
    NSString *_ts;
    NSString *_nonce;
    NSString *_app_name;
    NSString *_package_id;
    NSString *_appid;
}

@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *package_id; // @synthesize package_id=_package_id;
@property(retain, nonatomic) NSString *app_name; // @synthesize app_name=_app_name;
@property(nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *ts; // @synthesize ts=_ts;
@property(copy, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(copy, nonatomic) NSString *signKey; // @synthesize signKey=_signKey;
@property(copy, nonatomic) NSString *from_open_sdk; // @synthesize from_open_sdk=_from_open_sdk;
@property(copy, nonatomic) NSString *force_account_equal; // @synthesize force_account_equal=_force_account_equal;
@property(copy, nonatomic) NSString *specify_uin; // @synthesize specify_uin=_specify_uin;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *nick_name; // @synthesize nick_name=_nick_name;
@property(copy, nonatomic) NSString *user_label; // @synthesize user_label=_user_label;
@property(copy, nonatomic) NSString *user_zone_id; // @synthesize user_zone_id=_user_zone_id;
@property(copy, nonatomic) NSString *areaid; // @synthesize areaid=_areaid;
@property(copy, nonatomic) NSString *roleid; // @synthesize roleid=_roleid;
@property(copy, nonatomic) NSString *platid; // @synthesize platid=_platid;
@property(copy, nonatomic) NSString *guild_avatar; // @synthesize guild_avatar=_guild_avatar;
@property(copy, nonatomic) NSString *guild_name; // @synthesize guild_name=_guild_name;
@property(copy, nonatomic) NSString *zone_id; // @synthesize zone_id=_zone_id;
@property(copy, nonatomic) NSString *guild_id; // @synthesize guild_id=_guild_id;
@property(copy, nonatomic) NSString *openid; // @synthesize openid=_openid;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
- (id)signString;
- (id)queryDictionary;
- (id)init;

@end
