//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BuyDiallelCollectionView.h"

@class NSArray, NSString;

@interface PlatformBuyDiallelCollectionView : BuyDiallelCollectionView
{
    NSString *_listID;
    NSString *_urlPath;
    long long _platformType;
    NSArray *_specialKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *specialKeys; // @synthesize specialKeys=_specialKeys;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(copy, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)requestGoodsList:(id)arg1 isRefresh:(_Bool)arg2;

@end
