//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AssetChartModel : NSObject
{
    NSString *_imgURL;
    NSString *_assetName;
    NSString *_amount;
    NSString *_remark;
    NSString *_percentStr;
    double _showPercent;
    NSString *_rid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(nonatomic) double showPercent; // @synthesize showPercent=_showPercent;
@property(copy, nonatomic) NSString *percentStr; // @synthesize percentStr=_percentStr;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(copy, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;

@end

