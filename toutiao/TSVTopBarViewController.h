//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWEAwemeMusicInfoView, CAGradientLayer, TSVControlOverlayViewModel, UIButton, UIImageView, UILabel, UIView;

@interface TSVTopBarViewController : UIViewController
{
    TSVControlOverlayViewModel *_viewModel;
    UIButton *_closeButton;
    UIView *_centerContainer;
    UIButton *_logoButton;
    AWEAwemeMusicInfoView *_musicInfoView;
    UIButton *_moreButton;
    CAGradientLayer *_gradientLayer;
    UIView *_loadingContainer;
    UIImageView *_loadingIcon;
    UILabel *_loadingLabel;
}

@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIImageView *loadingIcon; // @synthesize loadingIcon=_loadingIcon;
@property(retain, nonatomic) UIView *loadingContainer; // @synthesize loadingContainer=_loadingContainer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) AWEAwemeMusicInfoView *musicInfoView; // @synthesize musicInfoView=_musicInfoView;
@property(retain, nonatomic) UIButton *logoButton; // @synthesize logoButton=_logoButton;
@property(retain, nonatomic) UIView *centerContainer; // @synthesize centerContainer=_centerContainer;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) TSVControlOverlayViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)layoutContainerView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)logoButtonDidClick:(id)arg1;
- (void)moreButtonDidClick:(id)arg1;
- (void)closeButtonDidClick:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end
