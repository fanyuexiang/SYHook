//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJDynamicBrickValuesModel, NSArray, NSDictionary, NSString;

@interface CSJDynamicBrickModel : NSObject
{
    NSDictionary *_originDictionary;
    NSString *_originType;
    NSString *_type;
    NSString *_dataString;
    NSArray *_dataArray;
    NSDictionary *_dataDict;
    id _dataExtraInfo;
    NSString *_clickType;
    long long _areaType;
    long long _clickAreaCategory;
    CSJDynamicBrickValuesModel *_nightThemeValues;
    CSJDynamicBrickValuesModel *_values;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJDynamicBrickValuesModel *values; // @synthesize values=_values;
@property(retain, nonatomic) CSJDynamicBrickValuesModel *nightThemeValues; // @synthesize nightThemeValues=_nightThemeValues;
@property(nonatomic) long long clickAreaCategory; // @synthesize clickAreaCategory=_clickAreaCategory;
@property(nonatomic) long long areaType; // @synthesize areaType=_areaType;
@property(copy, nonatomic) NSString *clickType; // @synthesize clickType=_clickType;
@property(retain, nonatomic) id dataExtraInfo; // @synthesize dataExtraInfo=_dataExtraInfo;
@property(copy, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(copy, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) NSString *dataString; // @synthesize dataString=_dataString;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *originType; // @synthesize originType=_originType;
@property(copy, nonatomic) NSDictionary *originDictionary; // @synthesize originDictionary=_originDictionary;
- (id)dictionaryValueNotIncludeValues;
- (id)getBrickData;
- (id)dictionaryValue;
- (long long)fromJS_convertAreaType:(id)arg1;
- (void)fromJS_updateAreaType;
- (long long)qa_clickAreaType;
- (long long)dynamicBrickLogoType;
- (id)initWithDictionary:(id)arg1;

@end

