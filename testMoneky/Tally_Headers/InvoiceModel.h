//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface InvoiceModel : NSObject
{
    NSString *_company;
    NSString *_taxID;
    NSString *_address;
    NSString *_phone;
    NSString *_bankName;
    NSString *_accountName;
    NSString *_invoiceID;
    double _rowHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(copy, nonatomic) NSString *invoiceID; // @synthesize invoiceID=_invoiceID;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *taxID; // @synthesize taxID=_taxID;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
- (id)initDict:(id)arg1;

@end

