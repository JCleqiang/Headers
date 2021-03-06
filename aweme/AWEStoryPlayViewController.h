//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEStoryCubeDismissControllerProtocol-Protocol.h"
#import "AWEStoryDataMessage-Protocol.h"
#import "AWEVideoPlayerControllerDelegate-Protocol.h"
#import "AWEVideosCollectionViewDetailAnimationDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAwemeModel, AWEStoryCommentInputViewController, AWEStoryData, AWEStoryManager, AWEStoryPlayComponentsView, AWEStoryPlayGuideView, AWEStoryPlayLoadingView, AWEVideoPlayerController, MPVolumeView, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol AWEStoryPlayViewControllerDelegate;

@interface AWEStoryPlayViewController : UIViewController <AWEVideoPlayerControllerDelegate, AWEStoryDataMessage, UIGestureRecognizerDelegate, AWEStoryCubeDismissControllerProtocol, AWEVideosCollectionViewDetailAnimationDelegate, BTDRouterViewControllerProtocol>
{
    _Bool _userDigged;
    _Bool _isDiggRequestOnAir;
    _Bool _shouldUpdateProgressBar;
    _Bool _isShowingOtherPanel;
    _Bool _didReceiveChangeSectionMessage;
    unsigned long long _index;
    AWEStoryData *_data;
    id <AWEStoryPlayViewControllerDelegate> _delegate;
    AWEVideoPlayerController *_playerController;
    AWEStoryCommentInputViewController *_commentInputViewController;
    AWEStoryPlayComponentsView *_components;
    UILongPressGestureRecognizer *_longPressGesture;
    NSString *_comment;
    AWEStoryManager *_storyManager;
    MPVolumeView *_volumeView;
    AWEAwemeModel *_awemeModel;
    AWEStoryPlayLoadingView *_coverLoadingView;
    NSString *_awemeIDFromRouter;
    NSString *_authorIDFromRouter;
    unsigned long long _useType;
    double _playStartTimestamp;
    AWEStoryPlayGuideView *_guideView;
    UITapGestureRecognizer *_guideViewTapGesture;
    NSString *_referString;
}

