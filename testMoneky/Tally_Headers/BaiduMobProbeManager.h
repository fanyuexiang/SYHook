//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface BaiduMobProbeManager : NSObject
{
    _Bool _isUpdating;
    unsigned long long _iad;
    NSDate *_iadUpdateDate;
    NSString *_iadex;
    NSString *_needSniff;
    NSDictionary *_pkgList;
    NSArray *_schemeList1;
    NSArray *_schemeList2;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSArray *schemeList2; // @synthesize schemeList2=_schemeList2;
@property(retain) NSArray *schemeList1; // @synthesize schemeList1=_schemeList1;
@property _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain, nonatomic) NSDictionary *pkgList; // @synthesize pkgList=_pkgList;
@property(retain, nonatomic) NSString *needSniff; // @synthesize needSniff=_needSniff;
@property(retain) NSString *iadex; // @synthesize iadex=_iadex;
@property(retain, nonatomic) NSDate *iadUpdateDate; // @synthesize iadUpdateDate=_iadUpdateDate;
@property(nonatomic) unsigned long long iad; // @synthesize iad=_iad;
- (void)dealloc;
- (void)handleCloud:(id)arg1;
- (void)loadIAD;
- (void)updateApoWithScheme:(id)arg1 deepLink:(id)arg2 success:(_Bool)arg3;
- (void)saveIAD:(unsigned long long)arg1 index:(unsigned long long)arg2 completed:(_Bool)arg3;
- (void)configSchemeList;
- (void)updateIAD;
- (_Bool)needUpdateIAD;
- (id)getIADEX;
- (id)getIAD;
- (id)init;

@end

