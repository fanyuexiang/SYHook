//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface UgenViewShowAreaTrackerItem : NSObject
{
    UIView *_view;
    CDUnknownBlockType _showAreaBlock;
    unsigned long long _sequence;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) CDUnknownBlockType showAreaBlock; // @synthesize showAreaBlock=_showAreaBlock;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;

@end
