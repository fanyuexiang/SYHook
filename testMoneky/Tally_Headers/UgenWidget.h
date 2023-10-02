//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UIView, UgenContext, UgenNode, UgenTimer;
@protocol UgenEventDelegate;

@interface UgenWidget : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isRecycleLayoutSubNode;
    _Bool _isExposure;
    _Bool _isShowing;
    _Bool _isAppeared;
    _Bool _isAnimation;
    float _borderRadius;
    float _borderLeftTopRadius;
    float _borderLeftBottomRadius;
    float _borderRightTopRadius;
    float _borderRightBottomRadius;
    float _borderWidth;
    UgenContext *_context;
    NSString *_nodeId;
    NSString *_tag;
    NSString *_name;
    UgenNode *_node;
    UgenWidget *_parent;
    NSString *_background;
    NSString *_backgroundDrawable;
    NSString *_borderColor;
    NSString *_visibility;
    NSString *_availability;
    NSString *_click;
    NSString *_width;
    NSString *_height;
    NSString *_ratio;
    NSString *_margin;
    NSString *_marginLeft;
    NSString *_marginRight;
    NSString *_marginTop;
    NSString *_marginBottom;
    NSString *_padding;
    NSString *_paddingLeft;
    NSString *_paddingRight;
    NSString *_paddingTop;
    NSString *_paddingBottom;
    NSString *_flexDirection;
    NSString *_flexWrap;
    NSString *_justifyContent;
    NSString *_alignItems;
    NSString *_alignContent;
    NSString *_flexGrow;
    NSString *_flexShrink;
    NSString *_flexBasis;
    NSString *_alignSelf;
    NSString *_layoutGravity;
    NSDictionary *_onTap;
    NSDictionary *_onLongTap;
    NSDictionary *_onScroll;
    NSDictionary *_onPullToRefresh;
    NSDictionary *_onLoadMore;
    NSDictionary *_onShake;
    NSDictionary *_onSlide;
    NSDictionary *_onExposure;
    NSDictionary *_onTimer;
    NSDictionary *_onDelay;
    NSDictionary *_onShow;
    NSDictionary *_onDismiss;
    NSMutableDictionary *_verticalConstraintDic;
    NSMutableDictionary *_horizontalConstraintDic;
    NSDictionary *_animatorSet;
    id <UgenEventDelegate> _eventDelegate;
    CDUnknownBlockType _ugenEventBlock;
    UgenTimer *_timer;
    NSNumber *_viewTrackerSeq;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *viewTrackerSeq; // @synthesize viewTrackerSeq=_viewTrackerSeq;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) _Bool isAppeared; // @synthesize isAppeared=_isAppeared;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isExposure; // @synthesize isExposure=_isExposure;
