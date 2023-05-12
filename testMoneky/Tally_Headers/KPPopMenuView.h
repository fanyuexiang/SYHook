//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UITapGestureRecognizer;
@protocol KPPopMenuDelegate;

@interface KPPopMenuView : UIView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    id <KPPopMenuDelegate> _delegate;
    NSArray *_arrData;
    NSArray *_arrImgs;
    CDUnknownBlockType _dismiss;
    double _height;
    double _menuWidth;
    NSArray *_arrayMenuTitles;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct CGPoint _menuOrigin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *arrayMenuTitles; // @synthesize arrayMenuTitles=_arrayMenuTitles;
@property(nonatomic) double menuWidth; // @synthesize menuWidth=_menuWidth;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) struct CGPoint menuOrigin; // @synthesize menuOrigin=_menuOrigin;
@property(copy, nonatomic) CDUnknownBlockType dismiss; // @synthesize dismiss=_dismiss;
@property(copy, nonatomic) NSArray *arrImgs; // @synthesize arrImgs=_arrImgs;
@property(copy, nonatomic) NSArray *arrData; // @synthesize arrData=_arrData;
@property(nonatomic) __weak id <KPPopMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)backgroundTapped:(id)arg1;
- (id)initWithDataArr:(id)arg1 frame:(struct CGRect)arg2 menuOrigin:(struct CGPoint)arg3 menuWidth:(double)arg4 rowHeight:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

