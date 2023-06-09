//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdNumberInterpolator, BaiduMobAdPointInterpolator, BaiduMobAdSizeInterpolator, NSString;

@interface BaiduMobAdTransformInterpolator : NSObject
{
    BaiduMobAdPointInterpolator *_positionInterpolator;
    BaiduMobAdPointInterpolator *_anchorInterpolator;
    BaiduMobAdSizeInterpolator *_scaleInterpolator;
    BaiduMobAdNumberInterpolator *_rotationInterpolator;
    BaiduMobAdNumberInterpolator *_positionXInterpolator;
    BaiduMobAdNumberInterpolator *_positionYInterpolator;
    BaiduMobAdTransformInterpolator *_inputNode;
    NSString *_parentKeyName;
}

+ (id)transformForLayer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *parentKeyName; // @synthesize parentKeyName=_parentKeyName;
@property(readonly, nonatomic) BaiduMobAdNumberInterpolator *positionYInterpolator; // @synthesize positionYInterpolator=_positionYInterpolator;
@property(readonly, nonatomic) BaiduMobAdNumberInterpolator *positionXInterpolator; // @synthesize positionXInterpolator=_positionXInterpolator;
@property(readonly, nonatomic) BaiduMobAdNumberInterpolator *rotationInterpolator; // @synthesize rotationInterpolator=_rotationInterpolator;
@property(readonly, nonatomic) BaiduMobAdSizeInterpolator *scaleInterpolator; // @synthesize scaleInterpolator=_scaleInterpolator;
@property(readonly, nonatomic) BaiduMobAdPointInterpolator *anchorInterpolator; // @synthesize anchorInterpolator=_anchorInterpolator;
@property(readonly, nonatomic) BaiduMobAdPointInterpolator *positionInterpolator; // @synthesize positionInterpolator=_positionInterpolator;
@property(retain, nonatomic) BaiduMobAdTransformInterpolator *inputNode; // @synthesize inputNode=_inputNode;
- (struct CATransform3D)transformForFrame:(id)arg1;
- (_Bool)hasUpdateForFrame:(id)arg1;
- (void)initializeWithPositionX:(id)arg1 positionY:(id)arg2 position:(id)arg3 rotation:(id)arg4 anchor:(id)arg5 scale:(id)arg6;
- (id)initWithPositionX:(id)arg1 positionY:(id)arg2 rotation:(id)arg3 anchor:(id)arg4 scale:(id)arg5;
- (id)initWithPosition:(id)arg1 rotation:(id)arg2 anchor:(id)arg3 scale:(id)arg4;

@end

