//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDTFMCModel : NSObject
{
    int _type;
    NSString *_callToAction;
    NSString *_form_url;
    NSString *_consult_url;
    NSString *_fmcDefaultPhone;
}

@property(copy, nonatomic) NSString *fmcDefaultPhone; // @synthesize fmcDefaultPhone=_fmcDefaultPhone;
@property(copy, nonatomic) NSString *consult_url; // @synthesize consult_url=_consult_url;
@property(copy, nonatomic) NSString *form_url; // @synthesize form_url=_form_url;
@property(copy, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (long long)actionType;
- (_Bool)isValid;
- (_Bool)GDTfunctionx8gna8;
- (_Bool)GDTfunctionl8cg6G;
- (_Bool)GDTfunctionb0nZZi;
- (id)initWithDictionary:(id)arg1;

@end

