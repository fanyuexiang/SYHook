//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CSJUgenVideoPlaceholderWidget;

@interface CSJUgenVideoView : UIView
{
    _Bool _isFittingSize;
    CSJUgenVideoPlaceholderWidget *_widget;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFittingSize; // @synthesize isFittingSize=_isFittingSize;
@property(nonatomic) __weak CSJUgenVideoPlaceholderWidget *widget; // @synthesize widget=_widget;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

