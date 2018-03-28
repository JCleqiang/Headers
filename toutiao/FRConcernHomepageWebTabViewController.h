//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "FRConcernHomepageChildViewControllerProtocol-Protocol.h"
#import "FRPageStayManagerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YSWebViewDelegate-Protocol.h"

@class FRConcernTabStructModel, NSDate, NSDictionary, NSMutableArray, NSString, SSWebViewContainer, TTRNViewController, UIScrollView, UISwipeGestureRecognizer;
@protocol FRConcernHomepageViewControllerProtocol;

@interface FRConcernHomepageWebTabViewController : SSViewControllerBase <YSWebViewDelegate, FRPageStayManagerDelegate, UIGestureRecognizerDelegate, FRConcernHomepageChildViewControllerProtocol>
{
    UIScrollView *_innerScrollView;
    _Bool _isViewAppear;
    _Bool _isShowing;
    _Bool _isFirstAppearAndShowing;
    _Bool _isRNShowing;
    _Bool _hasGotUploadingList;
    SSWebViewContainer *_webView;
    id <FRConcernHomepageViewControllerProtocol> _concernHomepageViewController;
    NSString *_concernID;
    FRConcernTabStructModel *_concernTabStructModel;
    long long _index;
    NSDictionary *_extraTracks;
    UISwipeGestureRecognizer *_swipe;
    NSDate *_lastRefreshDate;
    TTRNViewController *_rnViewController;
    unsigned long long _forumTypeFlags;
    NSMutableArray *_fakeIDArray;
}

@property(nonatomic) _Bool hasGotUploadingList; // @synthesize hasGotUploadingList=_hasGotUploadingList;
@property(retain, nonatomic) NSMutableArray *fakeIDArray; // @synthesize fakeIDArray=_fakeIDArray;
@property(nonatomic) unsigned long long forumTypeFlags; // @synthesize forumTypeFlags=_forumTypeFlags;
@property(nonatomic) _Bool isRNShowing; // @synthesize isRNShowing=_isRNShowing;
@property(retain, nonatomic) TTRNViewController *rnViewController; // @synthesize rnViewController=_rnViewController;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(nonatomic) _Bool isFirstAppearAndShowing; // @synthesize isFirstAppearAndShowing=_isFirstAppearAndShowing;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipe; // @synthesize swipe=_swipe;
@property(copy, nonatomic) NSDictionary *extraTracks; // @synthesize extraTracks=_extraTracks;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) FRConcernTabStructModel *concernTabStructModel; // @synthesize concernTabStructModel=_concernTabStructModel;
@property(copy, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(nonatomic) __weak id <FRConcernHomepageViewControllerProtocol> concernHomepageViewController; // @synthesize concernHomepageViewController=_concernHomepageViewController;
@property(retain, nonatomic) SSWebViewContainer *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)didDeleteUpdate:(id)arg1;
- (void)didCancelDiggUpdate:(id)arg1;
- (void)didDigUpdate:(id)arg1;
- (id)generalDictWithTask:(id)arg1 userInfo:(id)arg2;
- (void)insertOrUpdateWithTask:(id)arg1 userInfo:(id)arg2;
- (void)deleteFakeThreadNotification:(id)arg1;
- (void)receiveTaskUpdateNotification:(id)arg1;
- (void)insertWithDatas:(id)arg1;
- (_Bool)isTaskConcernIdValid:(id)arg1;
- (id)getParametersWithURLString:(id)arg1;
- (void)pageStayRecorderWithTimeInterval:(long long)arg1 pageDisappearType:(unsigned long long)arg2;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 extraDict:(id)arg3 containExtra:(_Bool)arg4;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 containExtra:(_Bool)arg3;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2;
- (void)trackPullDownRefreshIsRN:(_Bool)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)childViewControllerDidDisappear;
- (void)refreshRNView;
- (void)refreshWebView;
- (void)childViewControllerDidAppear;
- (void)refreshWithUserClick:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didReceiveRNPullDownRefreshNotification:(id)arg1;
- (void)swipe:(id)arg1;
- (id)closestSubScrollViewOfView:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)didReceiveMemoryWarning;
- (void)setIsViewAppear:(_Bool)arg1 andIsShowing:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUpWeb;
- (_Bool)setUpRN;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConcernID:(id)arg1 concernTabStructModel:(id)arg2 threadListStructModel:(id)arg3 atIndex:(long long)arg4 extraTracks:(id)arg5 apiParameters:(id)arg6 forumTypeFlags:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
