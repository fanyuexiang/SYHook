//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MtopExtRequest, MtopService, NSString;
@protocol MtopExtRequestDelegate;

@interface MtopApiRequest : NSObject
{
    NSString *_h5URL;
    NSString *_customHost;
    MtopExtRequest *_request;
    NSString *_serviceID;
    MtopService *_mtopService;
    id <MtopExtRequestDelegate> _delegate;
}

@property(nonatomic) __weak id <MtopExtRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MtopService *mtopService; // @synthesize mtopService=_mtopService;
@property(copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(retain, nonatomic) MtopExtRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *customHost; // @synthesize customHost=_customHost;
@property(retain, nonatomic) NSString *h5URL; // @synthesize h5URL=_h5URL;
- (void).cxx_destruct;
- (void)generateMtopRequest;
- (void)async;
- (id)withDelegate:(id)arg1;
- (id)useWUA:(int)arg1;
- (id)addHeaders:(id)arg1;
- (id)addHeader:(id)arg1 forKey:(id)arg2;
- (id)addParameters:(id)arg1;
- (id)addParameter:(id)arg1 forKey:(id)arg2;
- (id)addHttpParameters:(id)arg1;
- (id)addHttpParameter:(id)arg1 forKey:(id)arg2;
- (id)setTtid:(id)arg1;
- (id)setSessionOption:(long long)arg1;
- (id)useEcode;
- (id)useHttpPost;
- (id)useHttps;
- (id)setMtopServiceID:(id)arg1;
- (id)initWithApiName:(id)arg1 version:(id)arg2;

@end

