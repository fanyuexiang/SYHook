//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABUSplashUserData : NSObject
{
    NSString *_adnName;
    NSString *_rit;
    NSString *_appID;
    NSString *_appKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *rit; // @synthesize rit=_rit;
@property(copy, nonatomic) NSString *adnName; // @synthesize adnName=_adnName;
- (id)initWithAdnName:(id)arg1 rit:(id)arg2 appID:(id)arg3 appKey:(id)arg4;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;

@end

