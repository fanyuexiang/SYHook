//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADServerTransaction, NSDictionary;

@protocol GADAdRendering <NSObject>
+ (id)alloc;
- (void)renderWithServerTransaction:(GADServerTransaction *)arg1 adConfiguration:(NSDictionary *)arg2 completionHandler:(void (^)(NSArray *, NSArray *, GADAdRenderingMetadata *))arg3;
- (id)init;

@optional
- (void)invalidateAndCancel;
@end

