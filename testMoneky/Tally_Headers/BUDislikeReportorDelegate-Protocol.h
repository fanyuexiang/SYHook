//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUPersonalizationPrompts, NSArray, NSString;

@protocol BUDislikeReportorDelegate <NSObject>

@optional
- (void)dislikeDidLoadPersonalizationPromptsURL:(BUPersonalizationPrompts *)arg1;
- (void)dislikeDidSelectedPersonalizationPrompts:(BUPersonalizationPrompts *)arg1;
- (void)dislikeDidShowPersonalizationPrompts:(BUPersonalizationPrompts *)arg1;
- (void)dislikeDidSubmitFeedback:(NSString *)arg1;
- (void)dislikeDidSelected:(NSArray *)arg1;
@end

