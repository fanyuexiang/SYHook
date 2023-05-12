//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDWebImageDownloaderRequestModifier-Protocol.h"

@class NSString;

@interface SDWebImageDownloaderRequestModifier : NSObject <SDWebImageDownloaderRequestModifier>
{
    CDUnknownBlockType _block;
}

+ (id)requestModifierWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (id)modifiedRequestWithRequest:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithMethod:(id)arg1 headers:(id)arg2 body:(id)arg3;
- (id)initWithBody:(id)arg1;
- (id)initWithHeaders:(id)arg1;
- (id)initWithMethod:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

