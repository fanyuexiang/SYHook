//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJAdSlot, CSJMaterialMeta, UIViewController;
@protocol CSJUgenWebViewWidgetDelegate;

@interface CSJUgenWebViewParamModel : NSObject
{
    id <CSJUgenWebViewWidgetDelegate> _delegate;
    UIViewController *_parentVC;
    CSJAdSlot *_adSlot;
    CSJMaterialMeta *_materialMeta;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(retain, nonatomic) CSJAdSlot *adSlot; // @synthesize adSlot=_adSlot;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) __weak id <CSJUgenWebViewWidgetDelegate> delegate; // @synthesize delegate=_delegate;

@end

