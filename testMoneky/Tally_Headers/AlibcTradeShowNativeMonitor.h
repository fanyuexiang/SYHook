//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcTradeMonitor.h"

@class AlibcTradeDimension, AlibcTradeTimeMeasure;

@interface AlibcTradeShowNativeMonitor : AlibcTradeMonitor
{
    AlibcTradeDimension *_pageTypeDimension;
    AlibcTradeTimeMeasure *_analysisMeasure;
    AlibcTradeTimeMeasure *_goTaobaoMeasure;
    AlibcTradeTimeMeasure *_allTimeMeasure;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AlibcTradeTimeMeasure *allTimeMeasure; // @synthesize allTimeMeasure=_allTimeMeasure;
@property(readonly, nonatomic) AlibcTradeTimeMeasure *goTaobaoMeasure; // @synthesize goTaobaoMeasure=_goTaobaoMeasure;
@property(readonly, nonatomic) AlibcTradeTimeMeasure *analysisMeasure; // @synthesize analysisMeasure=_analysisMeasure;
@property(readonly, nonatomic) AlibcTradeDimension *pageTypeDimension; // @synthesize pageTypeDimension=_pageTypeDimension;
- (id)allBenchmarkableData;
- (id)init;

@end

