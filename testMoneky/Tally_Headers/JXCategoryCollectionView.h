//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol JXCategoryCollectionViewGestureDelegate;

@interface JXCategoryCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    NSArray *_indicators;
    id <JXCategoryCollectionViewGestureDelegate> _gestureDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <JXCategoryCollectionViewGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(retain, nonatomic) NSArray *indicators; // @synthesize indicators=_indicators;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

