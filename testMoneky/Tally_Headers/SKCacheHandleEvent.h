//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SKCacheController;

@interface SKCacheHandleEvent : NSObject
{
    SKCacheController *_controller;
    NSMutableSet *_deleteFileNames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *deleteFileNames; // @synthesize deleteFileNames=_deleteFileNames;
@property(nonatomic) __weak SKCacheController *controller; // @synthesize controller=_controller;
- (void)clearTmpCacheAction:(id)arg1;
- (void)loadTmpCacheAction:(id)arg1;
- (void)clearTallyImageCacheActionNext:(id)arg1;
- (void)clearTallyImageCacheAction:(id)arg1;
- (void)loadTallyImageCacheAction:(id)arg1;

@end
