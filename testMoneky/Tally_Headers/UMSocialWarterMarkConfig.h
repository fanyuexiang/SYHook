//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UMSocialImageWarterMarkConfig, UMSocialStringWarterMarkConfig;

@interface UMSocialWarterMarkConfig : NSObject <NSCopying>
{
    UMSocialStringWarterMarkConfig *_stringWarterMarkConfig;
    UMSocialImageWarterMarkConfig *_imageWarterMarkConfig;
    long long _stringAndImageWarterMarkPositon;
    double _spaceBetweenStringWarterMarkAndImageWarterMark;
}

+ (id)defaultWarterMarkConfig;
- (void).cxx_destruct;
@property(nonatomic) double spaceBetweenStringWarterMarkAndImageWarterMark; // @synthesize spaceBetweenStringWarterMarkAndImageWarterMark=_spaceBetweenStringWarterMarkAndImageWarterMark;
@property(nonatomic) long long stringAndImageWarterMarkPositon; // @synthesize stringAndImageWarterMarkPositon=_stringAndImageWarterMarkPositon;
@property(retain, nonatomic) UMSocialImageWarterMarkConfig *imageWarterMarkConfig; // @synthesize imageWarterMarkConfig=_imageWarterMarkConfig;
@property(retain, nonatomic) UMSocialStringWarterMarkConfig *stringWarterMarkConfig; // @synthesize stringWarterMarkConfig=_stringWarterMarkConfig;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setUserDefinedImageWarterMarkConfig:(id)arg1;
- (void)setUserDefinedStringWarterMarkConfig:(id)arg1 imageWarterMarkConfig:(id)arg2;

@end

