//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, WCChapterInfo;

@interface WCAdvanceCourseTableViewCell : UITableViewCell
{
    UIView *_whitebg;
    UILabel *_nameLabel;
    UIImageView *_statusicon;
    UIView *_intervalline;
    WCChapterInfo *_chapterinfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) WCChapterInfo *chapterinfo; // @synthesize chapterinfo=_chapterinfo;
- (void)refreshStatus:(long long)arg1 with:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

