//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface CSJTwistMotionManager : NSObject
{
    CMMotionManager *_motionManager;
    long long _methodType;
    double _updateInterval;
    double _angularSensitivity;
    double _accelerationSensitivity;
    double _resetWhenOverflow;
    double _deltaAngleX;
    double _deltaAngleY;
    double _deltaAngleZ;
}

- (void).cxx_destruct;
@property(nonatomic) double deltaAngleZ; // @synthesize deltaAngleZ=_deltaAngleZ;
@property(nonatomic) double deltaAngleY; // @synthesize deltaAngleY=_deltaAngleY;
@property(nonatomic) double deltaAngleX; // @synthesize deltaAngleX=_deltaAngleX;
@property(nonatomic) double resetWhenOverflow; // @synthesize resetWhenOverflow=_resetWhenOverflow;
@property(nonatomic) double accelerationSensitivity; // @synthesize accelerationSensitivity=_accelerationSensitivity;
@property(nonatomic) double angularSensitivity; // @synthesize angularSensitivity=_angularSensitivity;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) long long methodType; // @synthesize methodType=_methodType;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (_Bool)p_isAchieveAngleWithAngleX:(double)arg1 angleY:(double)arg2 angleZ:(double)arg3 threshold:(double)arg4;
- (void)p_douYinMethodWithThreshold:(long long)arg1 repeat:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)p_lanJunMethodWithThreshold:(long long)arg1 repeat:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)p_gyroMethodWithThreshold:(long long)arg1 repeat:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)stopMotionUpdates;
- (_Bool)motionManagerAvailable;
- (_Bool)startObserverWithThreshold:(long long)arg1 methodType:(long long)arg2 updateInterval:(double)arg3 repeat:(_Bool)arg4 updatesWithHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

