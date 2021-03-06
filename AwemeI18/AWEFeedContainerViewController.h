//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "AWEFantasyMessage-Protocol.h"
#import "AWEFeedMessage-Protocol.h"
#import "AWEReferenceTrackable-Protocol.h"
#import "AWERegionMessage-Protocol.h"
#import "AWESettingMessage-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEVideoPublishTaskMessage-Protocol.h"
#import "AWEVideosCollectionViewAnimationDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "HTSAccountMessage-Protocol.h"

@class AWEAnimatedButton, AWEBubble, AWEFeedCollectionViewController, AWEFeedSegmentedControl, AWEFeedStoryButton, AWEFeedTableViewController, AWEHotListDataController, LOTAnimationView, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedContainerViewController : UIPageViewController <BTDRouterViewControllerProtocol, AWEUserMessage, HTSAccountMessage, AWEVideoPublishTaskMessage, AWEFeedMessage, AWESettingMessage, AWERegionMessage, AWEFantasyMessage, AWEVideosCollectionViewAnimationDelegate, AWEReferenceTrackable>
{
    _Bool _forbidHideStatusBar;
    _Bool _isAppear;
    _Bool _hasShowVideoRecoveryAlert;
    _Bool _processingLogin;
    _Bool _shouldShowBodydanceGuide;
    AWEFeedSegmentedControl *_segmentControl;
    UIView *_redDot;
    UIButton *_cameraButton;
    AWEFeedStoryButton *_storyButton;
    AWEAnimatedButton *_discoverButton;
    LOTAnimationView *_discoverAnimationView;
    AWEBubble *_discoverGuideBubbleView;
    UILabel *_refreshLabel;
    UIImageView *_cornerMaskView;
    UIButton *_fantasyButton;
    NSArray *_segmentedControlTitles;
    NSMutableArray *_orderedViewControllers;
    AWEFeedTableViewController *_concernViewController;
    AWEFeedCollectionViewController *_concernCollectionViewController;
    AWEHotListDataController *_hotDataController;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_hotViewController;
    unsigned long long _hotFeedStyle;
    AWEFeedCollectionViewController *_freshViewController;
    long long _currentIndex;
}

