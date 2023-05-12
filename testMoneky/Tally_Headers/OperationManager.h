//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel;

@interface OperationManager : UIButton
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_btn;
    UIButton *_closeBtn;
    long long _action;
}

+ (void)getNotificationAuthorizationStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)requestOperationInfo:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)addTarget:(id)arg1 closeAction:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)updateTitle:(id)arg1 content:(id)arg2 btnTitle:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
