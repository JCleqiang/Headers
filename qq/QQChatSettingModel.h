//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQIconModel.h>

@class NSString;

@interface QQChatSettingModel : QQIconModel
{
    int _style;
    NSString *_key;
    _Bool _selected;
    _Bool _enabled;
}

+ (id)CreateModel:(int)arg1 key:(id)arg2 image:(id)arg3 title:(id)arg4 selected:(_Bool)arg5;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)dealloc;

@end
