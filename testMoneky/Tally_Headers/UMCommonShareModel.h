//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMUShareCommonModel.h"

@class NSString;

@interface UMCommonShareModel : UMUShareCommonModel
{
    NSString *_pf;
    NSString *_sdkt;
    NSString *_sm;
    NSString *_pic;
    NSString *_picurl;
    NSString *_title;
    NSString *_ct;
    NSString *_stype;
    NSString *_url;
    NSString *_durl;
    NSString *_m_p;
    NSString *_m_u;
    NSString *_tag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *m_u; // @synthesize m_u=_m_u;
@property(retain, nonatomic) NSString *m_p; // @synthesize m_p=_m_p;
@property(retain, nonatomic) NSString *durl; // @synthesize durl=_durl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *stype; // @synthesize stype=_stype;
@property(retain, nonatomic) NSString *ct; // @synthesize ct=_ct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *picurl; // @synthesize picurl=_picurl;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *sm; // @synthesize sm=_sm;
@property(retain, nonatomic) NSString *sdkt; // @synthesize sdkt=_sdkt;
@property(retain, nonatomic) NSString *pf; // @synthesize pf=_pf;
- (id)description;
- (void)generateDeleteSQLWithSQLStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)generateSaveSQLWithSQLStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)parseDictionary:(id)arg1;
- (id)toSQLMappedDictionary;
- (id)toDictionary;

@end

