//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BU_SDWebImageOptionsProcessor-Protocol.h"

@class NSString;

@interface BU_SDWebImageOptionsProcessor : NSObject <BU_SDWebImageOptionsProcessor>
{
    CDUnknownBlockType _block;
}

+ (id)optionsProcessorWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (id)processedResultForURL:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

