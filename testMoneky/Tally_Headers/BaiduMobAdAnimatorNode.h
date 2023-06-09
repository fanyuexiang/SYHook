//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdAnimationBezierPath, NSDictionary, NSNumber, NSString;

@interface BaiduMobAdAnimatorNode : NSObject
{
    _Bool _pathShouldCacheLengths;
    NSDictionary *_valueInterpolators;
    NSString *_keyname;
    NSNumber *_currentFrame;
    BaiduMobAdAnimatorNode *_inputNode;
    BaiduMobAdAnimationBezierPath *_localPath;
    BaiduMobAdAnimationBezierPath *_outputPath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pathShouldCacheLengths; // @synthesize pathShouldCacheLengths=_pathShouldCacheLengths;
@property(retain, nonatomic) BaiduMobAdAnimationBezierPath *outputPath; // @synthesize outputPath=_outputPath;
@property(retain, nonatomic) BaiduMobAdAnimationBezierPath *localPath; // @synthesize localPath=_localPath;
@property(readonly, nonatomic) BaiduMobAdAnimatorNode *inputNode; // @synthesize inputNode=_inputNode;
@property(readonly, nonatomic) NSNumber *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
@property(readonly, nonatomic) NSDictionary *valueInterpolators; // @synthesize valueInterpolators=_valueInterpolators;
- (void)setValueDelegate:(id)arg1 forKeypath:(id)arg2;
- (void)searchNodesForKeypath:(id)arg1;
- (void)rebuildOutputs;
- (void)performLocalUpdate;
- (void)logString:(id)arg1;
- (void)forceSetCurrentFrame:(id)arg1;
- (_Bool)updateWithFrame:(id)arg1 withModifierBlock:(CDUnknownBlockType)arg2 forceLocalUpdate:(_Bool)arg3;
- (_Bool)updateWithFrame:(id)arg1;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)initWithInputNode:(id)arg1 keyName:(id)arg2;

@end

