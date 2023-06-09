//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface BaiduMobAdResponse : NSObject
{
    NSArray *_allAdInstances;
    int _n;
    NSDictionary *_adData;
    NSString *_errorCode;
    NSString *_errorMessage;
    NSMutableArray *_adInstanceArray;
    NSDictionary *_baseResponse;
    NSMutableArray *_itemsArray;
    NSDictionary *_actionParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *actionParams; // @synthesize actionParams=_actionParams;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(retain, nonatomic) NSDictionary *baseResponse; // @synthesize baseResponse=_baseResponse;
@property(retain, nonatomic) NSMutableArray *adInstanceArray; // @synthesize adInstanceArray=_adInstanceArray;
@property(nonatomic) int n; // @synthesize n=_n;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSDictionary *adData; // @synthesize adData=_adData;
- (id)currentAdInstance;
- (id)allAdInstances;
- (id)initWithDictonary:(id)arg1;
- (id)initCpuResponseWithDictonary:(id)arg1;
- (id)deleteControlCharacter:(id)arg1;
- (id)initWithNSData:(id)arg1;

@end

