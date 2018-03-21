//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PAAdMsgPageViewController.h>

#import <QQMainProject/PAAdMsgVCDelegate-Protocol.h>
#import <QQMainProject/PANativeAdBannerEventProtocol-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PANativeAdBanner, PANativeAdModel, UIView;

@interface PANativeAdCoverVC : PAAdMsgPageViewController <UIActionSheetDelegate, PAAdMsgVCDelegate, PANativeAdBannerEventProtocol>
{
    _Bool _lastVCNaviBarHidden;
    _Bool _lastVCStatusBarHidden;
    PANativeAdModel *_adModel;
    NSMutableDictionary *_adModelVCDic;
    unsigned long long _openSource;
    PANativeAdBanner *_bottomBanner;
    UIView *_upSlideView;
    NSMutableArray *_upSlideViewArray;
    unsigned long long _maxPageRead;
}

@property(nonatomic) unsigned long long maxPageRead; // @synthesize maxPageRead=_maxPageRead;
@property(nonatomic) _Bool lastVCStatusBarHidden; // @synthesize lastVCStatusBarHidden=_lastVCStatusBarHidden;
@property(nonatomic) _Bool lastVCNaviBarHidden; // @synthesize lastVCNaviBarHidden=_lastVCNaviBarHidden;
@property(retain, nonatomic) NSMutableArray *upSlideViewArray; // @synthesize upSlideViewArray=_upSlideViewArray;
@property(retain, nonatomic) UIView *upSlideView; // @synthesize upSlideView=_upSlideView;
@property(retain, nonatomic) PANativeAdBanner *bottomBanner; // @synthesize bottomBanner=_bottomBanner;
@property(nonatomic) unsigned long long openSource; // @synthesize openSource=_openSource;
@property(retain, nonatomic) NSMutableDictionary *adModelVCDic; // @synthesize adModelVCDic=_adModelVCDic;
@property(retain, nonatomic) PANativeAdModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (_Bool)needDismissWhenAVChat;
- (id)reloadModuleVCForPage:(long long)arg1;
- (id)viewControllerForPage:(long long)arg1;
- (_Bool)hasSubViewWithClassName:(id)arg1 mainView:(id)arg2;
- (void)pageViewController:(id)arg1 didShowPage:(long long)arg2;
- (unsigned long long)numberOfPage;
- (void)adBannerRightBtnClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickMore:(id)arg1;
- (void)onClickBack:(id)arg1;
- (void)addFooterBar;
- (void)startUpSlideViewAnimation;
- (id)addWideUpViewTo:(id)arg1 hasAdBanner:(_Bool)arg2;
- (void)addBottomBannerTo:(id)arg1;
- (void)addHeaderBar;
- (void)loadStatusBar;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)handleNavigationBarHide;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appDidBecomeActive;
- (id)initWithAdModel:(id)arg1 source:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
