//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJRenderClickEventModel, NSDictionary;

@interface CSJRenderInteractionModel : NSObject
{
    long long _renderInteractionType;
    CSJRenderClickEventModel *_renderClickEventModel;
    NSDictionary *_js2NativeParams;
    NSDictionary *_native2JSParams;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *native2JSParams; // @synthesize native2JSParams=_native2JSParams;
@property(copy, nonatomic) NSDictionary *js2NativeParams; // @synthesize js2NativeParams=_js2NativeParams;
@property(retain, nonatomic) CSJRenderClickEventModel *renderClickEventModel; // @synthesize renderClickEventModel=_renderClickEventModel;
@property(nonatomic) long long renderInteractionType; // @synthesize renderInteractionType=_renderInteractionType;

@end

