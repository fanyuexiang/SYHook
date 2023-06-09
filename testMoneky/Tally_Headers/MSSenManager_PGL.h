//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, NSOperationQueue;

@interface MSSenManager_PGL : NSObject
{
    _Bool _figCount;
    _Bool _isMotionAvailable;
    _Bool _needToNotify;
    int _sleepMis;
    CMMotionManager *_singArray;
    NSOperationQueue *_libString;
    void *_funDelegate;
    void *_dclickKVO;
    void *_workDic;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) int sleepMis; // @synthesize sleepMis=_sleepMis;
@property(nonatomic) void *workDic; // @synthesize workDic=_workDic;
@property(nonatomic) void *dclickKVO; // @synthesize dclickKVO=_dclickKVO;
@property(nonatomic) void *funDelegate; // @synthesize funDelegate=_funDelegate;
@property _Bool needToNotify; // @synthesize needToNotify=_needToNotify;
@property(retain, nonatomic) NSOperationQueue *libString; // @synthesize libString=_libString;
@property(retain, nonatomic) CMMotionManager *singArray; // @synthesize singArray=_singArray;
@property(nonatomic) _Bool isMotionAvailable; // @synthesize isMotionAvailable=_isMotionAvailable;
@property _Bool figCount; // @synthesize figCount=_figCount;
- (void)dealloc;
- (void)ms_stopDeviceMotionUpdates;
- (_Bool)ms_startMotionDeviceUpdates;
- (_Bool)start:(_Bool)arg1;
- (_Bool)ms_start;
- (id)init;

@end

