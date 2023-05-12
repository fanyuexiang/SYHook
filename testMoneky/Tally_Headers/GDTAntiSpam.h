//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface GDTAntiSpam : NSObject
{
    _Bool _closeBtnDisplayed;
    _Bool _needP;
    int _xo;
    int _yo;
    long long _playBeginTime;
    long long _aa;
    long long _ab;
    long long _ba;
    long long _bb;
    long long _g;
    long long _ec;
    long long _sc;
    NSString *_d;
    NSString *_f;
    NSString *_sz;
    NSString *_dd;
    long long _p;
    NSString *_x;
    long long _preClickTime;
    long long _postClickTime;
    double _tp;
    double _ts;
    double _dp;
    long long _dx;
    long long _dy;
    long long _pw;
    long long _ph;
    long long _ra;
    long long _rb;
    long long _da;
    long long _db;
    NSString *_tid;
    long long _dataType;
    long long _clickArea;
    long long _vp;
    double _vs;
    double _dpn;
    long long _sg;
    NSString *_td;
    NSString *_sld;
    NSSet *_otherParams;
}

+ (long long)currentTime;
+ (id)addParamToBaseUrlString:(id)arg1 withKeyString:(id)arg2 valueString:(id)arg3;
+ (id)jsonStringFromObject:(id)arg1;
+ (id)encodeURL:(id)arg1;
+ (id)urlParamForAntiSpamWithTemplateId:(id)arg1 antiSpamClickData:(id)arg2 isCloseBtnDisplayed:(_Bool)arg3 playBeginTime:(long long)arg4 dataType:(long long)arg5;
+ (id)addPParamToExposureUrlCurrentViewFrame:(struct CGRect)arg1 rootViewFrame:(struct CGRect)arg2 antiSpamClickData:(id)arg3 baseUrl:(id)arg4 needP:(_Bool)arg5 dataType:(long long)arg6;
+ (id)exposureUrlWithAntiSpamClickData:(id)arg1 baseUrl:(id)arg2 needP:(_Bool)arg3;
+ (id)antiSpamParamWithTemplateId:(id)arg1 isCloseBtnDisplayed:(_Bool)arg2 playBeginTime:(long long)arg3;
+ (id)pParamsPlaintextWithString:(id)arg1;
+ (struct CGSize)getAdValidateAreaWithView:(id)arg1 frameA:(struct CGRect)arg2 frameB:(struct CGRect)arg3;
+ (struct CGRect)getAdToScreenWithView:(id)arg1 frame:(struct CGRect)arg2;
+ (id)mid;
@property(copy, nonatomic) NSSet *otherParams; // @synthesize otherParams=_otherParams;
@property(copy, nonatomic) NSString *sld; // @synthesize sld=_sld;
@property(copy, nonatomic) NSString *td; // @synthesize td=_td;
@property(nonatomic) long long sg; // @synthesize sg=_sg;
@property(nonatomic) double dpn; // @synthesize dpn=_dpn;
@property(nonatomic) double vs; // @synthesize vs=_vs;
@property(nonatomic) long long vp; // @synthesize vp=_vp;
@property(nonatomic) long long clickArea; // @synthesize clickArea=_clickArea;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) long long db; // @synthesize db=_db;
@property(nonatomic) long long da; // @synthesize da=_da;
@property(nonatomic) long long rb; // @synthesize rb=_rb;
@property(nonatomic) long long ra; // @synthesize ra=_ra;
@property(nonatomic) long long ph; // @synthesize ph=_ph;
@property(nonatomic) long long pw; // @synthesize pw=_pw;
@property(nonatomic) long long dy; // @synthesize dy=_dy;
@property(nonatomic) long long dx; // @synthesize dx=_dx;
@property(nonatomic) double dp; // @synthesize dp=_dp;
@property(nonatomic) double ts; // @synthesize ts=_ts;
@property(nonatomic) double tp; // @synthesize tp=_tp;
@property(nonatomic) int yo; // @synthesize yo=_yo;
@property(nonatomic) int xo; // @synthesize xo=_xo;
@property(nonatomic) long long postClickTime; // @synthesize postClickTime=_postClickTime;
@property(nonatomic) long long preClickTime; // @synthesize preClickTime=_preClickTime;
@property(copy, nonatomic) NSString *x; // @synthesize x=_x;
@property(nonatomic) long long p; // @synthesize p=_p;
@property(copy, nonatomic) NSString *dd; // @synthesize dd=_dd;
@property(copy, nonatomic) NSString *sz; // @synthesize sz=_sz;
@property(copy, nonatomic) NSString *f; // @synthesize f=_f;
@property(copy, nonatomic) NSString *d; // @synthesize d=_d;
@property(nonatomic) long long sc; // @synthesize sc=_sc;
@property(nonatomic) long long ec; // @synthesize ec=_ec;
@property(nonatomic) long long g; // @synthesize g=_g;
@property(nonatomic) long long bb; // @synthesize bb=_bb;
@property(nonatomic) long long ba; // @synthesize ba=_ba;
@property(nonatomic) long long ab; // @synthesize ab=_ab;
@property(nonatomic) long long aa; // @synthesize aa=_aa;
@property(nonatomic) _Bool needP; // @synthesize needP=_needP;
@property(nonatomic) _Bool closeBtnDisplayed; // @synthesize closeBtnDisplayed=_closeBtnDisplayed;
@property(nonatomic) long long playBeginTime; // @synthesize playBeginTime=_playBeginTime;
- (void).cxx_destruct;
- (id)GDTfunctionn9TfEg:(id)arg1;
- (void)GDTfunctionf587zF:(id)arg1;
- (id)GDTfunctiono3TPSk:(id)arg1;
- (id)GDTfunctionq2R7EW:(id)arg1;
- (id)GDTfunctiong7v5we;
- (id)GDTfunctionc58GBD;
- (id)GDTfunctioni3MGXX:(id)arg1;
- (id)GDTfunctionl8p8cb;
- (id)GDTfunctionf3MpNm:(id)arg1;
- (id)GDTfunctiono5JyOT;
- (id)GDTfunctiona9oHkW;
- (id)GDTfunctionf1NC3L;
- (void)GDTfunctionf2oLJS:(id)arg1;
- (void)GDTfunctiont3yQto:(id)arg1;
- (id)GDTfunctionj8OQmK:(id)arg1;
- (id)GDTfunctionc14eDy:(id)arg1 antiSpamClickData:(id)arg2;
- (id)GDTfunctiont5LrRN:(id)arg1 antiSpamClickData:(id)arg2 antiSpamDictFromH5:(id)arg3;
- (id)init;

@end
