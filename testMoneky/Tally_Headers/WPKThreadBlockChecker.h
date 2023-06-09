//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer, WPKThreadBlockCheckerConfig;
@protocol OS_dispatch_queue, WPKThreadBlockCheckerDelegate;

@interface WPKThreadBlockChecker : NSObject
{
    _Bool _missionStarted;
    _Bool _missionSuspended;
    _Bool _missionProcessing;
    _Bool _beatResponsed;
    _Bool _beatChecked;
    _Bool _appActive;
    int _missBeatTime;
    id <WPKThreadBlockCheckerDelegate> _delegate;
    WPKThreadBlockCheckerConfig *_config;
    NSObject<OS_dispatch_queue> *_checkBeatQueue;
    NSTimer *_rebornTimer;
    NSDate *_loopStartDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *loopStartDate; // @synthesize loopStartDate=_loopStartDate;
@property(retain, nonatomic) NSTimer *rebornTimer; // @synthesize rebornTimer=_rebornTimer;
@property(nonatomic) int missBeatTime; // @synthesize missBeatTime=_missBeatTime;
@property(nonatomic) _Bool appActive; // @synthesize appActive=_appActive;
@property(nonatomic, getter=isBeatChecked) _Bool beatChecked; // @synthesize beatChecked=_beatChecked;
@property(nonatomic, getter=isBeatResponsed) _Bool beatResponsed; // @synthesize beatResponsed=_beatResponsed;
@property(nonatomic, getter=isMissionProcessing) _Bool missionProcessing; // @synthesize missionProcessing=_missionProcessing;
@property(nonatomic, getter=isMissionSuspended) _Bool missionSuspended; // @synthesize missionSuspended=_missionSuspended;
@property(nonatomic, getter=isMissionStarted) _Bool missionStarted; // @synthesize missionStarted=_missionStarted;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkBeatQueue; // @synthesize checkBeatQueue=_checkBeatQueue;
@property(retain, nonatomic) WPKThreadBlockCheckerConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WPKThreadBlockCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)markAsMainThreadCheckingReset;
- (void)markAsMainThreadStayHealthy:(_Bool)arg1;
- (void)markAsMainThreadKeepOnBlocking;
- (void)markAsMainThreadBlockedWithInterval:(double)arg1;
- (void)checkBeat:(float)arg1;
- (void)sendBeat:(float)arg1;
- (void)reset;
- (void)startBeatLoopWithSendBeatDelay:(float)arg1 checkBeatDelay:(float)arg2;
- (void)checkIfBeatLoopFinish;
- (_Bool)isBeatLoopFinish;
- (void)startWithConfig:(id)arg1;
- (void)startCheckMainThread;
- (void)receiveWillResignActiveNotification:(id)arg1;
- (void)rebornTimerCallback;
- (void)receiveDidBecomeActiveNotification:(id)arg1;
- (void)setupNotifications;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

