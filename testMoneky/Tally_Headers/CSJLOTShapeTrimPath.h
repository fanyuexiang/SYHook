//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJLOTKeyframeGroup, NSString;

@interface CSJLOTShapeTrimPath : NSObject
{
    NSString *_keyname;
    CSJLOTKeyframeGroup *_start;
    CSJLOTKeyframeGroup *_end;
    CSJLOTKeyframeGroup *_offset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CSJLOTKeyframeGroup *offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) CSJLOTKeyframeGroup *end; // @synthesize end=_end;
@property(readonly, nonatomic) CSJLOTKeyframeGroup *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
