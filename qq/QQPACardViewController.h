//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/ARQRManagerDelegate-Protocol.h>
#import <QQMainProject/ActionSheetDataDelegate-Protocol.h>
#import <QQMainProject/QQGroupAssociatePubAccountProtocol-Protocol.h>
#import <QQMainProject/QQShareResultAlertViewDeleagte-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSSet, NSString, PACardInitModel, QQPACardActionSheetHandler, QQShareResultAlertView, QQSwitch, QQWebShareActionSheet, UIWebView;
@protocol QQNGBackDelegate;

@interface QQPACardViewController : QQViewController <ActionSheetDataDelegate, ARQRManagerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, QQGroupAssociatePubAccountProtocol, QQShareResultAlertViewDeleagte>
{
    double _clickFollowTime;
    double _clickUnFollowTime;
    NSSet *_eventSet;
    NSDictionary *_associateGroupListInfo;
    UIWebView *_phoneCallWebView;
    double _lastEventTime;
    QQShareResultAlertView *_thirdAppAlertView;
    int _thirdAppAttendTimes;
    double _didAppearTime;
    _Bool _isShowFollow;
    _Bool _notAnimate;
    PACardInitModel *_baseInfo;
    long long _uin;
    NSString *_nick;
    long long _isFollow;
    QQWebShareActionSheet *_shareActionSheet;
    QQSwitch *_switchControl;
    NSString *_phoneNumber;
    double _location_lat;
    double _location_lon;
    id <QQNGBackDelegate> _newerGuideDelegate;
    NSDictionary *_newerGuideParams;
    NSDictionary *_thirdAppParamDic;
    id _pubAccLeftBtnClickTarget;
    SEL _pubAccLeftBtnClickSel;
    CDUnknownBlockType _publicAccountFollowCallback;
    NSMutableArray *_publicAccountMessages;
    QQPACardActionSheetHandler *_sheetHandler;
}

+ (_Bool)checkIfCreateNewPACardOrPopVC:(unsigned long long)arg1 bAnimated:(_Bool)arg2;
+ (void)processInitModel:(id)arg1;
+ (_Bool)isValidInitModel:(id)arg1;
+ (void)report1160PACardWithCardModel:(id)arg1 opT:(id)arg2;
+ (id)createPACardVCWithInitModel:(id)arg1;
@property(nonatomic) _Bool notAnimate; // @synthesize notAnimate=_notAnimate;
@property(retain, nonatomic) QQPACardActionSheetHandler *sheetHandler; // @synthesize sheetHandler=_sheetHandler;
@property(retain, nonatomic) NSMutableArray *publicAccountMessages; // @synthesize publicAccountMessages=_publicAccountMessages;
@property(copy, nonatomic) CDUnknownBlockType publicAccountFollowCallback; // @synthesize publicAccountFollowCallback=_publicAccountFollowCallback;
@property(nonatomic) SEL pubAccLeftBtnClickSel; // @synthesize pubAccLeftBtnClickSel=_pubAccLeftBtnClickSel;
@property(nonatomic) id pubAccLeftBtnClickTarget; // @synthesize pubAccLeftBtnClickTarget=_pubAccLeftBtnClickTarget;
@property(retain, nonatomic) NSDictionary *thirdAppParamDic; // @synthesize thirdAppParamDic=_thirdAppParamDic;
@property(retain, nonatomic) NSDictionary *newerGuideParams; // @synthesize newerGuideParams=_newerGuideParams;
@property(nonatomic) id <QQNGBackDelegate> newerGuideDelegate; // @synthesize newerGuideDelegate=_newerGuideDelegate;
@property(nonatomic) double location_lon; // @synthesize location_lon=_location_lon;
@property(nonatomic) double location_lat; // @synthesize location_lat=_location_lat;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) QQSwitch *switchControl; // @synthesize switchControl=_switchControl;
@property(retain, nonatomic) QQWebShareActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property long long isFollow; // @synthesize isFollow=_isFollow;
@property _Bool isShowFollow; // @synthesize isShowFollow=_isShowFollow;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) PACardInitModel *baseInfo; // @synthesize baseInfo=_baseInfo;
- (id)thirdAppExtInfoGenerate;
- (void)backToThirdApp;
- (void)QQShareResultAlertView:(id)arg1 clikedButtionAtIndex:(unsigned long long)arg2;
- (void)closePACardController;
- (void)removeDuplicateController;
- (void)setNightMode:(_Bool)arg1;
- (void)handleQQThemeChangedNotification:(id)arg1;
- (void)CloseParentViewController;
- (id)createLeftBackButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)ResponseHandleForUpdateQQBussinessData:(id)arg1;
- (void)ResponseHandleForSetFlag:(id)arg1;
- (void)ResponseHandleForSetFollow:(id)arg1;
- (void)ResponseHandleForSetUnFollow:(id)arg1;
- (void)processViewControllStyle;
- (void)PublicAccountUpdataMsgHandle:(id)arg1;
- (long long)updateData;
- (void)onForceOffline;
- (_Bool)loadData;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithCardModel:(id)arg1;
- (void)alertViewClicked:(long long)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)switchControlNeedConfirm:(id)arg1 switchControl:(id)arg2;
- (void)switchControlWithAlertMessageBox:(long long)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)switchControlChangeState:(id)arg1;
- (void)finishFollow:(_Bool)arg1;
- (void)confirmFollow;
- (void)finishUnfollow:(_Bool)arg1;
- (void)confirmUnfollow;
- (void)shareToFriendCircle;
- (void)shareToWechat;
- (void)shareToQzone;
- (void)shareToFriend;
- (void)reportShareActionSheetClick:(int)arg1;
- (int)getReportIndexByeID:(int)arg1 sender:(id)arg2;
- (void)actionSheetClickedAtIndex:(int)arg1 sender:(id)arg2;
- (void)onClickUnfollow;
- (void)onClickJuBao;
- (void)hideShareMenu;
- (void)onClickMoreInfo;
- (void)onClickOpenAIO;
- (void)showShareMenu;
- (void)on3RDShareNotify:(id)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (id)getDataForConfig:(id)arg1;
- (void)onRTVoiceCallTouched:(id)arg1;
- (void)ARQRManagerSucess:(id)arg1 QRResult:(id)arg2;
- (void)imageTouch:(id)arg1;
- (void)eventTransmit:(long long)arg1 dicinfo:(id)arg2;
- (void)handleItemsEvent:(id)arg1;
- (void)gotoWebview:(id)arg1;
- (void)openAIOView;
- (void)reportInterestAccount:(id)arg1;
- (void)reportAssociateGroup:(id)arg1;
- (void)reportBoluoGroup:(id)arg1;
- (void)AssociatePubAccountGroupList:(id)arg1 error:(id)arg2;
- (void)onDownloadRelativeGroupCompleted:(id)arg1;
- (_Bool)requestAssociateGroupListInfo;
- (id)getPACardMoreInfoWithUin:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