@property(nonatomic) _Bool shouldShowBodydanceGuide; // @synthesize shouldShowBodydanceGuide=_shouldShowBodydanceGuide;
@property(nonatomic) _Bool processingLogin; // @synthesize processingLogin=_processingLogin;
@property(nonatomic) _Bool hasShowVideoRecoveryAlert; // @synthesize hasShowVideoRecoveryAlert=_hasShowVideoRecoveryAlert;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) AWEFeedCollectionViewController *freshViewController; // @synthesize freshViewController=_freshViewController;
@property(nonatomic) unsigned long long hotFeedStyle; // @synthesize hotFeedStyle=_hotFeedStyle;
@property(retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *hotViewController; // @synthesize hotViewController=_hotViewController;
@property(retain, nonatomic) AWEHotListDataController *hotDataController; // @synthesize hotDataController=_hotDataController;
@property(retain, nonatomic) AWEFeedCollectionViewController *concernCollectionViewController; // @synthesize concernCollectionViewController=_concernCollectionViewController;
@property(retain, nonatomic) AWEFeedTableViewController *concernViewController; // @synthesize concernViewController=_concernViewController;
@property(retain, nonatomic) NSMutableArray *orderedViewControllers; // @synthesize orderedViewControllers=_orderedViewControllers;
@property(retain, nonatomic) NSArray *segmentedControlTitles; // @synthesize segmentedControlTitles=_segmentedControlTitles;
@property(retain, nonatomic) UIButton *fantasyButton; // @synthesize fantasyButton=_fantasyButton;
@property(retain, nonatomic) UIImageView *cornerMaskView; // @synthesize cornerMaskView=_cornerMaskView;
@property(retain, nonatomic) UILabel *refreshLabel; // @synthesize refreshLabel=_refreshLabel;
@property(retain, nonatomic) AWEBubble *discoverGuideBubbleView; // @synthesize discoverGuideBubbleView=_discoverGuideBubbleView;
@property(retain, nonatomic) LOTAnimationView *discoverAnimationView; // @synthesize discoverAnimationView=_discoverAnimationView;
@property(retain, nonatomic) AWEAnimatedButton *discoverButton; // @synthesize discoverButton=_discoverButton;
@property(retain, nonatomic) AWEFeedStoryButton *storyButton; // @synthesize storyButton=_storyButton;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) AWEFeedSegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(nonatomic) _Bool forbidHideStatusBar; // @synthesize forbidHideStatusBar=_forbidHideStatusBar;
- (void).cxx_destruct;
- (void)fantasyEntranceDidChange;
- (void)didCloseStoryView;
- (void)didOpenStoryView;
@property(readonly, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *currentViewController;
- (id)referString;
- (_Bool)enableVideosCollectionViewAnimation;
- (id)transitionViewForOffset:(long long)arg1;
- (void)_bodydanceFeedGuideDidDisappearNotification:(id)arg1;
- (void)_bodydanceFeedGuideDidAppearNotification:(id)arg1;
- (void)_windowDidResignKeyNotification:(id)arg1;
- (void)_windowDidBecomeKeyNotification:(id)arg1;
- (void)_splashViewDidDisappear:(id)arg1;
- (void)_appLaunchGuideViewDidDisppear:(id)arg1;
- (void)_onAwemeVideoPlayGuideViewTouched:(id)arg1;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)_onAwemeDeleteNotification:(id)arg1;
- (void)_onAwemePostExitNotification:(id)arg1;
- (_Bool)isActiveForBackup;
- (_Bool)isActive;
- (void)_removeNotifications;
- (void)_addNotifications;
- (void)task:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)taskWillAppend:(id)arg1;
- (void)_reloadViewControllers:(id)arg1;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishLogout;
- (void)shouldTryPlayDiscoverGuideAnimation;
- (void)didChangedLanguage;
- (void)didFinishLogin;
- (void)didCancelLogin;
- (void)showStory:(_Bool)arg1;
- (void)willLoginAtPlatform:(unsigned long long)arg1;
- (void)tabBarBackgroundColorFill;
- (void)_onSegmentControlScrollToIndex:(long long)arg1 fromUserInteraction:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_scrollToIndex:(long long)arg1;
- (void)onDiscoverButtonClicked:(id)arg1;
- (void)onFantasyButtonClicked:(id)arg1;
- (void)onCameraButtonClicked:(id)arg1;
- (void)_addCornerMaskView;
- (void)_addRefreshLabel;
- (void)removeDiscoverGuideAnimation;
- (void)playDiscoverGuideAnimation;
- (void)openStoryWithAnimation;
- (void)animateStoryButtonRefreshWhenClosed;
- (double)storyButtonAdjustment;
- (_Bool)_shouldShowFantacyEntrance;
- (void)_addStoryButtons;
- (void)_updateSegmentControl;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (void)setAccessoriesHidden:(_Bool)arg1;
- (void)dragCancellation;
- (void)stopRefreshing;
- (void)beginRefreshing;
- (void)dragWithProgress:(double)arg1;
- (void)recoveryVideoBackupIfNeed;
- (void)showFeedBodydanceGuideIfNeeded;
- (_Bool)ifStoryViewIsOpen;
- (void)pause;
- (void)playIfActive;
- (void)play;
- (void)closeStoryButton;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)animatedRefreshWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canRefresh;
- (_Bool)currentTabIsTop;
- (void)setPureMode:(_Bool)arg1;
- (void)respondsToPanLeftGestureFinish;
- (void)respondsToPanLeftGestureStart;
- (void)switchToTab:(long long)arg1;
- (void)setDiscoverButtonHidden:(_Bool)arg1;
- (void)_updateFantasyEntrance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeKVO;
- (void)_addKVO;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)forceLandToForYou;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

