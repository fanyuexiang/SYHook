//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface WPKTimeHelper : NSObject
{
    NSDateFormatter *_ctimeDateFormatter;
}

+ (double)currentTimeStamp;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *ctimeDateFormatter; // @synthesize ctimeDateFormatter=_ctimeDateFormatter;
- (id)ctime;
- (id)init;

@end