@property(retain, nonatomic) UgenTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType ugenEventBlock; // @synthesize ugenEventBlock=_ugenEventBlock;
@property(nonatomic) _Bool isRecycleLayoutSubNode; // @synthesize isRecycleLayoutSubNode=_isRecycleLayoutSubNode;
@property(nonatomic) __weak id <UgenEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(copy, nonatomic) NSDictionary *animatorSet; // @synthesize animatorSet=_animatorSet;
@property(retain, nonatomic) NSMutableDictionary *horizontalConstraintDic; // @synthesize horizontalConstraintDic=_horizontalConstraintDic;
@property(retain, nonatomic) NSMutableDictionary *verticalConstraintDic; // @synthesize verticalConstraintDic=_verticalConstraintDic;
@property(copy, nonatomic) NSDictionary *onDismiss; // @synthesize onDismiss=_onDismiss;
@property(copy, nonatomic) NSDictionary *onShow; // @synthesize onShow=_onShow;
@property(copy, nonatomic) NSDictionary *onDelay; // @synthesize onDelay=_onDelay;
@property(copy, nonatomic) NSDictionary *onTimer; // @synthesize onTimer=_onTimer;
@property(copy, nonatomic) NSDictionary *onExposure; // @synthesize onExposure=_onExposure;
@property(copy, nonatomic) NSDictionary *onSlide; // @synthesize onSlide=_onSlide;
@property(copy, nonatomic) NSDictionary *onShake; // @synthesize onShake=_onShake;
@property(copy, nonatomic) NSDictionary *onLoadMore; // @synthesize onLoadMore=_onLoadMore;
@property(copy, nonatomic) NSDictionary *onPullToRefresh; // @synthesize onPullToRefresh=_onPullToRefresh;
@property(copy, nonatomic) NSDictionary *onScroll; // @synthesize onScroll=_onScroll;
@property(copy, nonatomic) NSDictionary *onLongTap; // @synthesize onLongTap=_onLongTap;
@property(copy, nonatomic) NSDictionary *onTap; // @synthesize onTap=_onTap;
@property(copy, nonatomic) NSString *layoutGravity; // @synthesize layoutGravity=_layoutGravity;
@property(copy, nonatomic) NSString *alignSelf; // @synthesize alignSelf=_alignSelf;
@property(copy, nonatomic) NSString *flexBasis; // @synthesize flexBasis=_flexBasis;
@property(copy, nonatomic) NSString *flexShrink; // @synthesize flexShrink=_flexShrink;
@property(copy, nonatomic) NSString *flexGrow; // @synthesize flexGrow=_flexGrow;
@property(copy, nonatomic) NSString *alignContent; // @synthesize alignContent=_alignContent;
@property(copy, nonatomic) NSString *alignItems; // @synthesize alignItems=_alignItems;
@property(copy, nonatomic) NSString *justifyContent; // @synthesize justifyContent=_justifyContent;
@property(copy, nonatomic) NSString *flexWrap; // @synthesize flexWrap=_flexWrap;
@property(copy, nonatomic) NSString *flexDirection; // @synthesize flexDirection=_flexDirection;
@property(copy, nonatomic) NSString *paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(copy, nonatomic) NSString *paddingTop; // @synthesize paddingTop=_paddingTop;
@property(copy, nonatomic) NSString *paddingRight; // @synthesize paddingRight=_paddingRight;
@property(copy, nonatomic) NSString *paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(copy, nonatomic) NSString *padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSString *marginBottom; // @synthesize marginBottom=_marginBottom;
@property(copy, nonatomic) NSString *marginTop; // @synthesize marginTop=_marginTop;
@property(copy, nonatomic) NSString *marginRight; // @synthesize marginRight=_marginRight;
@property(copy, nonatomic) NSString *marginLeft; // @synthesize marginLeft=_marginLeft;
@property(copy, nonatomic) NSString *margin; // @synthesize margin=_margin;
@property(copy, nonatomic) NSString *ratio; // @synthesize ratio=_ratio;
@property(copy, nonatomic) NSString *height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *click; // @synthesize click=_click;
@property(copy, nonatomic) NSString *availability; // @synthesize availability=_availability;
@property(copy, nonatomic) NSString *visibility; // @synthesize visibility=_visibility;
@property(copy, nonatomic) NSString *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) float borderRightBottomRadius; // @synthesize borderRightBottomRadius=_borderRightBottomRadius;
@property(nonatomic) float borderRightTopRadius; // @synthesize borderRightTopRadius=_borderRightTopRadius;
@property(nonatomic) float borderLeftBottomRadius; // @synthesize borderLeftBottomRadius=_borderLeftBottomRadius;
@property(nonatomic) float borderLeftTopRadius; // @synthesize borderLeftTopRadius=_borderLeftTopRadius;
@property(nonatomic) float borderRadius; // @synthesize borderRadius=_borderRadius;
@property(copy, nonatomic) NSString *backgroundDrawable; // @synthesize backgroundDrawable=_backgroundDrawable;
@property(copy, nonatomic) NSString *background; // @synthesize background=_background;
@property(nonatomic) __weak UgenWidget *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) UgenNode *node; // @synthesize node=_node;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *nodeId; // @synthesize nodeId=_nodeId;
@property(nonatomic) __weak UgenContext *context; // @synthesize context=_context;
- (id)view_debugDescription;
- (_Bool)p_renderGradientView;
- (void)p_renderBorderRadius;
- (id)p_getChildWidgetFromParentWidget:(id)arg1 nodeId:(id)arg2;
- (void)p_makeWidget:(id)arg1 visiable:(_Bool)arg2;
- (id)p_constraintsWithConstraintDic:(id)arg1 key:(id)arg2 newValue:(double)arg3;
- (void)updateOriginY:(double)arg1;
- (void)updateOriginX:(double)arg1;
- (void)viewSizeDidChange:(struct CGSize)arg1;
- (id)getWidgetWithNodeId:(id)arg1;
- (void)makeVisiable:(_Bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)bindAttributeValue:(id)arg1 forKey:(id)arg2;
- (void)didDisAppear;
- (void)didAppear;
- (void)layout;
- (void)render;
@property(readonly, nonatomic) UIView *ugenView;
- (id)p_convertValuesWithDic:(id)arg1;
- (id)p_keyPathWithDic:(id)arg1;
- (id)p_timingFunctionWithDic:(id)arg1;
- (float)p_repeatCountWithDic:(id)arg1;
- (id)p_baseAnimationWithDic:(id)arg1;
- (id)p_keyframeAnimationWithDic:(id)arg1;
- (id)p_animationWithDic:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)p_interceptEvent:(id)arg1 eventType:(unsigned long long)arg2;
- (void)p_handleEvent:(id)arg1 eventExt:(id)arg2 eventType:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)p_handleOnTimerEvent;
- (void)p_handleShakeEvent;
- (void)p_handleSwipeEvent;
- (void)p_handleOnLongTapEvent;
- (void)p_handleOnTapEvent;
- (id)p_shakeAccelerometerKey;
- (void)p_bindOnShakeEvent:(double)arg1;
- (void)p_bindOnDismissEvent:(double)arg1;
- (void)p_handleDelayEvent;
- (void)p_bindOnShowEvent:(double)arg1;
- (void)p_bindOnExposureEvent:(double)arg1;
- (void)p_bindOnTimerEvent:(double)arg1;
- (void)dealloc;
- (void)handleOnLoadMoreEvent;
- (void)handleOnScrollEvent;
- (void)handleOnExposureWithParams:(id)arg1;
- (void)bindEvents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

