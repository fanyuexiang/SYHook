//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALiTaokeBiz, AlibcLoginBiz, AlibcLoginByAuthCodeBiz, AlibcLogoutBiz;

@interface AlibcUrlBizManager : NSObject
{
    ALiTaokeBiz *_taokeBiz;
    AlibcLoginBiz *_loginBiz;
    AlibcLogoutBiz *_logoutBiz;
    AlibcLoginByAuthCodeBiz *_loginByAuthCodeBiz;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) AlibcLoginByAuthCodeBiz *loginByAuthCodeBiz; // @synthesize loginByAuthCodeBiz=_loginByAuthCodeBiz;
@property(retain, nonatomic) AlibcLogoutBiz *logoutBiz; // @synthesize logoutBiz=_logoutBiz;
@property(retain, nonatomic) AlibcLoginBiz *loginBiz; // @synthesize loginBiz=_loginBiz;
@property(retain, nonatomic) ALiTaokeBiz *taokeBiz; // @synthesize taokeBiz=_taokeBiz;
- (id)init;

@end
