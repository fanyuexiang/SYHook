//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

@interface TallyLedgerTallyChooseView : UIView
{
    UIImageView *_righticon;
    _Bool _show;
    long long _chooseType;
    CDUnknownBlockType _selectedHandle;
    CDUnknownBlockType _selectedUserHandle;
    CDUnknownBlockType _dismissBlock;
    UIView *_whitebgView;
    NSMutableArray *_memberArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *memberArray; // @synthesize memberArray=_memberArray;
@property(retain, nonatomic) UIView *whitebgView; // @synthesize whitebgView=_whitebgView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType selectedUserHandle; // @synthesize selectedUserHandle=_selectedUserHandle;
@property(copy, nonatomic) CDUnknownBlockType selectedHandle; // @synthesize selectedHandle=_selectedHandle;
@property(nonatomic) long long chooseType; // @synthesize chooseType=_chooseType;
- (void)refreshMemberIndexWith:(id)arg1;
- (unsigned long long)noMembersTallyLedgerCount;
- (void)btnClick:(id)arg1;
- (void)setupView:(id)arg1 withdefault:(long long)arg2;
- (void)setup:(long long)arg1 withdefault:(long long)arg2;
- (void)dismiss;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1 tallyType:(long long)arg2 defaultindex:(long long)arg3;

@end

