//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSString;

@interface TallyLedgerListCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    NSString *_beginCenter;
    NSString *_firstMovedCenter;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *firstMovedCenter; // @synthesize firstMovedCenter=_firstMovedCenter;
@property(copy, nonatomic) NSString *beginCenter; // @synthesize beginCenter=_beginCenter;
- (void)endXYOffset;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (void)prepareLayout;

@end

