//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, UIColor, UIImage;

@interface TYPageControl : UIControl
{
    _Bool _hidesForSinglePage;
    _Bool _forceUpdate;
    long long _numberOfPages;
    long long _currentPage;
    double _pageIndicatorSpaing;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    UIImage *_pageIndicatorImage;
    UIImage *_currentPageIndicatorImage;
    long long _indicatorImageContentMode;
    double _animateDuring;
    NSArray *_indicatorViews;
    struct CGSize _pageIndicatorSize;
    struct CGSize _currentPageIndicatorSize;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(retain, nonatomic) NSArray *indicatorViews; // @synthesize indicatorViews=_indicatorViews;
@property(nonatomic) double animateDuring; // @synthesize animateDuring=_animateDuring;
@property(nonatomic) struct CGSize currentPageIndicatorSize; // @synthesize currentPageIndicatorSize=_currentPageIndicatorSize;
@property(nonatomic) struct CGSize pageIndicatorSize; // @synthesize pageIndicatorSize=_pageIndicatorSize;
@property(nonatomic) long long indicatorImageContentMode; // @synthesize indicatorImageContentMode=_indicatorImageContentMode;
@property(retain, nonatomic) UIImage *currentPageIndicatorImage; // @synthesize currentPageIndicatorImage=_currentPageIndicatorImage;
@property(retain, nonatomic) UIImage *pageIndicatorImage; // @synthesize pageIndicatorImage=_pageIndicatorImage;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double pageIndicatorSpaing; // @synthesize pageIndicatorSpaing=_pageIndicatorSpaing;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void)layoutSubviews;
- (void)layoutIndicatorViews;
- (void)updateIndicatorViewsBehavior;
- (void)updateIndicatorViews;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setCurrentPage:(long long)arg1 animate:(_Bool)arg2;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)willMoveToSuperview:(id)arg1;
- (void)configurePropertys;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