+ (id)instanceWithAwemeModel:(id)arg1;
+ (id)instanceWithData:(id)arg1 storyManager:(id)arg2;
+ (void)load;
@property(nonatomic) _Bool didReceiveChangeSectionMessage; // @synthesize didReceiveChangeSectionMessage=_didReceiveChangeSectionMessage;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) UITapGestureRecognizer *guideViewTapGesture; // @synthesize guideViewTapGesture=_guideViewTapGesture;
@property(nonatomic) _Bool isShowingOtherPanel; // @synthesize isShowingOtherPanel=_isShowingOtherPanel;
@property(retain, nonatomic) AWEStoryPlayGuideView *guideView; // @synthesize guideView=_guideView;
@property(nonatomic) double playStartTimestamp; // @synthesize playStartTimestamp=_playStartTimestamp;
@property(nonatomic) unsigned long long useType; // @synthesize useType=_useType;
@property(copy, nonatomic) NSString *authorIDFromRouter; // @synthesize authorIDFromRouter=_authorIDFromRouter;
@property(copy, nonatomic) NSString *awemeIDFromRouter; // @synthesize awemeIDFromRouter=_awemeIDFromRouter;
@property(nonatomic) _Bool shouldUpdateProgressBar; // @synthesize shouldUpdateProgressBar=_shouldUpdateProgressBar;
@property(nonatomic) _Bool isDiggRequestOnAir; // @synthesize isDiggRequestOnAir=_isDiggRequestOnAir;
@property(nonatomic) _Bool userDigged; // @synthesize userDigged=_userDigged;
@property(retain, nonatomic) AWEStoryPlayLoadingView *coverLoadingView; // @synthesize coverLoadingView=_coverLoadingView;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) __weak AWEStoryManager *storyManager; // @synthesize storyManager=_storyManager;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) AWEStoryPlayComponentsView *components; // @synthesize components=_components;
@property(retain, nonatomic) AWEStoryCommentInputViewController *commentInputViewController; // @synthesize commentInputViewController=_commentInputViewController;
@property(retain, nonatomic) AWEVideoPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <AWEStoryPlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWEStoryData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)itemOffsetSincePush;
- (struct CGRect)viewControllerImageViewOriginFrame;
- (id)viewControllerImageView;
- (void)viewControllerDidFinishTransition;
- (void)viewControllerDidCancelTranstion;
- (void)viewControllerWillCancelTransition;
- (void)viewControllerWillBeginTransition;
- (void)_onVolumeChanged:(id)arg1;
- (void)storyManagerDidFinishBrowser:(id)arg1;
- (void)storyManager:(id)arg1 didDeleteUsersStoryAtIndex:(unsigned long long)arg2;
- (void)storyManager:(id)arg1 didChangeSection:(id)arg2 indexOfSection:(unsigned long long)arg3;
- (void)storyManager:(id)arg1 didChangeStory:(id)arg2 indexOfStory:(unsigned long long)arg3;
- (void)onUserInfoClickActionImpletation;
- (void)onUserInfoClickAction;
- (void)longPressAction:(id)arg1;
- (void)likeAction;
- (void)myCommentListAction;
- (void)commentAction;
- (void)_close;
- (void)closeAction;
- (void)moreAction;
- (id)_currentPlayURLString;
- (void)_cancelTimingForFirstFrame;
- (void)_checkPlayTimeout;
- (void)_cancelPendingPlayTimeoutCheck;
- (void)playbackDidFailForURL:(id)arg1 error:(id)arg2;
- (void)readyForDisplayForURL:(id)arg1;
- (void)playbackStateDidChangeForURL:(id)arg1 oldState:(long long)arg2 newState:(long long)arg3;
- (void)playbackDidFinishForURL:(id)arg1;
- (void)setData:(id)arg1 andStoryManager:(id)arg2 delegate:(id)arg3;
- (void)prepareForReuse;
- (void)prepareForDisplayForIndex:(unsigned long long)arg1;
- (void)seekPlaybackTimeToZero;
- (void)pause;
- (void)play;
- (void)_didExpire;
- (_Bool)_isActive;
- (_Bool)_isValid;
- (_Bool)_alertIfNotValid;
- (void)_didFinishPlay;
- (void)_willFinishPlay;
- (void)_didStartPlay;
- (void)_willStartPlay;
- (void)_didDeleteCurrentUsersStory;
- (void)_dismissGuideView;
- (void)_displayGuideForType:(unsigned long long)arg1;
- (void)_displayGuideIfNeeded;
- (void)_trackPlayTime;
- (void)_trackVideoPlay;
- (void)_stop;
- (void)_pause;
- (void)_playIfActive;
- (void)_fillAuthorIfNeed;
- (void)_dismissSystemVolume;
- (void)_removeCurrentStoryForHomepage;
- (void)_showMoreAlert;
- (id)_currentUserID;
- (void)_showReportAlert;
- (_Bool)_isCurrentUser;
- (void)_setUIComponentsHidden:(_Bool)arg1;
- (void)_didPlayStory;
- (void)_willPlayStory;
- (void)_resetProgressBarToIndex:(unsigned long long)arg1;
- (void)_updateProgressBar;
- (void)_preloadCoverImages;
- (void)_prepareAndPlay;
- (void)_cancelPrepareAndPlay;
- (void)_prepareAndPlayAfterReasonableDelay;
- (void)_updateUIComponents;
- (void)_updateLikeState:(id)arg1;
- (void)_loadDataWithAwemeID:(id)arg1;
- (void)_loadData;
- (void)_removeObserver;
- (void)_addObserver;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_commonInitWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

