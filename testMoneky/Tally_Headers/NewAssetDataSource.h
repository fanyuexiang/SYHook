//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NewAssetDataSource : NSObject
{
    NSDictionary *_localData;
    NSDictionary *_localDataParams;
}

+ (_Bool)isLiabilitiesCard:(id)arg1;
+ (_Bool)isCreditCard:(id)arg1;
+ (_Bool)isDebitCard:(id)arg1;
+ (id)secondGroupData:(id)arg1;
+ (id)firstGroupDataParams:(id)arg1;
+ (id)firstGroupData;
+ (id)firstGroupIDs;
+ (id)iconImageNameWithCId:(id)arg1;
+ (id)nameWithCId:(id)arg1;
+ (id)dataWithCId:(id)arg1;
+ (id)pcIdWithCId:(id)arg1;
+ (id)share;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *localDataParams; // @synthesize localDataParams=_localDataParams;
@property(retain, nonatomic) NSDictionary *localData; // @synthesize localData=_localData;
- (id)init;

@end

