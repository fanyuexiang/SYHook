//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface TYCyclePagerViewLayout : NSObject
{
    _Bool _isInfiniteLoop;
    _Bool _adjustSpacingWhenScroling;
    _Bool _itemVerticalCenter;
    _Bool _itemHorizontalCenter;
    double _itemSpacing;
    unsigned long long _layoutType;
    double _minimumScale;
    double _minimumAlpha;
    double _maximumAngle;
    double _rateOfChange;
    UIView *_pageView;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionInset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *pageView; // @synthesize pageView=_pageView;
@property(nonatomic) _Bool itemHorizontalCenter; // @synthesize itemHorizontalCenter=_itemHorizontalCenter;
@property(nonatomic) _Bool itemVerticalCenter; // @synthesize itemVerticalCenter=_itemVerticalCenter;
@property(nonatomic) _Bool adjustSpacingWhenScroling; // @synthesize adjustSpacingWhenScroling=_adjustSpacingWhenScroling;
@property(nonatomic) double rateOfChange; // @synthesize rateOfChange=_rateOfChange;
@property(nonatomic) _Bool isInfiniteLoop; // @synthesize isInfiniteLoop=_isInfiniteLoop;
@property(nonatomic) double maximumAngle; // @synthesize maximumAngle=_maximumAngle;
@property(nonatomic) double minimumAlpha; // @synthesize minimumAlpha=_minimumAlpha;
@property(nonatomic) double minimumScale; // @synthesize minimumScale=_minimumScale;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) struct UIEdgeInsets middleSectionInset;
@property(readonly, nonatomic) struct UIEdgeInsets lastSectionInset;
@property(readonly, nonatomic) struct UIEdgeInsets firstSectionInset;
@property(readonly, nonatomic) struct UIEdgeInsets onlyOneSectionInset;
- (id)init;

@end

