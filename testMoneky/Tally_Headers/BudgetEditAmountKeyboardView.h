//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface BudgetEditAmountKeyboardView : UIView
{
    CDUnknownBlockType _digitBlock;
    CDUnknownBlockType _deleteBlock;
}

+ (double)keyboarViewHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType digitBlock; // @synthesize digitBlock=_digitBlock;
- (void)playSound:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)digitButtonAction:(id)arg1;
- (void)addKeyboard;
- (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

