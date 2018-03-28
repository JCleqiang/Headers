//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString, WDUserStructModel;
@protocol Optional;

@interface WDRedPackStructModel : WDBaseModel
{
    NSString<Optional> *_redpack_id;
    NSString<Optional> *_token;
    NSNumber<Optional> *_button_style;
    WDUserStructModel<Optional> *_user_info;
    NSString<Optional> *_subtitle;
    NSString<Optional> *_content;
}

@property(retain, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString<Optional> *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) WDUserStructModel<Optional> *user_info; // @synthesize user_info=_user_info;
@property(retain, nonatomic) NSNumber<Optional> *button_style; // @synthesize button_style=_button_style;
@property(retain, nonatomic) NSString<Optional> *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString<Optional> *redpack_id; // @synthesize redpack_id=_redpack_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
