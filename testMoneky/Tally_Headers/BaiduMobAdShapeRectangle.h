//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdKeyframeGroup, NSString;

@interface BaiduMobAdShapeRectangle : NSObject
{
    _Bool _reversed;
    NSString *_keyname;
    BaiduMobAdKeyframeGroup *_position;
    BaiduMobAdKeyframeGroup *_size;
    BaiduMobAdKeyframeGroup *_cornerRadius;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *size; // @synthesize size=_size;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *position; // @synthesize position=_position;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

