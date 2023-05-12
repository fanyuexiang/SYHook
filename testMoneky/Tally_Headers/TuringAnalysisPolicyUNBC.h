//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface TuringAnalysisPolicyUNBC : NSObject
{
    UIView *_associatedView;
    double _motionSamplingInterval;
    double _expectedTotalTrackingTime;
    double _extraTrackingTime;
    unsigned long long _maximumNumberOfAlysisRecordsPerDay;
    unsigned long long _maximumNumberOfAlysisRecordsPerHour;
    unsigned long long _maximumNumberOfAlysisRecordsPerTask;
    double _intervalBetweenRecords;
    unsigned long long _recognizer;
    unsigned long long _analyticTerm;
    unsigned long long _numberOfCollectedRecords;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long numberOfCollectedRecords; // @synthesize numberOfCollectedRecords=_numberOfCollectedRecords;
@property(nonatomic) unsigned long long analyticTerm; // @synthesize analyticTerm=_analyticTerm;
@property(nonatomic) unsigned long long recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) double intervalBetweenRecords; // @synthesize intervalBetweenRecords=_intervalBetweenRecords;
@property(nonatomic) unsigned long long maximumNumberOfAlysisRecordsPerTask; // @synthesize maximumNumberOfAlysisRecordsPerTask=_maximumNumberOfAlysisRecordsPerTask;
@property(nonatomic) unsigned long long maximumNumberOfAlysisRecordsPerHour; // @synthesize maximumNumberOfAlysisRecordsPerHour=_maximumNumberOfAlysisRecordsPerHour;
@property(nonatomic) unsigned long long maximumNumberOfAlysisRecordsPerDay; // @synthesize maximumNumberOfAlysisRecordsPerDay=_maximumNumberOfAlysisRecordsPerDay;
@property(nonatomic) double extraTrackingTime; // @synthesize extraTrackingTime=_extraTrackingTime;
@property(nonatomic) double expectedTotalTrackingTime; // @synthesize expectedTotalTrackingTime=_expectedTotalTrackingTime;
@property(nonatomic) double motionSamplingInterval; // @synthesize motionSamplingInterval=_motionSamplingInterval;
@property(nonatomic) __weak UIView *associatedView; // @synthesize associatedView=_associatedView;
- (_Bool)shouldContiuneRecordingForScene:(unsigned long long)arg1;
- (void)markRecordingForScene:(unsigned long long)arg1;
- (id)initWithRecognizer:(unsigned long long)arg1 analyticTerm:(unsigned long long)arg2;

@end

