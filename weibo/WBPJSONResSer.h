//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPHTTPResSer.h"

@interface WBPJSONResSer : WBPHTTPResSer
{
    _Bool _removesKeysWithNullValues;
    unsigned long long _readingOptions;
}

+ (id)sWRO:(unsigned long long)arg1;
+ (id)s;
+ (id)DMD;
@property(nonatomic) _Bool removesKeysWithNullValues; // @synthesize removesKeysWithNullValues=_removesKeysWithNullValues;
@property(nonatomic) unsigned long long readingOptions; // @synthesize readingOptions=_readingOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rOFR:(id)arg1 d:(id)arg2 e:(id *)arg3;
- (id)init;

@end

