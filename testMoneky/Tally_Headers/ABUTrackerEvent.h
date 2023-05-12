//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ABUTrackerEvent : NSObject
{
    NSString *_type;
    NSString *_eventID;
    NSDictionary *_param;
    NSString *_linkID;
}

+ (id)_reuseDictioanry;
+ (id)_randomEventID;
+ (id)packageEvents:(id)arg1;
+ (id)eventWithType:(id)arg1 andBaseParam:(id)arg2;
+ (id)eventWithType:(id)arg1 eventID:(id)arg2 andBaseParam:(id)arg3;
+ (id)primaryKey;
+ (id)tableName;
+ (id)databaseName;
+ (double)timeIntervalOfDaysBeforeToday:(long long)arg1;
+ (void)removeEventsBeforeDays:(long long)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)removeEvents:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)getEventListWithCount:(long long)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)saveEvent:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *linkID; // @synthesize linkID=_linkID;
@property(copy, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)prepareForReuse;
- (void)addToReusePool;
- (id)convertToUploadPackage;
- (id)willUpdateParam:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;

@end

