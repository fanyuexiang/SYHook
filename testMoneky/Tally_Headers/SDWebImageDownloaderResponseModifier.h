//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDWebImageDownloaderResponseModifier-Protocol.h"

@class NSString;

@interface SDWebImageDownloaderResponseModifier : NSObject <SDWebImageDownloaderResponseModifier>
{
    CDUnknownBlockType _block;
}

+ (id)responseModifierWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (id)modifiedResponseWithResponse:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithStatusCode:(long long)arg1 version:(id)arg2 headers:(id)arg3;
- (id)initWithHeaders:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (id)initWithStatusCode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

