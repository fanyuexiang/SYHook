//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUADServiceProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class NSURL, UIImage, UIImageView;
@protocol BUADServiceImageOperation;

@protocol BUADServiceImageProtocol <NSObject, BUADServiceProtocol>
- (UIImage *)imageFromCacheForURL:(NSURL *)arg1;
- (id <BUADServiceImageOperation>)loadImageWithURL:(NSURL *)arg1 completed:(void (^)(UIImage *, NSData *, NSError *, long long, _Bool, NSURL *))arg2;
- (void)setImageViewTarget:(UIImageView *)arg1 imageWithURL:(NSURL *)arg2 completed:(void (^)(UIImage *, NSError *, long long, NSURL *))arg3;
- (void)setMaxMemoryCost:(unsigned long long)arg1;
- (void)setMaxMemoryCount:(unsigned long long)arg1;
@end

