//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZVideoPlayerToolbar.h>

@class UIButton;
@protocol KDVideoPlayerToolbarDelegate;

@interface KDVideoPlayerToolbar : QZVideoPlayerToolbar
{
    _Bool _isOneToThree;
    _Bool _showFullscreenButton;
    id <KDVideoPlayerToolbarDelegate> _kdDelegate;
    UIButton *_fullScreenButton;
    UIButton *_volumeControlBtn;
}

@property(nonatomic) _Bool showFullscreenButton; // @synthesize showFullscreenButton=_showFullscreenButton;
@property(nonatomic) _Bool isOneToThree; // @synthesize isOneToThree=_isOneToThree;
@property(retain, nonatomic) UIButton *volumeControlBtn; // @synthesize volumeControlBtn=_volumeControlBtn;
@property(retain, nonatomic) UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(nonatomic) __weak id <KDVideoPlayerToolbarDelegate> kdDelegate; // @synthesize kdDelegate=_kdDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)volumeControlBtnDidClick:(id)arg1;
- (void)fullScreenButtonDidClick:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
