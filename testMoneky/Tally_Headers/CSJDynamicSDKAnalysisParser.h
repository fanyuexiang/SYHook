//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJDynamicNativeViewModel, CSJDynamicSDKAnalysisRenderCanvas, CSJDynamicSDKCustomComponentManager, NSError;

@interface CSJDynamicSDKAnalysisParser : NSObject
{
    NSError *_error;
    CSJDynamicNativeViewModel *_nativeViewModel;
    CSJDynamicSDKAnalysisRenderCanvas *_canvas;
    CSJDynamicSDKCustomComponentManager *_customComponentManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJDynamicSDKCustomComponentManager *customComponentManager; // @synthesize customComponentManager=_customComponentManager;
@property(retain, nonatomic) CSJDynamicSDKAnalysisRenderCanvas *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) CSJDynamicNativeViewModel *nativeViewModel; // @synthesize nativeViewModel=_nativeViewModel;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)h5_getLayoutInfo_dicitionary:(id)arg1 infoViewModel:(id)arg2 defaultDict:(id)arg3;
- (id)init;

@end

