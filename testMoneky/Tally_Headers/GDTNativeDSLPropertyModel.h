//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTNativeDSLEXTPropertyModel, NSDictionary, NSString;

@interface GDTNativeDSLPropertyModel : NSObject
{
    _Bool _isLandingPageTemplate;
    _Bool _hasEndCard;
    NSString *_minSDKVersion;
    NSString *_maxSDKVersion;
    NSDictionary *_propertyDict;
    NSDictionary *_extDict;
    GDTNativeDSLEXTPropertyModel *_extPropertys;
}

@property(retain, nonatomic) GDTNativeDSLEXTPropertyModel *extPropertys; // @synthesize extPropertys=_extPropertys;
@property(nonatomic) _Bool hasEndCard; // @synthesize hasEndCard=_hasEndCard;
@property(nonatomic) _Bool isLandingPageTemplate; // @synthesize isLandingPageTemplate=_isLandingPageTemplate;
@property(copy, nonatomic) NSDictionary *extDict; // @synthesize extDict=_extDict;
@property(copy, nonatomic) NSDictionary *propertyDict; // @synthesize propertyDict=_propertyDict;
@property(copy, nonatomic) NSString *maxSDKVersion; // @synthesize maxSDKVersion=_maxSDKVersion;
@property(copy, nonatomic) NSString *minSDKVersion; // @synthesize minSDKVersion=_minSDKVersion;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

