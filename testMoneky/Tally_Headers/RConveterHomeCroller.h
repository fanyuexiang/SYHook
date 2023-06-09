//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RConveterBaseController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSNumberFormatter, NSString, RConverterButton;

@interface RConveterHomeCroller : RConveterBaseController <UITextFieldDelegate>
{
    RConverterButton *_upBtn;
    RConverterButton *_downBtn;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (void)showGDTAD;
- (void)tapGestureAction;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)calRConverter:(double)arg1 baseModel:(id)arg2 exchangeModel:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)selectedAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

