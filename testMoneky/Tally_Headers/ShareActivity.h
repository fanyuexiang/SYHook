//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSArray, NSString, UIImage;

@interface ShareActivity : UIActivity
{
    UIImage *_shareImage;
    NSString *_URL;
    NSString *_title;
    NSArray *_shareContentArray;
}

+ (long long)activityCategory;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *shareContentArray; // @synthesize shareContentArray=_shareContentArray;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (id)activityViewController;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithImage:(id)arg1 atURL:(id)arg2 atTitle:(id)arg3 atShareContentArray:(id)arg4;

@end

