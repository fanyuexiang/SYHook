//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdKeyframeGroup, NSString;

@interface BaiduMobAdShapeFill : NSObject
{
    _Bool _fillEnabled;
    _Bool _evenOddFillRule;
    NSString *_keyname;
    BaiduMobAdKeyframeGroup *_color;
    BaiduMobAdKeyframeGroup *_opacity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool evenOddFillRule; // @synthesize evenOddFillRule=_evenOddFillRule;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) BaiduMobAdKeyframeGroup *color; // @synthesize color=_color;
@property(readonly, nonatomic) _Bool fillEnabled; // @synthesize fillEnabled=_fillEnabled;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

