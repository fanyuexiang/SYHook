//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJDynamicCreativeAppModel, CSJDynamicCreativeIconModel, CSJDynamicCreativeVideoModel, NSArray, NSDictionary, NSString;

@interface CSJDynamicCreativeModel : NSObject
{
    NSDictionary *_originDictionary;
    CSJDynamicCreativeAppModel *_app;
    long long _app_size;
    NSString *_button_text;
    long long _comment_num;
    NSString *_creative_description;
    NSString *_dynamic_creative;
    NSDictionary *_dynamic_creativeDict;
    CSJDynamicCreativeIconModel *_icon;
    NSArray *_image;
    long long _image_mode;
    long long _interaction_type;
    double _score;
    NSString *_title;
    CSJDynamicCreativeVideoModel *_video;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJDynamicCreativeVideoModel *video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) long long interaction_type; // @synthesize interaction_type=_interaction_type;
@property(nonatomic) long long image_mode; // @synthesize image_mode=_image_mode;
@property(copy, nonatomic) NSArray *image; // @synthesize image=_image;
@property(retain, nonatomic) CSJDynamicCreativeIconModel *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSDictionary *dynamic_creativeDict; // @synthesize dynamic_creativeDict=_dynamic_creativeDict;
@property(copy, nonatomic) NSString *dynamic_creative; // @synthesize dynamic_creative=_dynamic_creative;
@property(copy, nonatomic) NSString *creative_description; // @synthesize creative_description=_creative_description;
@property(nonatomic) long long comment_num; // @synthesize comment_num=_comment_num;
@property(copy, nonatomic) NSString *button_text; // @synthesize button_text=_button_text;
@property(nonatomic) long long app_size; // @synthesize app_size=_app_size;
@property(retain, nonatomic) CSJDynamicCreativeAppModel *app; // @synthesize app=_app;
@property(copy, nonatomic) NSDictionary *originDictionary; // @synthesize originDictionary=_originDictionary;
- (long long)comment_num_i18n;
- (double)score_exact_i18n;
- (id)initWithDictionary:(id)arg1;

@end

