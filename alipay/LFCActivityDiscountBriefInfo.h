//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LFCToString.h"

@class NSString;

@interface LFCActivityDiscountBriefInfo : LFCToString
{
    NSString *_discountID;
    long long _startTime;
    long long _endTime;
    NSString *_imageUrl;
    NSString *_url;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *discountID; // @synthesize discountID=_discountID;
- (void).cxx_destruct;

@end
