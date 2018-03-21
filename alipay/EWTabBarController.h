//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

@class EWAgreementPopupView, EWPublishGuideView, H5WebViewController, MPBadgeView, NSDictionary;

@interface EWTabBarController : UITabBarController
{
    _Bool _firstShowPage;
    NSDictionary *_options;
    EWPublishGuideView *_publishGuideView;
    MPBadgeView *_badgeView;
    MPBadgeView *_badgeView_h5_help;
    MPBadgeView *_badgeView_h5_service;
    MPBadgeView *_badgeView_discovery;
    H5WebViewController *_myController;
    H5WebViewController *_discoveryController;
    EWAgreementPopupView *_popupView;
}

@property(retain, nonatomic) EWAgreementPopupView *popupView; // @synthesize popupView=_popupView;
@property(retain, nonatomic) H5WebViewController *discoveryController; // @synthesize discoveryController=_discoveryController;
@property(retain, nonatomic) H5WebViewController *myController; // @synthesize myController=_myController;
@property(retain, nonatomic) MPBadgeView *badgeView_discovery; // @synthesize badgeView_discovery=_badgeView_discovery;
@property(retain, nonatomic) MPBadgeView *badgeView_h5_service; // @synthesize badgeView_h5_service=_badgeView_h5_service;
@property(retain, nonatomic) MPBadgeView *badgeView_h5_help; // @synthesize badgeView_h5_help=_badgeView_h5_help;
@property(retain, nonatomic) MPBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) _Bool firstShowPage; // @synthesize firstShowPage=_firstShowPage;
@property(retain, nonatomic) EWPublishGuideView *publishGuideView; // @synthesize publishGuideView=_publishGuideView;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)promotionBizInfo;
- (void)dealloc;
- (void)backToHome;
- (_Bool)shouldAutorotate;
- (void)publishHelpButtonClicked;
- (void)publishServiceButtonClicked;
- (void)tabMenuPublishButtonClicked;
- (void)customTitleBar:(long long)arg1;
- (void)fixH5PageHeight;
- (void)logSPM:(int)arg1;
- (void)fixH5Bug:(id)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)callJSHandlerWidthWidgetInfo:(id)arg1;
- (void)setTabBarItemAttribute:(id)arg1;
- (void)setupViewControllers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (id)getBackTitle;
- (void)viewDidLoad;
- (void)setSelectedIndex:(unsigned long long)arg1 refreshWithOptions:(id)arg2;
- (id)initWithOptions:(id)arg1;

@end
