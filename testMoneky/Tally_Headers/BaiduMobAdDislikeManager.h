//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaiduMobAdDislikeViewDelegate-Protocol.h"

@class BaiduMobAdDislikeView, BaiduMobAdInstance, NSString, UIViewController;
@protocol BaiduMobAdDislikeDelegate;

@interface BaiduMobAdDislikeManager : NSObject <BaiduMobAdDislikeViewDelegate>
{
    _Bool _isAllowMultipleShow;
    _Bool _isSendedDislikeReason;
    BaiduMobAdDislikeView *_dislikeView;
    UIViewController *_baseVC;
    id <BaiduMobAdDislikeDelegate> _delegate;
    BaiduMobAdInstance *_adInstance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaiduMobAdInstance *adInstance; // @synthesize adInstance=_adInstance;
@property(nonatomic) __weak id <BaiduMobAdDislikeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSendedDislikeReason; // @synthesize isSendedDislikeReason=_isSendedDislikeReason;
@property(nonatomic) _Bool isAllowMultipleShow; // @synthesize isAllowMultipleShow=_isAllowMultipleShow;
@property(nonatomic) __weak UIViewController *baseVC; // @synthesize baseVC=_baseVC;
@property(retain, nonatomic) BaiduMobAdDislikeView *dislikeView; // @synthesize dislikeView=_dislikeView;
- (void)sendDislikeReasonLog:(long long)arg1;
- (id)monDislikeArray;
- (id)moniterDictionary;
- (void)dislikeViewReasonSelected:(long long)arg1;
- (void)removeDislike;
- (void)showDislikeViewWithToast:(_Bool)arg1;
- (id)initWithDislikeViewStyle:(int)arg1 adInstance:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

