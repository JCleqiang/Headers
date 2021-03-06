//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIActivityIndicatorView;
@protocol QQTableFootViewDelegate;

@interface QQTableFootView : UIView
{
    int _total;
    int _currentCount;
    NSString *_title;
    NSString *_content;
    NSString *_bottomImage;
    NSString *_backgroundImage;
    NSString *_backgroundHightImage;
    NSString *_startTipsWord;
    NSString *_animationTipsWord;
    UIActivityIndicatorView *_animationView;
    id <QQTableFootViewDelegate> _delegate;
    _Bool _isHightLight;
    int _style;
    int _xo;
    int _animationStatus;
    NSTimer *_animationTimer;
}

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) int style; // @dynamic style;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *animationTipsWord; // @dynamic animationTipsWord;
@property(retain, nonatomic) NSString *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) int currentCount; // @dynamic currentCount;
@property(nonatomic) id <QQTableFootViewDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) NSString *startTipsWord; // @dynamic startTipsWord;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int total; // @dynamic total;

@end

