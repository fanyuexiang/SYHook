//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KPModel.h"

@class NSArray, NSString;

@interface KPURLParamsModel : KPModel
{
    NSString *_urlStr;
    NSArray *_keyArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *keyArray; // @synthesize keyArray=_keyArray;
@property(copy, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
- (id)getArrayFromString:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end

