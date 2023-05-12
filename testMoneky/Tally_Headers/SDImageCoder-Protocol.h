//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, UIImage;

@protocol SDImageCoder <NSObject>
- (NSData *)encodedDataWithImage:(UIImage *)arg1 format:(long long)arg2 options:(NSDictionary *)arg3;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (UIImage *)decodedImageWithData:(NSData *)arg1 options:(NSDictionary *)arg2;
- (_Bool)canDecodeFromData:(NSData *)arg1;
@end

