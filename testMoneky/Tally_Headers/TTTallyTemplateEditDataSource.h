//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TTTallyTemplateEditDataSource : NSObject
{
    NSString *_t_id;
    NSString *_cid;
    long long _cTallyType;
    NSString *_aid;
    NSString *_lid;
    NSMutableArray *_datas;
}

+ (_Bool)nameTextFieldWithRegularRight:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) long long cTallyType; // @synthesize cTallyType=_cTallyType;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *t_id; // @synthesize t_id=_t_id;
- (id)remarkTextField;
- (id)labelTextField;
- (id)amountTextField;
- (id)assetAccountTextField;
- (id)typeTextField;
- (id)nameTextField;
- (id)data1;
- (id)data0;

@end
