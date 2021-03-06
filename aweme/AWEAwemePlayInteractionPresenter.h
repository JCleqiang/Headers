//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEAwemeMessage-Protocol.h"

@class AWEAwemeModel, AWEAwemePlayInteractionInteractor, AWEAwemePlayInteractionRouter, AWEAwemePlayInteractionViewController, NSString;

@interface AWEAwemePlayInteractionPresenter : NSObject <AWEAwemeMessage>
{
    _Bool _alreadyShowShareGuide;
    _Bool _shareGuideIsAnimating;
    _Bool _alreadyShowAdOperationGuide;
    _Bool _adOperationGuideShowing;
    NSString *_referString;
    AWEAwemeModel *_model;
    AWEAwemePlayInteractionViewController *_viewController;
    AWEAwemePlayInteractionInteractor *_interactor;
    AWEAwemePlayInteractionRouter *_router;
}

@property(retain, nonatomic) AWEAwemePlayInteractionRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) AWEAwemePlayInteractionInteractor *interactor; // @synthesize interactor=_interactor;
@property(nonatomic) _Bool adOperationGuideShowing; // @synthesize adOperationGuideShowing=_adOperationGuideShowing;
@property(nonatomic) _Bool alreadyShowAdOperationGuide; // @synthesize alreadyShowAdOperationGuide=_alreadyShowAdOperationGuide;
@property(nonatomic) _Bool shareGuideIsAnimating; // @synthesize shareGuideIsAnimating=_shareGuideIsAnimating;
@property(nonatomic) _Bool alreadyShowShareGuide; // @synthesize alreadyShowShareGuide=_alreadyShowShareGuide;
@property(nonatomic) __weak AWEAwemePlayInteractionViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
- (void).cxx_destruct;
- (void)didTurnAweme:(id)arg1 toPrivateType:(unsigned long long)arg2;
- (void)handleVideo:(id)arg1 accept:(_Bool)arg2;
- (void)onTabBarDidChangeNotification:(id)arg1;
- (void)onSyncCommercialGoodsNotification:(id)arg1;
- (void)onSyncLiveUserNotification:(id)arg1;
- (void)onLiveBlockAudienceNotication:(id)arg1;
- (void)onVolumeChangeNotification:(id)arg1;
- (void)onGoodsListChangeNotification:(id)arg1;
- (void)onCommentTotalCountNotification:(id)arg1;
- (void)onCommentDeleteNotification:(id)arg1;
- (void)onCommentAddNotification:(id)arg1;
- (void)closeAdOperationGuide;
- (void)showAdOperationGuide;
- (void)playShareGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)checkIfShouldShowShareGuideAnimationWithPlayTimes:(long long)arg1;
- (void)setPureMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willSetPureModeBlock:(_Bool)arg1;
- (id)view;
- (void)updateShoppingCartView;
- (void)updateLiveMark;
- (void)updateDynamicLabel;
- (void)updateTagsView;
- (void)playVideoWithAnimation;
- (_Bool)isVideoPausedByClick;
- (void)dislikeVideoFromShare;
- (void)updateFollowStatus;
- (void)updateShareButton;
- (void)updateDiggCount;
- (void)playDislikeAnimation;
- (void)playLikeAnimation;
- (void)_onRelationLabelClicked_IMP:(id)arg1;
- (void)enterDiggedUser:(id)arg1;
- (void)showOSTListWithVC:(id)arg1;
- (void)_onMusicInfoViewClicked_IMP:(id)arg1;
- (void)onOriginalFlagLabelClicked_IMP:(id)arg1;
- (void)onOriginalFlagLabelClicked:(id)arg1;
- (void)enterMusicDetail:(id)arg1;
- (_Bool)onVideoPlayerViewSingleClicked:(id)arg1;
- (void)onVideoPlayerViewDoubleClicked:(id)arg1;
- (void)onDescriptionLabelClicked:(id)arg1 url:(id)arg2;
- (void)onAdDescriptionClicked:(id)arg1;
- (void)_onAdOperationViewClicked_IMP:(id)arg1;
- (void)onAdOperationViewClicked:(id)arg1;
- (void)_onLearnMoreViewClicked_IMP:(id)arg1;
- (void)onLearnMoreViewClicked:(id)arg1;
- (void)_onAuthorLabelClicked_IMP:(id)arg1;
- (void)onAuthorLabelClicked:(id)arg1;
- (void)onPoiLabelClicked_IMP:(id)arg1;
- (void)onPoiLabelClicked:(id)arg1;
- (void)_onChallengeLabelClicked_IMP:(id)arg1;
- (void)onChallengeLabelClicked:(id)arg1;
- (void)_onMusicButtonClicked_IMP:(id)arg1;
- (void)onMusicButtonClicked:(id)arg1;
- (void)onShareButtonClicked:(id)arg1;
- (void)onCommentButtonClicked:(id)arg1;
- (void)onLikeButtonClicked:(id)arg1;
- (void)_onUserAvatarViewClicked_IMP:(id)arg1;
- (void)onUserAvatarViewClicked:(id)arg1;
- (void)_onShoppingCartIconClicked_IMP:(id)arg1;
- (void)onShoppingCartIconClicked:(id)arg1;
- (_Bool)_canTransferToUserPage;
- (void)onFollowViewClicked:(id)arg1;
- (void)longPressDislikeVideo;
- (_Bool)alertIfCanNotComment;
- (_Bool)alertIfCanNotShare;
- (_Bool)alertIfNotLogin;
@property(readonly, nonatomic) long long type;
- (_Bool)isActive;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

