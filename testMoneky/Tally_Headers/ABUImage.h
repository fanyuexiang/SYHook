//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIImage;

@interface ABUImage : NSObject
{
    float _width;
    float _height;
    float _scale;
    UIImage *_image;
    NSURL *_imageURL;
}

- (void).cxx_destruct;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)init;

@end

