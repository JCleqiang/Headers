//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NewYearEveSplashScreenView.h>

@class UIButton, UILabel;

@interface NewYearEveSplashScreenSayGoodbye : NewYearEveSplashScreenView
{
    UILabel *_title1Label;
    UILabel *_topLabel;
    UILabel *_centerLabel;
    UILabel *_guideLabel;
    UIButton *_viewMyRecordsButton;
}

@property(retain, nonatomic) UIButton *viewMyRecordsButton; // @synthesize viewMyRecordsButton=_viewMyRecordsButton;
@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UILabel *title1Label; // @synthesize title1Label=_title1Label;
- (void)showEnterAnimation:(CDUnknownBlockType)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)viewMyRecordsButtonPressed:(id)arg1;
- (void)constructContent;
- (id)init;
- (void)dealloc;

@end

