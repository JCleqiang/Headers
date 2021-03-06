//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEBindPhoneNumberTipView, AWEUserHomeAddFriendBubbleView, AWEUserModel, AWEUserRelationView, LOTAnimationView, UIButton, UIImageView, UILabel, UIStackView, YYAnimatedImageView;
@protocol AWEFollowActionDelegate;

@interface AWEUserDetailHeaderView : UIView
{
    _Bool _isCurrentUser;
    _Bool _shouldDismissBubble;
    _Bool _isLiveBlocked;
    _Bool _homepage;
    _Bool _fromHomepage;
    _Bool _shouldHidePhoneTipBar;
    _Bool _canDownloadApp;
    AWEBindPhoneNumberTipView *_bindPhoneView;
    UIImageView *_backImageView;
    UIView *_containerView;
    YYAnimatedImageView *_avatarView;
    UIView *_avatarBaseView;
    UILabel *_nameLabel;
    UILabel *_idPrefixLabel;
    UILabel *_idLabel;
    UIView *_sepView;
    UIButton *_verificationBtn;
    UIButton *_activeMedalBtn;
    UILabel *_introLabel;
    UIButton *_locationBtn;
    UIButton *_constellationBtn;
    UIButton *_genderAndAgeButton;
    UIButton *_unknownGenderButton;
    UIButton *_unknownAgeButton;
    UIButton *_followBtn;
    UIButton *_fansBtn;
    UIButton *_praiseBtn;
    UIButton *_followPrefixBtn;
    UIButton *_fansPrefixBtn;
    UIButton *_praisePrefixBtn;
    UIButton *_shareSelfProfileBtn;
    UIButton *_addBtn;
    UIButton *_showMoreFuncBtn;
    AWEUserRelationView *_relationView;
    UIButton *_reportBtn;
    AWEUserHomeAddFriendBubbleView *_bubbleView;
    UIView *_tabView;
    UIView *_fansView;
    UIView *_weiboBindDotView;
    UIButton *_showBindedWeiboButton;
    UIButton *_downloadAppButton;
    id <AWEFollowActionDelegate> _delegate;
    LOTAnimationView *_playAnimationView;
    CDUnknownBlockType _fansViewDidChangeBlock;
    unsigned long long _headerViewShowType;
    UIButton *_fansEntranceButton;
    UIButton *_fansArrowButton;
    UIButton *_fansRectangleButton;
    AWEUserModel *_user;
    UIImageView *_bindingWeiboIconImageView;
    UILabel *_bindingWeiboHintLabel;
    UIImageView *_bindingWeiboArrowImageView;
    UILabel *_downloadAppLabel;
    UIImageView *_downloadAppArrowImageView;
    UIStackView *_socialLinkView;
    UIImageView *_youtubeImageView;
    UIImageView *_insImageView;
    UIImageView *_appleMusicImageView;
    UIImageView *_arrowView;
    double _numberFontSize;
}

