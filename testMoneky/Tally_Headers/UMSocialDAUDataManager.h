//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UMSocialDAUDataManager : NSObject
{
    _Bool _isAuthorizationed;
    _Bool _isShared;
    NSMutableDictionary *_dauInfoDic;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShared;
@property(nonatomic) _Bool isAuthorizationed;
- (id)init;

@end

