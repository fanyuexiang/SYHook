//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJLOTKeyframeGroup, NSNumber, NSString;

@interface CSJLOTShapeGradientFill : NSObject
{
    _Bool _evenOddFillRule;
    NSString *_keyname;
    NSNumber *_numberOfColors;
    CSJLOTKeyframeGroup *_startPoint;
    CSJLOTKeyframeGroup *_endPoint;
    CSJLOTKeyframeGroup *_gradient;
    CSJLOTKeyframeGroup *_opacity;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool evenOddFillRule; // @synthesize evenOddFillRule=_evenOddFillRule;
@property(readonly, nonatomic) CSJLOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) CSJLOTKeyframeGroup *gradient; // @synthesize gradient=_gradient;
@property(readonly, nonatomic) CSJLOTKeyframeGroup *endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) CSJLOTKeyframeGroup *startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, nonatomic) NSNumber *numberOfColors; // @synthesize numberOfColors=_numberOfColors;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
