//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBHCOlympicBgData : WBModelObject
{
    NSString *_title;
    NSString *_bg_url;
    NSString *_scheme;
    NSString *_bg_scheme;
}

@property(retain, nonatomic) NSString *bg_scheme; // @synthesize bg_scheme=_bg_scheme;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *bg_url; // @synthesize bg_url=_bg_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

