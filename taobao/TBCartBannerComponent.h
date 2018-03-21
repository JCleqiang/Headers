//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCartDataComponent.h"

@class NSArray, NSString;

@interface TBCartBannerComponent : TBCartDataComponent
{
    _Bool _hasClose;
    NSArray *_highlightList;
    NSString *_closedUrl;
    NSString *_channel;
}

@property(nonatomic) _Bool hasClose; // @synthesize hasClose=_hasClose;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *closedUrl; // @synthesize closedUrl=_closedUrl;
@property(retain, nonatomic) NSArray *highlightList; // @synthesize highlightList=_highlightList;
- (void).cxx_destruct;
- (id)key;
@property(retain, nonatomic) NSString *contentDesc;
@property(nonatomic) _Bool enableClose;
@property(nonatomic) long long textDisturbCloseSeconds;
@property(retain, nonatomic) NSString *iconUrl;
@property(nonatomic) double rate;
@property(retain, nonatomic) NSString *textBgColor;
@property(retain, nonatomic) NSString *textColor;
@property(retain, nonatomic) NSString *url;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) NSString *pic;

@end
