//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UILabel, WCCourseRateView;

@interface WCCourseDetailRateView : UIView
{
    UILabel *_titleLabel;
    WCCourseRateView *_rateView;
    _Bool _banban_eva_status;
    long long _course_id;
    long long _cha_id;
    long long _chapter_index;
    NSDictionary *_dataInfo;
    CDUnknownBlockType _rateSuccess;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType rateSuccess; // @synthesize rateSuccess=_rateSuccess;
@property(nonatomic) _Bool banban_eva_status; // @synthesize banban_eva_status=_banban_eva_status;
@property(retain, nonatomic) NSDictionary *dataInfo; // @synthesize dataInfo=_dataInfo;
@property(nonatomic) long long chapter_index; // @synthesize chapter_index=_chapter_index;
@property(nonatomic) long long cha_id; // @synthesize cha_id=_cha_id;
@property(nonatomic) long long course_id; // @synthesize course_id=_course_id;
- (void)commitEvent;
- (void)show:(long long)arg1 with:(long long)arg2 with:(id)arg3;
- (void)endedite;
- (void)refreshHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end
