//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUPersistence;

@interface CSJNextLoadMonitor : NSObject
{
    BUPersistence *_persistence;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) BUPersistence *persistence; // @synthesize persistence=_persistence;
- (void)recordAdShowWithSlot:(id)arg1 material:(id)arg2;
- (id)init;

@end

