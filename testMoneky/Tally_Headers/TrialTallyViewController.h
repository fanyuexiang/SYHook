//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AmountIndentLabel, CBBillDatePicker, KeyboardView, LabelsTextField, NSString, RecommendRemarkView, TallyTypeSelectScrollView, UIButton, UIScrollView, UIView;

@interface TrialTallyViewController : UIViewController <UITextFieldDelegate, UIScrollViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIButton *_dateButton;
    LabelsTextField *_remarksTextField;
    AmountIndentLabel *_amountLabel;
    double _lastNum;
    RecommendRemarkView *_recommendRemarkView;
    KeyboardView *_keyboardView;
    double _remarkMaxLength;
    UIView *_topLine;
    UIScrollView *_scrollView;
    TallyTypeSelectScrollView *_expenditureView;
    TallyTypeSelectScrollView *_incomeView;
    UIView *_inputView;
    CBBillDatePicker *_datePicker;
    UIView *_keyboardCoverView;
    UIView *_recommendCoverView;
    long long _tallyType;
}

+ (double)tmpTransitionCode_Nav_StatusBar_Height;
- (void).cxx_destruct;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
@property(retain, nonatomic) UIView *recommendCoverView; // @synthesize recommendCoverView=_recommendCoverView;
@property(retain, nonatomic) UIView *keyboardCoverView; // @synthesize keyboardCoverView=_keyboardCoverView;
@property(retain, nonatomic) CBBillDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)showVIP:(long long)arg1;
- (id)currentTypeSelectView;
- (void)adjustTallyTypeAndTitleLine;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)recommendcoverdismiss;
- (void)clearTallyTypeSelectStatus;
- (void)textFieldEditChanged:(id)arg1;
- (void)labelsTextFieldDeleteBackward:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldTextDidChange;
- (void)dateAction;
- (void)hideBottomView;
- (void)showErrorCalendar;
- (void)addKeyboardView;
- (void)updateTallyModel;
- (void)keyboardWillHidden:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)amountTapAction;
- (void)addMiddleView;
- (id)createTypeSelectViewWithType:(long long)arg1 frame:(struct CGRect)arg2;
- (void)addTypeSelectView;
- (void)dismissAction:(id)arg1;
- (void)tallyTypeChangeAction:(id)arg1;
- (void)tallyTypeButtonAction:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupNavView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
