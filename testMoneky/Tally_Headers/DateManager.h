//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCXSegmentView, NSMutableArray, NSString;

@interface DateManager : NSObject
{
    NSString *_minDate;
    NSString *_maxDate;
    NSString *_currentDate;
    long long _dateType;
    FCXSegmentView *_segmentView;
    NSMutableArray *_yearArray;
    NSMutableArray *_monthArray;
    NSMutableArray *_weekArray;
    NSString *_typeID;
    NSString *_typeName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) NSString *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSString *minDate; // @synthesize minDate=_minDate;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSString *typeID; // @synthesize typeID=_typeID;
@property(retain, nonatomic) NSMutableArray *weekArray; // @synthesize weekArray=_weekArray;
@property(retain, nonatomic) NSMutableArray *monthArray; // @synthesize monthArray=_monthArray;
@property(retain, nonatomic) NSMutableArray *yearArray; // @synthesize yearArray=_yearArray;
@property(nonatomic) __weak FCXSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(nonatomic) long long dateType; // @synthesize dateType=_dateType;
- (long long)sk_getACMonthDay;
- (void)tallyDataAddNotification:(id)arg1;
- (void)tallyDateRefresh;
- (void)queryDate;
- (id)getDataArray:(id)arg1;
- (void)updateDate;
- (void)addNotification;
- (void)sk_setup;
- (id)initWithTypeName:(id)arg1;
- (id)initWithTypeID:(id)arg1;
- (id)init;
- (void)dealloc;

@end

