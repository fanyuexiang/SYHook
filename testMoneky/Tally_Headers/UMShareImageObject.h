//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMShareObject.h"

@class NSArray;

@interface UMShareImageObject : UMShareObject
{
    id _shareImage;
    NSArray *_shareImageArray;
    NSArray *_shareAssetsArray;
}

+ (id)shareObjectWithTitle:(id)arg1 descr:(id)arg2 thumImage:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *shareAssetsArray; // @synthesize shareAssetsArray=_shareAssetsArray;
@property(copy, nonatomic) NSArray *shareImageArray; // @synthesize shareImageArray=_shareImageArray;
@property(retain, nonatomic) id shareImage; // @synthesize shareImage=_shareImage;

@end

