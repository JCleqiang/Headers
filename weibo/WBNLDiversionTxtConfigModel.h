//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSArray, NSString;

@interface WBNLDiversionTxtConfigModel : WBNLBaseModel
{
    NSString *_button_txt;
    NSString *_layer_txt;
    NSString *_ios_download_url;
    NSString *_button_url;
    NSString *_title;
    NSString *_top_icon;
    NSArray *_sub_title;
}

@property(copy, nonatomic) NSArray *sub_title; // @synthesize sub_title=_sub_title;
@property(copy, nonatomic) NSString *top_icon; // @synthesize top_icon=_top_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *button_url; // @synthesize button_url=_button_url;
@property(copy, nonatomic) NSString *ios_download_url; // @synthesize ios_download_url=_ios_download_url;
@property(copy, nonatomic) NSString *layer_txt; // @synthesize layer_txt=_layer_txt;
@property(copy, nonatomic) NSString *button_txt; // @synthesize button_txt=_button_txt;
- (void).cxx_destruct;

@end

