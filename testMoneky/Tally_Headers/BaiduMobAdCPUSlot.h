//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdSlotTemplate.h"

@class NSDictionary;

@interface BaiduMobAdCPUSlot : BaiduMobAdSlotTemplate
{
    int _pageSize;
    NSDictionary *_actionParmas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *actionParmas; // @synthesize actionParmas=_actionParmas;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
- (void)onAdLoaded:(id)arg1 withAdInstance:(id)arg2 withDictionary:(id)arg3;
- (void)successCallback:(id)arg1 withRequestAndResponseDic:(id)arg2;
- (id)buildCPURequestInfo:(id)arg1;
- (void)loadCPUWithPage:(int)arg1 Channels:(int)arg2 IsShowAd:(_Bool)arg3;

@end
