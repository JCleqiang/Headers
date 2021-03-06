//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "XSearchCoordinativeScrollRecognizerExpandAndContractDelegate-Protocol.h"
#import "XSearchSDKChildBaseViewControllerDelegate-Protocol.h"
#import "XSearchScrollViewProxyDelegate-Protocol.h"
#import "XSearchTabContentProtocol-Protocol.h"

@class NSString, UIScrollView, UIView, XSearchContext, XSearchCoordinativeScrollContainerManager, XSearchCoordinativeScrollRecognizer, XSearchHeaderView, XSearchScrollViewProxy, XSearchService, XSearchSingleContainerView, XSearchTabContentComponent;
@protocol XSearchSDKDelegate;

@interface XSearchSDKViewController : UIViewController <XSearchTabContentProtocol, XSearchSDKChildBaseViewControllerDelegate, UIScrollViewDelegate, XSearchScrollViewProxyDelegate, UIGestureRecognizerDelegate, XSearchCoordinativeScrollRecognizerExpandAndContractDelegate>
{
    _Bool _resetScrollStatusWhenDisappear;
    _Bool _openDisableAutoLayoutWhenDisappear;
    _Bool _isClickedTab;
    _Bool _reSearch;
    id <XSearchSDKDelegate> _delegate;
    UIScrollView *_mainScrollView;
    XSearchService *_searchService;
    XSearchContext *_searchContext;
    XSearchHeaderView *_headerView;
    XSearchSingleContainerView *_themeView;
    UIView *_wrapperView;
    UIView *_statusBarPlaceHolderView;
    UIScrollView *_childScrollView;
    XSearchTabContentComponent *_tabContentComponent;
    XSearchCoordinativeScrollContainerManager *_coordinativeScrollContainerManager;
    XSearchCoordinativeScrollRecognizer *_coordinativeScrollRecognizer;
    XSearchScrollViewProxy *_childScrollViewProxy;
    XSearchSingleContainerView *_errorView;
    XSearchSingleContainerView *_loadingView;
}

@property(nonatomic) _Bool reSearch; // @synthesize reSearch=_reSearch;
@property(nonatomic) _Bool isClickedTab; // @synthesize isClickedTab=_isClickedTab;
@property(retain, nonatomic) XSearchSingleContainerView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) XSearchSingleContainerView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) XSearchScrollViewProxy *childScrollViewProxy; // @synthesize childScrollViewProxy=_childScrollViewProxy;
@property(retain, nonatomic) XSearchCoordinativeScrollRecognizer *coordinativeScrollRecognizer; // @synthesize coordinativeScrollRecognizer=_coordinativeScrollRecognizer;
@property(retain, nonatomic) XSearchCoordinativeScrollContainerManager *coordinativeScrollContainerManager; // @synthesize coordinativeScrollContainerManager=_coordinativeScrollContainerManager;
@property(retain, nonatomic) XSearchTabContentComponent *tabContentComponent; // @synthesize tabContentComponent=_tabContentComponent;
@property(retain, nonatomic) UIScrollView *childScrollView; // @synthesize childScrollView=_childScrollView;
@property(retain, nonatomic) UIView *statusBarPlaceHolderView; // @synthesize statusBarPlaceHolderView=_statusBarPlaceHolderView;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(nonatomic) _Bool openDisableAutoLayoutWhenDisappear; // @synthesize openDisableAutoLayoutWhenDisappear=_openDisableAutoLayoutWhenDisappear;
@property(retain, nonatomic) XSearchSingleContainerView *themeView; // @synthesize themeView=_themeView;
@property(retain, nonatomic) XSearchHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) XSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(retain, nonatomic) XSearchService *searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(nonatomic) _Bool resetScrollStatusWhenDisappear; // @synthesize resetScrollStatusWhenDisappear=_resetScrollStatusWhenDisappear;
@property(nonatomic) __weak id <XSearchSDKDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showChiTu;
- (void)showChiTuLogoWhenReady;
- (void)chituRun;
- (void)chiTuInit;
- (_Bool)checkStatusViewRegister;
- (void)changeStatusViewFrame;
- (struct CGRect)getStatusViewFrame;
- (void)changeStatusViewFail:(id)arg1;
- (void)changeStatusViewSuccess;
- (void)changeStatusViewStart;
- (void)loadStatusView;
- (void)hideStatusView;
- (void)createStatusView;
- (void)showHeaderViewWithAnimated;
- (void)stopMainScrollView;
- (_Bool)enableInnerSearchBar;
- (void)disableScroll;
- (void)enableScroll;
- (double)getSearchBarViewTop;
- (void)setDefaultParser;
- (void)tabContentDidScroll:(id)arg1 positionRatio:(double)arg2;
- (void)tabContentDidEndSlidingWithIndex:(long long)arg1 ScrollView:(id)arg2;
- (void)tabContentWhenVCDidHidden:(id)arg1;
- (void)tabContentWhenVCDidShow:(id)arg1 newCreate:(_Bool)arg2;
- (void)tabContentWhenVCNewCreate:(id)arg1;
- (void)tabContentComponentChangeToModel:(id)arg1 searchService:(id)arg2;
- (void)bindSearchServiceWhenReSearch:(id)arg1;
- (void)bindSearchServiceWhenChangeTab:(id)arg1;
- (void)childVCH5FindishLoad:(id)arg1;
- (void)childVCScrollToTop;
- (void)childVCSearchFailed:(id)arg1 Error:(id)arg2;
- (void)childVCSearchSuccess:(id)arg1;
- (void)childVCSearchStart:(id)arg1;
- (void)contract:(id)arg1;
- (void)expand:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)fixSearchFail:(id)arg1;
- (void)fixSearchSuccess;
- (void)fixSearchStart;
- (void)scrollViewProxyDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCoordinativeHeaderView;
- (double)getScrollBorderValue;
- (void)dealloc;
- (void)disableAutoLayoutWhenDisappear;
- (void)addEvents;
- (void)layoutContainer;
- (void)headerLayout;
- (void)showChildVCWithSearchService:(id)arg1 errorData:(id)arg2;
- (void)dataLoaded;
- (double)getHeightOfHeaderView;
- (double)getHeightOfSearchBarView;
- (double)getBottomOfStickyView;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadCoordinativeScrollModule;
- (void)createHeaderView:(double)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (void)loadWithQuery:(id)arg1 Service:(id)arg2 Context:(id)arg3;
- (void)reloadWithQuery:(id)arg1 Service:(id)arg2 Context:(id)arg3;
- (id)initWithQuery:(id)arg1 Service:(id)arg2 Context:(id)arg3 Delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

