//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GDTStoreProductPreloadManager : NSObject
{
    NSMutableDictionary *_ituneStores;
}

+ (id)defaultManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedGDTStoreProductPreloadManager;
@property(retain, nonatomic) NSMutableDictionary *ituneStores; // @synthesize ituneStores=_ituneStores;
- (void).cxx_destruct;
- (long long)GDTfunctionw5sUtY:(id)arg1;
- (_Bool)GDTfunctionr897I1:(id)arg1;
- (void)GDTfunctionz9CSiv;
- (void)GDTfunctionv6LFCw:(id)arg1 viewController:(id)arg2;
- (_Bool)GDTfunctionk5aTzz:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3;
- (_Bool)GDTfunctionq0uM0B:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3 adNetwork:(id)arg4;
- (id)GDTfunctionu6P2B2:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

