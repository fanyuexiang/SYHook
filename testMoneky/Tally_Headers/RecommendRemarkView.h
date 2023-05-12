//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIColor, UIScrollView;

@interface RecommendRemarkView : UIView
{
    NSArray *_remarkArry;
    UIButton *_lastSelectedBtn;
    NSString *_typeID;
    UIScrollView *_scrollView;
    CDUnknownBlockType _didSelectedRemarkBlock;
    UIColor *_titleColor;
    long long _bookid;
}

+ (id)recommendRemarkForTypeID:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long bookid; // @synthesize bookid=_bookid;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) CDUnknownBlockType didSelectedRemarkBlock; // @synthesize didSelectedRemarkBlock=_didSelectedRemarkBlock;
- (id)sk_getCurrentTheme;
- (void)dealloc;
- (void)dismiss;
- (void)show;
- (void)buttonAction:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)refreshSelectedState;
- (void)setupRemark:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 needTapGesture:(_Bool)arg3;

@end

