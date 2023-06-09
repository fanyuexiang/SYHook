//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface ALBBToastView : UIView
{
    NSString *_toastText;
    UILabel *_textLabel;
}

+ (void)presentToastWithInView:(id)arg1 text:(id)arg2 duration:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSString *toastText; // @synthesize toastText=_toastText;
- (void)dismiss;
- (void)showInView:(id)arg1 duration:(double)arg2;
- (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

