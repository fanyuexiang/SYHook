//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBAttributedLabel.h"

@interface IndentLabel : CBAttributedLabel
{
    double _headIndent;
    double _tailIndent;
}

@property(nonatomic) double tailIndent; // @synthesize tailIndent=_tailIndent;
@property(nonatomic) double headIndent; // @synthesize headIndent=_headIndent;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;

@end

