//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class BaiduMobAdBarrageTextView, NSArray, NSMutableArray, NSString, NSTimer;

@interface BaiduMobAdbarrageView : UIView <CAAnimationDelegate>
{
    int _barrSize;
    int _barrId;
    int _barrTextId;
    NSArray *_barrText;
    double _intervalTime;
    double _duration;
    double _intervalLength;
    double _isPlay;
    UIView *_barrageView;
    NSMutableArray *_barrQueue;
    NSTimer *_timer;
    double _h;
    double _maxH;
    double _barrLength;
    NSArray *_backGroundAlpha;
    NSArray *_textAlpha;
    BaiduMobAdBarrageTextView *_barrView;
    double _barrNumber;
}

- (void).cxx_destruct;
@property(nonatomic) double barrNumber; // @synthesize barrNumber=_barrNumber;
@property(nonatomic) int barrTextId; // @synthesize barrTextId=_barrTextId;
@property(retain, nonatomic) BaiduMobAdBarrageTextView *barrView; // @synthesize barrView=_barrView;
@property(retain, nonatomic) NSArray *textAlpha; // @synthesize textAlpha=_textAlpha;
@property(retain, nonatomic) NSArray *backGroundAlpha; // @synthesize backGroundAlpha=_backGroundAlpha;
@property(nonatomic) int barrId; // @synthesize barrId=_barrId;
@property(nonatomic) double barrLength; // @synthesize barrLength=_barrLength;
@property(nonatomic) double maxH; // @synthesize maxH=_maxH;
@property(nonatomic) double h; // @synthesize h=_h;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *barrQueue; // @synthesize barrQueue=_barrQueue;
@property(retain, nonatomic) UIView *barrageView; // @synthesize barrageView=_barrageView;
@property(nonatomic) double isPlay; // @synthesize isPlay=_isPlay;
@property(nonatomic) double intervalLength; // @synthesize intervalLength=_intervalLength;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double intervalTime; // @synthesize intervalTime=_intervalTime;
@property(nonatomic) int barrSize; // @synthesize barrSize=_barrSize;
@property(retain, nonatomic) NSArray *barrText; // @synthesize barrText=_barrText;
- (void)clear;
- (void)showBarrage;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

