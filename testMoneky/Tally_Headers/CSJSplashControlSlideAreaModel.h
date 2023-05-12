//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJModelSerialization-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface CSJSplashControlSlideAreaModel : NSObject <NSSecureCoding, CSJModelSerialization>
{
    _Bool _isLandScape;
    long long _topMargin;
    long long _leftMargin;
    long long _bottomMargin;
    long long _rightMargin;
}

+ (id)fromDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isLandScape; // @synthesize isLandScape=_isLandScape;
@property(nonatomic) long long rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) long long bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) long long leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) long long topMargin; // @synthesize topMargin=_topMargin;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLandScape:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

