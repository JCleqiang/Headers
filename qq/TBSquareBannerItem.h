//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface TBSquareBannerItem : QQModel
{
    NSString *_item_id;
    NSString *_image;
    NSString *_jump_target_action;
}

+ (id)createWithData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *jump_target_action; // @synthesize jump_target_action=_jump_target_action;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
- (void)dealloc;

@end

