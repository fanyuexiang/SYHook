//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTFMCComponentHandler.h"

@class GDTFMCFormView, GDTMaskViewController;

@interface GDTFormComponentHandler : GDTFMCComponentHandler
{
    GDTMaskViewController *_maskViewController;
    GDTFMCFormView *_formView;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) GDTFMCFormView *formView; // @synthesize formView=_formView;
@property(retain, nonatomic) GDTMaskViewController *maskViewController; // @synthesize maskViewController=_maskViewController;
- (void).cxx_destruct;
- (void)GDTfunctionp74kPL:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

