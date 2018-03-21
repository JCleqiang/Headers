//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

@class KSAdvertise, UIControl, UIImageView, UILabel, UIView, UIWindow;

@interface KSLaunchAdViewController : KSBaseViewController
{
    UIWindow *_adWindow;
    KSAdvertise *_advertise;
    CDUnknownBlockType _clickAd;
    UIImageView *_imageView;
    UIView *_actionView;
    UIImageView *_logoImageView;
    UIImageView *_nameImageView;
    UIControl *_skipView;
    UILabel *_skipTitleLabel;
    UIImageView *_skipArrowImageView;
}

+ (void)hideAdWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)showAd:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIImageView *skipArrowImageView; // @synthesize skipArrowImageView=_skipArrowImageView;
@property(retain, nonatomic) UILabel *skipTitleLabel; // @synthesize skipTitleLabel=_skipTitleLabel;
@property(retain, nonatomic) UIControl *skipView; // @synthesize skipView=_skipView;
@property(retain, nonatomic) UIImageView *nameImageView; // @synthesize nameImageView=_nameImageView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType clickAd; // @synthesize clickAd=_clickAd;
@property(retain, nonatomic) KSAdvertise *advertise; // @synthesize advertise=_advertise;
@property(retain, nonatomic) UIWindow *adWindow; // @synthesize adWindow=_adWindow;
- (void).cxx_destruct;
- (void)didClickSkip:(id)arg1;
- (void)viewDidLoad;

@end
