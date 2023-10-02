//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SDDisplayLink, SDImageFramePool, UIImage;
@protocol SDAnimatedImageProvider;

@interface SDAnimatedImagePlayer : NSObject
{
    NSString *_runLoopMode;
    _Bool _bufferMiss;
    _Bool _needsDisplayWhenImageBecomesAvailable;
    _Bool _shouldReverse;
    UIImage *_currentFrame;
    unsigned long long _currentFrameIndex;
    unsigned long long _currentLoopCount;
    unsigned long long _totalFrameCount;
    unsigned long long _totalLoopCount;
    double _playbackRate;
    unsigned long long _playbackMode;
    unsigned long long _maxBufferSize;
    CDUnknownBlockType _animationFrameHandler;
    CDUnknownBlockType _animationLoopHandler;
    SDImageFramePool *_framePool;
    id <SDAnimatedImageProvider> _animatedProvider;
    unsigned long long _currentFrameBytes;
    double _currentTime;
    SDDisplayLink *_displayLink;
}

+ (id)defaultRunLoopMode;
+ (id)playerWithProvider:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SDDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool shouldReverse; // @synthesize shouldReverse=_shouldReverse;
@property(nonatomic) _Bool needsDisplayWhenImageBecomesAvailable; // @synthesize needsDisplayWhenImageBecomesAvailable=_needsDisplayWhenImageBecomesAvailable;
@property(nonatomic) _Bool bufferMiss; // @synthesize bufferMiss=_bufferMiss;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned long long currentFrameBytes; // @synthesize currentFrameBytes=_currentFrameBytes;
@property(retain, nonatomic) id <SDAnimatedImageProvider> animatedProvider; // @synthesize animatedProvider=_animatedProvider;
@property(retain, nonatomic) SDImageFramePool *framePool; // @synthesize framePool=_framePool;
@property(copy, nonatomic) CDUnknownBlockType animationLoopHandler; // @synthesize animationLoopHandler=_animationLoopHandler;
@property(copy, nonatomic) CDUnknownBlockType animationFrameHandler; // @synthesize animationFrameHandler=_animationFrameHandler;
@property(nonatomic) unsigned long long maxBufferSize; // @synthesize maxBufferSize=_maxBufferSize;
@property(nonatomic) unsigned long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) unsigned long long totalLoopCount; // @synthesize totalLoopCount=_totalLoopCount;
@property(nonatomic) unsigned long long totalFrameCount; // @synthesize totalFrameCount=_totalFrameCount;
@property(nonatomic) unsigned long long currentLoopCount; // @synthesize currentLoopCount=_currentLoopCount;
@property(nonatomic) unsigned long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(retain, nonatomic) UIImage *currentFrame; // @synthesize currentFrame=_currentFrame;
- (void)calculateMaxBufferCountWithFrame:(id)arg1;
- (void)handleLoopChange;
- (void)handleFrameChange;
- (void)prefetchFrameAtIndex:(unsigned long long)arg1 nextIndex:(unsigned long long)arg2;
- (void)displayDidRefresh:(id)arg1;
- (void)seekToFrameAtIndex:(unsigned long long)arg1 loopCount:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)pausePlaying;
- (void)stopPlaying;
- (void)startPlaying;
- (void)clearFrameBuffer;
- (void)resetCurrentFrameStatus;
- (void)setupCurrentFrame;
@property(copy, nonatomic) NSString *runLoopMode;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;

@end

