//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJTrackerCleaner, CSJTrackerClock, CSJTrackerSender, CSJTrackerStorage, NSString;

@interface CSJTrackerProxy : NSObject
{
    CSJTrackerCleaner *_trackerCleaner;
    CSJTrackerStorage *_trackerStore;
    CSJTrackerSender *_trackerSender;
    CSJTrackerClock *_trackClock;
    long long _trackerType;
    id _tracker;
    NSString *_sentNotification;
}

+ (_Bool)checkDeviceIdChanged;
+ (_Bool)checkForceLanguageChanged;
+ (id)trackHeaderParameters;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sentNotification; // @synthesize sentNotification=_sentNotification;
@property(nonatomic) __weak id tracker; // @synthesize tracker=_tracker;
@property(nonatomic) long long trackerType; // @synthesize trackerType=_trackerType;
@property(retain, nonatomic) CSJTrackerClock *trackClock; // @synthesize trackClock=_trackClock;
@property(retain, nonatomic) CSJTrackerSender *trackerSender; // @synthesize trackerSender=_trackerSender;
@property(retain, nonatomic) CSJTrackerStorage *trackerStore; // @synthesize trackerStore=_trackerStore;
@property(retain, nonatomic) CSJTrackerCleaner *trackerCleaner; // @synthesize trackerCleaner=_trackerCleaner;
- (void)actualSendTrack:(id)arg1 V1TrackIDs:(id)arg2 postParams:(id)arg3;
- (id)generatedPostParamsWithTrack:(id)arg1;
- (void)finishSend;
- (_Bool)startSendTrack:(id)arg1 v1TrackIDs:(id)arg2;
- (void)startCleanFromType:(long long)arg1;
- (id)saveData:(id)arg1;
- (void)startHandleTrack:(id)arg1 clockType:(long long)arg2;
- (id)initWithStoreName:(id)arg1 queueName:(const char *)arg2 willcleanNotification:(id)arg3 didcleanNotification:(id)arg4 sentNotification:(id)arg5 notificationTypeKey:(id)arg6 clockType:(long long)arg7 trackerType:(long long)arg8 eventKey:(id)arg9;
- (void)dealloc;

@end
