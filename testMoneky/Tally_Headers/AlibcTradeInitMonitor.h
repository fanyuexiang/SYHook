//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcTradeMonitor.h"

@class AlibcTradeTimeMeasure;

@interface AlibcTradeInitMonitor : AlibcTradeMonitor
{
    AlibcTradeTimeMeasure *_allTimeMeasure;
    AlibcTradeTimeMeasure *_utTimeMeasure;
    AlibcTradeTimeMeasure *_securityTimeMeasure;
    AlibcTradeTimeMeasure *_authTimeMeasure;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AlibcTradeTimeMeasure *authTimeMeasure; // @synthesize authTimeMeasure=_authTimeMeasure;
@property(readonly, nonatomic) AlibcTradeTimeMeasure *securityTimeMeasure; // @synthesize securityTimeMeasure=_securityTimeMeasure;
@property(readonly, nonatomic) AlibcTradeTimeMeasure *utTimeMeasure; // @synthesize utTimeMeasure=_utTimeMeasure;
@property(readonly, nonatomic) AlibcTradeTimeMeasure *allTimeMeasure; // @synthesize allTimeMeasure=_allTimeMeasure;
- (void)commit;
- (id)allBenchmarkableData;
- (id)initWithName:(id)arg1;
- (id)init;

@end

