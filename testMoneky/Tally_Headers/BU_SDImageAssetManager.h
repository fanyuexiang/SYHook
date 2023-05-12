//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_semaphore;

@interface BU_SDImageAssetManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMapTable *_imageTable;
}

+ (id)sharedAssetManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *imageTable; // @synthesize imageTable=_imageTable;
- (void)storeImage:(id)arg1 forName:(id)arg2;
- (id)imageForName:(id)arg1;
- (id)getPathForName:(id)arg1 bundle:(id)arg2 preferredScale:(double *)arg3;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (id)init;

@end

