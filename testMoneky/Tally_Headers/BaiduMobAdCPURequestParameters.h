//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BaiduMobAdCPURequestParameters : NSObject
{
    _Bool _isDark;
    _Bool _isLockMode;
    int _listScene;
    int _accessType;
    NSString *_customUserId;
    NSString *_subChannelId;
    NSString *_cityIfLocalChannel;
    NSString *_keyWord;
    NSMutableDictionary *_otherPriorityDic;
    NSString *_fontSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSMutableDictionary *otherPriorityDic; // @synthesize otherPriorityDic=_otherPriorityDic;
@property(nonatomic) _Bool isLockMode; // @synthesize isLockMode=_isLockMode;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) NSString *cityIfLocalChannel; // @synthesize cityIfLocalChannel=_cityIfLocalChannel;
@property(retain, nonatomic) NSString *subChannelId; // @synthesize subChannelId=_subChannelId;
@property(retain, nonatomic) NSString *customUserId; // @synthesize customUserId=_customUserId;
@property(nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
@property(nonatomic) int accessType; // @synthesize accessType=_accessType;
@property(nonatomic) int listScene; // @synthesize listScene=_listScene;
- (id)getFontSize;
- (void)setLpFontSize:(id)arg1;
- (id)getRequestKey:(id)arg1;
- (void)addParametersKey:(id)arg1 value:(id)arg2;
- (id)init;

@end