@property(nonatomic) double numberFontSize; // @synthesize numberFontSize=_numberFontSize;
@property(nonatomic) _Bool canDownloadApp; // @synthesize canDownloadApp=_canDownloadApp;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *appleMusicImageView; // @synthesize appleMusicImageView=_appleMusicImageView;
@property(retain, nonatomic) UIImageView *insImageView; // @synthesize insImageView=_insImageView;
@property(retain, nonatomic) UIImageView *youtubeImageView; // @synthesize youtubeImageView=_youtubeImageView;
@property(retain, nonatomic) UIStackView *socialLinkView; // @synthesize socialLinkView=_socialLinkView;
@property(retain, nonatomic) UIImageView *downloadAppArrowImageView; // @synthesize downloadAppArrowImageView=_downloadAppArrowImageView;
@property(retain, nonatomic) UILabel *downloadAppLabel; // @synthesize downloadAppLabel=_downloadAppLabel;
@property(retain, nonatomic) UIImageView *bindingWeiboArrowImageView; // @synthesize bindingWeiboArrowImageView=_bindingWeiboArrowImageView;
@property(retain, nonatomic) UILabel *bindingWeiboHintLabel; // @synthesize bindingWeiboHintLabel=_bindingWeiboHintLabel;
@property(retain, nonatomic) UIImageView *bindingWeiboIconImageView; // @synthesize bindingWeiboIconImageView=_bindingWeiboIconImageView;
@property(readonly, nonatomic) _Bool shouldHidePhoneTipBar; // @synthesize shouldHidePhoneTipBar=_shouldHidePhoneTipBar;
@property(nonatomic) _Bool fromHomepage; // @synthesize fromHomepage=_fromHomepage;
@property(nonatomic) _Bool homepage; // @synthesize homepage=_homepage;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) UIButton *fansRectangleButton; // @synthesize fansRectangleButton=_fansRectangleButton;
@property(retain, nonatomic) UIButton *fansArrowButton; // @synthesize fansArrowButton=_fansArrowButton;
@property(retain, nonatomic) UIButton *fansEntranceButton; // @synthesize fansEntranceButton=_fansEntranceButton;
@property(nonatomic) unsigned long long headerViewShowType; // @synthesize headerViewShowType=_headerViewShowType;
@property(copy, nonatomic) CDUnknownBlockType fansViewDidChangeBlock; // @synthesize fansViewDidChangeBlock=_fansViewDidChangeBlock;
@property(nonatomic) _Bool isLiveBlocked; // @synthesize isLiveBlocked=_isLiveBlocked;
@property(retain, nonatomic) LOTAnimationView *playAnimationView; // @synthesize playAnimationView=_playAnimationView;
@property(nonatomic) __weak id <AWEFollowActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *downloadAppButton; // @synthesize downloadAppButton=_downloadAppButton;
@property(retain, nonatomic) UIButton *showBindedWeiboButton; // @synthesize showBindedWeiboButton=_showBindedWeiboButton;
@property(retain, nonatomic) UIView *weiboBindDotView; // @synthesize weiboBindDotView=_weiboBindDotView;
@property(nonatomic) _Bool shouldDismissBubble; // @synthesize shouldDismissBubble=_shouldDismissBubble;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain, nonatomic) UIView *fansView; // @synthesize fansView=_fansView;
@property(retain, nonatomic) UIView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) AWEUserHomeAddFriendBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UIButton *reportBtn; // @synthesize reportBtn=_reportBtn;
@property(retain, nonatomic) AWEUserRelationView *relationView; // @synthesize relationView=_relationView;
@property(retain, nonatomic) UIButton *showMoreFuncBtn; // @synthesize showMoreFuncBtn=_showMoreFuncBtn;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UIButton *shareSelfProfileBtn; // @synthesize shareSelfProfileBtn=_shareSelfProfileBtn;
@property(retain, nonatomic) UIButton *praisePrefixBtn; // @synthesize praisePrefixBtn=_praisePrefixBtn;
@property(retain, nonatomic) UIButton *fansPrefixBtn; // @synthesize fansPrefixBtn=_fansPrefixBtn;
@property(retain, nonatomic) UIButton *followPrefixBtn; // @synthesize followPrefixBtn=_followPrefixBtn;
@property(retain, nonatomic) UIButton *praiseBtn; // @synthesize praiseBtn=_praiseBtn;
@property(retain, nonatomic) UIButton *fansBtn; // @synthesize fansBtn=_fansBtn;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIButton *unknownAgeButton; // @synthesize unknownAgeButton=_unknownAgeButton;
@property(retain, nonatomic) UIButton *unknownGenderButton; // @synthesize unknownGenderButton=_unknownGenderButton;
@property(retain, nonatomic) UIButton *genderAndAgeButton; // @synthesize genderAndAgeButton=_genderAndAgeButton;
@property(retain, nonatomic) UIButton *constellationBtn; // @synthesize constellationBtn=_constellationBtn;
@property(retain, nonatomic) UIButton *locationBtn; // @synthesize locationBtn=_locationBtn;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UIButton *activeMedalBtn; // @synthesize activeMedalBtn=_activeMedalBtn;
@property(retain, nonatomic) UIButton *verificationBtn; // @synthesize verificationBtn=_verificationBtn;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) UILabel *idLabel; // @synthesize idLabel=_idLabel;
@property(retain, nonatomic) UILabel *idPrefixLabel; // @synthesize idPrefixLabel=_idPrefixLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *avatarBaseView; // @synthesize avatarBaseView=_avatarBaseView;
@property(retain, nonatomic) YYAnimatedImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) AWEBindPhoneNumberTipView *bindPhoneView; // @synthesize bindPhoneView=_bindPhoneView;
- (void).cxx_destruct;
@property(readonly, nonatomic) double infoLabelImageSize;
@property(readonly, nonatomic) double horiContentInset;
@property(readonly, nonatomic) double sepDistance;
@property(readonly, nonatomic) double fontSize;
- (id)createStackView:(id)arg1;
- (_Bool)showPrivateAccountInfoView;
- (void)_transferToChat;
- (id)_aStrWithIntro:(id)arg1;
- (_Bool)_showUserBlock;
- (id)_aStrWith:(long long)arg1 withSuffix:(id)arg2;
- (double)_avatarTop;
- (id)_verifyBadgeImage;
- (_Bool)_showVerifyBadge;
- (_Bool)_shouldShowUnkownConstellation;
- (_Bool)_shouldShowUnkownLocation;
- (_Bool)_shouldShowUnknownAge;
- (_Bool)_shouldShowUnknownGender;
- (_Bool)_shouldShowGenderAndAge;
- (void)_setGenderAndAgeContent;
- (id)_getUserAge;
- (id)_idStr;
- (void)smartFitFollowAndFansAndPraiseWithTop:(double)arg1 left:(double)arg2;
- (void)layoutSubviews;
- (void)_setTitleTextColorOfAlertAction:(id)arg1 textColor:(id)arg2;
- (void)_calculateIntroLabelSize;
- (void)_calculateNameLabelSize;
- (void)ifShouldDismissWeiboBindDotView:(_Bool)arg1;
- (void)goToAppleMusic;
- (void)goToYoutube;
- (void)goToInstagram;
- (void)updateSocialLinkView;
- (void)updateSocialStatisticsButtons;
- (void)_updateUI;
- (void)_setupUI;
- (void)turnOffPostNotification;
- (void)turnOnPostNotification;
- (void)sendMsgBtnClicked:(id)arg1;
- (void)blockUserHint;
- (void)reportBtnClicked:(id)arg1;
- (void)doSettings;
- (void)edit;
- (void)openWalletView;
- (void)showMoreFuncBtnClicked;
- (void)addBtnClicked:(id)arg1;
- (void)editProfile;
- (void)praiseBtnClicked:(id)arg1;
- (void)fansBtnClicked:(id)arg1;
- (void)followBtnClicked:(id)arg1;
- (void)unknownGenderButtonClicked:(id)arg1;
- (void)unknownAgeButtonClicked:(id)arg1;
- (void)constellationBtnClicked:(id)arg1;
- (void)locationBtnClicked:(id)arg1;
- (void)socialLinkViewTapped:(id)arg1;
- (void)idLabelTapped:(id)arg1;
- (void)enterLiveRoom;
- (void)canEnterLiveRoom;
- (void)avatarTapped:(id)arg1;
- (void)fansEntranceButtonTapped;
- (void)fansRectangleButtonTapped;
- (void)dismissBubbleView;
- (void)updateRelationViewWithFollowStatus:(long long)arg1 withAnimation:(_Bool)arg2;
- (double)recommendHeight;
- (void)configWithNewRecommendBubble:(long long)arg1;
- (void)configWithUser:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)languageDidChange;
- (void)dealloc;
- (id)initWithIsCurrentUser:(_Bool)arg1 fromHomepage:(_Bool)arg2;

@end

