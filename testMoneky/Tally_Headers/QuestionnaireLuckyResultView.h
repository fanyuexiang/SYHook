//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UINavigationController;

@interface QuestionnaireLuckyResultView : UIView
{
    UINavigationController *_navController;
    _Bool _needBackMessageList;
}

+ (id)showLuckyResult:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needBackMessageList; // @synthesize needBackMessageList=_needBackMessageList;
- (void)dealloc;
- (void)dismiss;
- (void)lookAction;
- (void)setupContentWithResult:(id)arg1;

@end

