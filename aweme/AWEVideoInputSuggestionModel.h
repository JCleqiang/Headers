//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

@class NSString;

@interface AWEVideoInputSuggestionModel : MTLModel
{
    unsigned long long _type;
    NSString *_itemID;
    NSString *_name;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
