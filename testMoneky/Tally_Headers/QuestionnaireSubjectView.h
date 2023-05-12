//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSDictionary, UIButton, UITextView;

@interface QuestionnaireSubjectView : UIScrollView
{
    UIButton *_selectedBtn;
    UITextView *_textView;
    NSDictionary *_data;
    CDUnknownBlockType _selectedSubjectHandle;
    CDUnknownBlockType _commitHandle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType commitHandle; // @synthesize commitHandle=_commitHandle;
@property(copy, nonatomic) CDUnknownBlockType selectedSubjectHandle; // @synthesize selectedSubjectHandle=_selectedSubjectHandle;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (id)answer;
- (id)commitInfo;
- (void)tapGestureAction;
- (void)commitButtonAction;
- (void)subjectButtonAction:(id)arg1;

@end

