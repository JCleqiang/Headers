//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZEditAlbumCell.h>

@class NSString, UILabel, UITextView;

@interface QZEditAlbumInputCell : QZEditAlbumCell
{
    UILabel *_defaultLabel;
    _Bool _shouldHideDefaultLabel;
    UITextView *_inputTextView;
    NSString *_defaultStr;
}

@property(retain, nonatomic) UILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(nonatomic) _Bool shouldHideDefaultLabel; // @synthesize shouldHideDefaultLabel=_shouldHideDefaultLabel;
@property(retain, nonatomic) NSString *defaultStr; // @synthesize defaultStr=_defaultStr;
@property(retain, nonatomic) UITextView *inputTextView; // @synthesize inputTextView=_inputTextView;

@end
