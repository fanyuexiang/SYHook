//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTDLViewNode, UITouch, UIView;

@interface GDTDLGestureParams : NSObject
{
    GDTDLViewNode *_node;
    UIView *_rootView;
    UITouch *_touch;
    struct CGPoint _beganPoint;
}

@property(nonatomic) struct CGPoint beganPoint; // @synthesize beganPoint=_beganPoint;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) GDTDLViewNode *node; // @synthesize node=_node;
- (void).cxx_destruct;

@end

