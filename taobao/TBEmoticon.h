//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface TBEmoticon : NSObject
{
    int _type;
    NSString *_title;
    NSString *_code;
    UIImage *_image;
}

+ (id)emoticonWithType:(int)arg1 title:(id)arg2 code:(id)arg3 image:(id)arg4;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
