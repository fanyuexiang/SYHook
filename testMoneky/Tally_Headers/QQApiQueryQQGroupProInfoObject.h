//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiQueryQQGroupProInfoObject : QQApiObject
{
    NSString *_org_id;
    NSString *_world_id;
    NSString *_openKey;
    NSString *_openID;
    NSString *_appid;
}

@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(copy, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(copy, nonatomic) NSString *world_id; // @synthesize world_id=_world_id;
@property(copy, nonatomic) NSString *org_id; // @synthesize org_id=_org_id;
- (_Bool)hasNilField;
- (id)queryURLString;

@end
