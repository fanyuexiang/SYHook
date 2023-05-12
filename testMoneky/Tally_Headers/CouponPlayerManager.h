//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, NSString, UIImage;
@protocol CouponPlayerDelegate;

@interface CouponPlayerManager : NSObject
{
    AVPlayer *_player;
    id <CouponPlayerDelegate> _delegate;
    double _totalTime;
    double _currentTime;
    double _speed;
    NSString *_speedStr;
    NSString *_title;
    NSString *_imgURL;
    UIImage *_image;
    double _bufferProgress;
    NSString *_playError;
    id _timeObserver;
    NSString *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(copy, nonatomic) NSString *playError; // @synthesize playError=_playError;
@property(nonatomic) double bufferProgress; // @synthesize bufferProgress=_bufferProgress;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *speedStr; // @synthesize speedStr=_speedStr;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) __weak id <CouponPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)dealloc;
- (void)removeObserver;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)clearCurrentPlay;
- (void)stop;
- (void)pause;
- (void)play;
- (void)seekToTime:(CDStruct_198678f7)arg1 continuePlay:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToTimeBegan;
- (void)seekToTimeWithOffset:(double)arg1;
- (void)seekToTimeWithScale:(double)arg1 offsetTime:(double)arg2;
- (void)seekToTimeWithScale:(double)arg1;
- (void)playFailed;
- (void)playFinished;
- (void)refreshURLString:(id)arg1;
- (void)playWithURLString:(id)arg1 isRefresh:(_Bool)arg2;
- (void)playWithURLString:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (void)setup;
- (id)init;

@end

