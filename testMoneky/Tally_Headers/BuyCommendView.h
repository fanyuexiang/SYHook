//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface BuyCommendView : UIView
{
    UILabel *_contentLabel;
    long long _platformType;
    CDUnknownBlockType _searchHandle;
}

+ (id)showELMContent;
+ (id)showWithContent:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType searchHandle; // @synthesize searchHandle=_searchHandle;
- (void)dealloc;
- (void)searchAction;
- (void)dismissAction;
- (void)cancelAction;
- (void)show;
- (void)updateContent:(id)arg1;
- (void)setupELMContent;
- (void)setupContent:(id)arg1;

@end

