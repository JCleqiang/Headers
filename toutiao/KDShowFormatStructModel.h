//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface KDShowFormatStructModel : WDBaseModel
{
    NSString<Optional> *_font_size;
    NSString<Optional> *_answer_full_context_color;
    NSNumber<Optional> *_show_module;
}

@property(retain, nonatomic) NSNumber<Optional> *show_module; // @synthesize show_module=_show_module;
@property(retain, nonatomic) NSString<Optional> *answer_full_context_color; // @synthesize answer_full_context_color=_answer_full_context_color;
@property(retain, nonatomic) NSString<Optional> *font_size; // @synthesize font_size=_font_size;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

