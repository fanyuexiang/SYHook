//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdKeyframeGroup, NSString;

@interface BaiduMobAdShapeRepeater : NSObject
{
    NSString *_keyname;
    BaiduMobAdKeyframeGroup *_copies;
    BaiduMobAdKeyframeGroup *_offset;
    BaiduMobAdKeyframeGroup *_anchorPoint;
    BaiduMobAdKeyframeGroup *_scale;
    BaiduMobAdKeyframeGroup *_position;
    BaiduMobAdKeyframeGroup *_rotation;
    BaiduMobAdKeyframeGroup *_startOpacity;
    BaiduMobAdKeyframeGroup *_endOpacity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *endOpacity; // @synthesize endOpacity=_endOpacity;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *startOpacity; // @synthesize startOpacity=_startOpacity;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *position; // @synthesize position=_position;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *copies; // @synthesize copies=_copies;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

