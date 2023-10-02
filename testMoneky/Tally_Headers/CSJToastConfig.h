//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface CSJToastConfig : NSObject
{
    float _duration;
    long long _postion;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    double _cornerRadius;
    NSString *_message;
    long long _alignment;
    CDUnknownBlockType _showCompletion;
    CDUnknownBlockType _dismissCompletion;
    struct CGSize _superViewSize;
    struct CGPoint _location;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletion; // @synthesize dismissCompletion=_dismissCompletion;
@property(copy, nonatomic) CDUnknownBlockType showCompletion; // @synthesize showCompletion=_showCompletion;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) struct CGSize superViewSize; // @synthesize superViewSize=_superViewSize;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) long long postion; // @synthesize postion=_postion;
- (id)init;

@end

