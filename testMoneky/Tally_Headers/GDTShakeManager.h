//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface GDTShakeManager : NSObject
{
    _Bool _isStartToShake;
    _Bool _isBingo;
    double _shakeMotionUpdateInterval;
    double _shakeBingoValue;
    double _shakeBingoCount;
    double _factorX;
    double _factorY;
    double _factorZ;
    CDUnknownBlockType _statusChangedBlock;
    CMMotionManager *_motionManager;
    long long _currentShakeBingoCount;
    double _currentShakeValue;
    double _maxShakeValue;
    CDStruct_31142d93 _currentAcceleration;
}

@property(nonatomic) double maxShakeValue; // @synthesize maxShakeValue=_maxShakeValue;
@property(nonatomic) double currentShakeValue; // @synthesize currentShakeValue=_currentShakeValue;
@property(nonatomic) long long currentShakeBingoCount; // @synthesize currentShakeBingoCount=_currentShakeBingoCount;
@property(nonatomic) _Bool isBingo; // @synthesize isBingo=_isBingo;
@property(nonatomic) _Bool isStartToShake; // @synthesize isStartToShake=_isStartToShake;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) CDStruct_31142d93 currentAcceleration; // @synthesize currentAcceleration=_currentAcceleration;
@property(copy, nonatomic) CDUnknownBlockType statusChangedBlock; // @synthesize statusChangedBlock=_statusChangedBlock;
@property(nonatomic) double factorZ; // @synthesize factorZ=_factorZ;
@property(nonatomic) double factorY; // @synthesize factorY=_factorY;
@property(nonatomic) double factorX; // @synthesize factorX=_factorX;
@property(nonatomic) double shakeBingoCount; // @synthesize shakeBingoCount=_shakeBingoCount;
@property(nonatomic) double shakeBingoValue; // @synthesize shakeBingoValue=_shakeBingoValue;
@property(nonatomic) double shakeMotionUpdateInterval; // @synthesize shakeMotionUpdateInterval=_shakeMotionUpdateInterval;
- (void).cxx_destruct;
- (double)GDTfunctionv8gWF1:(CDStruct_31142d93)arg1;
- (_Bool)GDTfunctionx0AgPx:(double)arg1;
- (_Bool)GDTfunctionn7Nvqv;
- (_Bool)GDTfunctiony76zgs;
- (void)GDTfunctionv8CUIg:(long long)arg1;
- (id)init;

@end

