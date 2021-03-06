//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UISegmentedControl, UISwipeGestureRecognizer, UISwitch, UITapGestureRecognizer, UIView;

@interface NewsDetailFunctionView : SSViewBase <UIGestureRecognizerDelegate>
{
    _Bool _isDisplay;
    _Bool _dismissAfterChangeSetting;
    NSString *_umengEventName;
    UIImageView *_nightmodeImageView;
    UILabel *_nightmodeLabel;
    UISwitch *_nightModeSwitch;
    UIView *_nightModeLineView;
    UIImageView *_fontImageView;
    UILabel *_fontLabel;
    UISegmentedControl *_fontSegment;
    UIButton *_closeButton;
    UIView *_maskView;
    UITapGestureRecognizer *_tapRecognizer;
    UISwipeGestureRecognizer *_swipeRecognizer;
}

@property(retain, nonatomic) UISwipeGestureRecognizer *swipeRecognizer; // @synthesize swipeRecognizer=_swipeRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UISegmentedControl *fontSegment; // @synthesize fontSegment=_fontSegment;
@property(retain, nonatomic) UILabel *fontLabel; // @synthesize fontLabel=_fontLabel;
@property(retain, nonatomic) UIImageView *fontImageView; // @synthesize fontImageView=_fontImageView;
@property(retain, nonatomic) UIView *nightModeLineView; // @synthesize nightModeLineView=_nightModeLineView;
@property(retain, nonatomic) UISwitch *nightModeSwitch; // @synthesize nightModeSwitch=_nightModeSwitch;
@property(retain, nonatomic) UILabel *nightmodeLabel; // @synthesize nightmodeLabel=_nightmodeLabel;
@property(retain, nonatomic) UIImageView *nightmodeImageView; // @synthesize nightmodeImageView=_nightmodeImageView;
@property(nonatomic) _Bool dismissAfterChangeSetting; // @synthesize dismissAfterChangeSetting=_dismissAfterChangeSetting;
@property(retain, nonatomic) NSString *umengEventName; // @synthesize umengEventName=_umengEventName;
@property(readonly, nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)fontSegmentValueChanged:(id)arg1;
- (void)brightnessSliderValueChanged:(id)arg1;
- (void)nightModeSwitchChanged:(id)arg1;
- (void)close:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)swiped:(id)arg1;
- (void)tapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

