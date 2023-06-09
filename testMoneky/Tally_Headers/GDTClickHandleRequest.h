//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTClickParam, UIViewController;
@protocol GDTClickFacadeDelegate;

@interface GDTClickHandleRequest : NSObject
{
    GDTClickParam *_clickParam;
    UIViewController *_viewController;
    id <GDTClickFacadeDelegate> _delegate;
}

@property(nonatomic) __weak id <GDTClickFacadeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) GDTClickParam *clickParam; // @synthesize clickParam=_clickParam;
- (void).cxx_destruct;

@end

