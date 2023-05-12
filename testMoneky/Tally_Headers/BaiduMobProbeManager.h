//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface BaiduMobProbeManager : NSObject
{
    _Bool _isUpdating;
    unsigned long long _iad;
    NSDate *_iadUpdateDate;
    NSString *_iadex;
    NSString *_needSniff;
    NSDictionary *_pkgList;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain, nonatomic) NSDictionary *pkgList; // @synthesize pkgList=_pkgList;
@property(retain, nonatomic) NSString *needSniff; // @synthesize needSniff=_needSniff;
@property(retain) NSString *iadex; // @synthesize iadex=_iadex;
@property(retain, nonatomic) NSDate *iadUpdateDate; // @synthesize iadUpdateDate=_iadUpdateDate;
@property(nonatomic) unsigned long long iad; // @synthesize iad=_iad;
- (void)dealloc;
- (void)handleCloud:(id)arg1;
- (void)loadIAD;
- (void)saveIAD:(unsigned long long)arg1 index:(unsigned long long)arg2 completed:(_Bool)arg3;
- (void)updateIAD;
- (_Bool)needUpdateIAD;
- (id)getIADEX;
- (id)getIAD;
- (id)init;

@end
