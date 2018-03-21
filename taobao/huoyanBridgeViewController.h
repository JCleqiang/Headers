//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBScanExtViewController.h"

#import "TBSDKServerDelegate-Protocol.h"
#import "TBScanExtViewControllerDelegate-Protocol.h"
#import "TBScanLotteryPluginDelegate-Protocol.h"

@class HUDActivityView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, TBSDKMTOPServer, UILabel, UIView, huoyanContainerView, huoyanHistoryService;
@protocol huoyanScanDelegate;

@interface huoyanBridgeViewController : TBScanExtViewController <TBSDKServerDelegate, TBScanExtViewControllerDelegate, TBScanLotteryPluginDelegate>
{
    _Bool _isTorchOn;
    _Bool _isActivity;
    _Bool _bHiddenLoadingView;
    _Bool _isInSpecialActivityTime;
    _Bool _bNotShowCameraApertureTextView;
    _Bool _isSuccess;
    _Bool _switchable;
    _Bool _clickable;
    _Bool _hideStatusBar;
    _Bool _bRemoteIdentifying;
    _Bool _bRemoteIdentifySuccess;
    _Bool _bNotShowRemoteIdentifyResult;
    _Bool _enableDecode;
    _Bool _enableItf;
    _Bool _enableDm;
    _Bool _enableDouble;
    int _actionMode;
    int _scanLogoFailureCount;
    float _tbCameraWidthPercent;
    NSDictionary *_urlParams;
    id <huoyanScanDelegate> _scanDelegate;
    NSString *_urlPath;
    UILabel *_torchLabel;
    double _startTime;
    NSString *_desc;
    NSString *_tips;
    NSMutableArray *_scanGroups;
    NSMutableDictionary *_scanGroupInfo;
    NSString *_currentScanGroup;
    huoyanContainerView *_huoyanContainerView;
    UIView *_historyButtonView;
    UIView *_customNaviBarView;
    UIView *_imageSearchGuidanceDetailView;
    huoyanHistoryService *_historyService;
    TBSDKMTOPServer *_antiFakeCompatibleServer;
    TBSDKMTOPServer *_remoteIdentifyServer;
    TBSDKMTOPServer *_aliMedicineServer;
    TBSDKMTOPServer *_aliTraceCodeServer;
    HUDActivityView *_loadingView;
    NSString *_cityName;
    NSTimer *_helpCountDownTimer;
    UIView *_helpTipView;
    NSString *_mainAwardUrl;
    struct CGRect _cameraApertureRect;
}

@property(nonatomic) _Bool enableDouble; // @synthesize enableDouble=_enableDouble;
@property(nonatomic) _Bool enableDm; // @synthesize enableDm=_enableDm;
@property(nonatomic) _Bool enableItf; // @synthesize enableItf=_enableItf;
@property(nonatomic) _Bool enableDecode; // @synthesize enableDecode=_enableDecode;
@property(retain, nonatomic) NSString *mainAwardUrl; // @synthesize mainAwardUrl=_mainAwardUrl;
@property(retain, nonatomic) UIView *helpTipView; // @synthesize helpTipView=_helpTipView;
@property(retain, nonatomic) NSTimer *helpCountDownTimer; // @synthesize helpCountDownTimer=_helpCountDownTimer;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) HUDActivityView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool bNotShowRemoteIdentifyResult; // @synthesize bNotShowRemoteIdentifyResult=_bNotShowRemoteIdentifyResult;
@property(nonatomic) _Bool bRemoteIdentifySuccess; // @synthesize bRemoteIdentifySuccess=_bRemoteIdentifySuccess;
@property(nonatomic) _Bool bRemoteIdentifying; // @synthesize bRemoteIdentifying=_bRemoteIdentifying;
@property(retain, nonatomic) TBSDKMTOPServer *aliTraceCodeServer; // @synthesize aliTraceCodeServer=_aliTraceCodeServer;
@property(retain, nonatomic) TBSDKMTOPServer *aliMedicineServer; // @synthesize aliMedicineServer=_aliMedicineServer;
@property(retain, nonatomic) TBSDKMTOPServer *remoteIdentifyServer; // @synthesize remoteIdentifyServer=_remoteIdentifyServer;
@property(retain, nonatomic) TBSDKMTOPServer *antiFakeCompatibleServer; // @synthesize antiFakeCompatibleServer=_antiFakeCompatibleServer;
@property(retain, nonatomic) huoyanHistoryService *historyService; // @synthesize historyService=_historyService;
@property(retain, nonatomic) UIView *imageSearchGuidanceDetailView; // @synthesize imageSearchGuidanceDetailView=_imageSearchGuidanceDetailView;
@property(retain, nonatomic) UIView *customNaviBarView; // @synthesize customNaviBarView=_customNaviBarView;
@property(retain, nonatomic) UIView *historyButtonView; // @synthesize historyButtonView=_historyButtonView;
@property(retain, nonatomic) huoyanContainerView *huoyanContainerView; // @synthesize huoyanContainerView=_huoyanContainerView;
@property(nonatomic) _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property(nonatomic, getter=isClickable) _Bool clickable; // @synthesize clickable=_clickable;
@property(nonatomic, getter=isSwitchable) _Bool switchable; // @synthesize switchable=_switchable;
@property(retain, nonatomic) NSString *currentScanGroup; // @synthesize currentScanGroup=_currentScanGroup;
@property(retain, nonatomic) NSMutableDictionary *scanGroupInfo; // @synthesize scanGroupInfo=_scanGroupInfo;
@property(retain, nonatomic) NSMutableArray *scanGroups; // @synthesize scanGroups=_scanGroups;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) float tbCameraWidthPercent; // @synthesize tbCameraWidthPercent=_tbCameraWidthPercent;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) struct CGRect cameraApertureRect; // @synthesize cameraApertureRect=_cameraApertureRect;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool bNotShowCameraApertureTextView; // @synthesize bNotShowCameraApertureTextView=_bNotShowCameraApertureTextView;
@property(nonatomic) _Bool isInSpecialActivityTime; // @synthesize isInSpecialActivityTime=_isInSpecialActivityTime;
@property(nonatomic) int scanLogoFailureCount; // @synthesize scanLogoFailureCount=_scanLogoFailureCount;
@property(nonatomic) _Bool bHiddenLoadingView; // @synthesize bHiddenLoadingView=_bHiddenLoadingView;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isActivity; // @synthesize isActivity=_isActivity;
@property(nonatomic) _Bool isTorchOn; // @synthesize isTorchOn=_isTorchOn;
@property(retain, nonatomic) UILabel *torchLabel; // @synthesize torchLabel=_torchLabel;
@property(retain, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(nonatomic) __weak id <huoyanScanDelegate> scanDelegate; // @synthesize scanDelegate=_scanDelegate;
@property(nonatomic) int actionMode; // @synthesize actionMode=_actionMode;
@property(retain, nonatomic) NSDictionary *urlParams; // @synthesize urlParams=_urlParams;
- (void).cxx_destruct;
- (void)showErrorMsg:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)huoyanRecognizeUserTrackWithType:(id)arg1 content:(id)arg2;
- (void)huoyanURLUserTrack:(id)arg1 scanType:(id)arg2;
- (id)getTBScanCodeResultType:(id)arg1 withScanData:(id)arg2;
- (void)setNoNetworkScan;
- (void)hideScanCodeHelpTip;
- (void)showScanCodeHelpTip;
- (void)invalidateHelpCountDownTimer;
- (void)startHelpCountDownTimer;
- (void)process4GCode:(id)arg1;
- (void)removeLoadingAnimation;
- (void)startLoadingAnimation;
- (void)verifyAntiFakeCompatibleCodeWithUrl:(id)arg1;
- (id)antiFakeDictionary:(id)arg1 productId:(id)arg2 version:(id)arg3 codeType:(id)arg4 bizType:(id)arg5 codeContent:(id)arg6;
- (_Bool)processAntiFakeCodeGen3:(id)arg1;
- (_Bool)processAntiFakeCode:(id)arg1;
- (void)cameraPermissionDenied;
- (void)userTrack:(id)arg1 args:(id)arg2;
- (void)userTrack:(id)arg1;
- (void)setTorchState:(int)arg1;
- (void)handleClothesImage:(id)arg1;
- (_Bool)beforeProcessScanResult:(id)arg1 scanData:(id)arg2;
- (id)replaceCRLF:(id)arg1;
- (void)resetIdentifyMark;
- (void)cancelRemoteIdentifyIfExist;
- (void)openURL:(id)arg1 scanType:(id)arg2 scanApproach:(id)arg3;
- (void)gotoDetailVC:(id)arg1;
- (void)processExpressCode:(id)arg1;
- (void)showExpressChooseView:(id)arg1;
- (void)processAlijkTraceCodeWithCode:(id)arg1;
- (void)verifyAlijkMedicineUrlWithCode:(id)arg1 with:(id)arg2;
- (void)openAwardUrlWithAll:(id)arg1 award:(id)arg2 logistic:(id)arg3;
- (void)didFind:(id)arg1;
- (_Bool)processAntifakeCompatibleCode:(id)arg1;
- (void)cameraDidStart;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)toggleImageSearchGuidanceDetailView;
- (_Bool)forbidbackPanGestureRecognized;
- (void)setTitle4Taobao:(id)arg1 with:(id)arg2;
- (void)popViewController4Taobao:(id)arg1;
- (void)pushView:(id)arg1;
- (void)showHistoryTipMsg:(id)arg1;
- (void)onHistory;
- (void)toggleButtonClicked;
- (void)picButtonClicked:(struct CGRect)arg1;
- (void)torchButtonClicked;
- (void)historyButtonClicked;
- (void)goBack;
- (void)onBack;
- (id)naviBarItem:(struct CGPoint)arg1 iconSize:(double)arg2 fontSize:(double)arg3 fontText:(id)arg4;
- (void)buildCustomNaviBar;
- (void)resumeScanSuccess:(id)arg1;
- (void)setupCustomScanInfo:(int)arg1 scanGroup:(id)arg2;
- (void)setupScanInfo:(id)arg1;
- (void)setupCameraApertureRect;
- (void)parseParams:(id)arg1;
- (void)processWhenTBScanGroupSwitching:(id)arg1;
- (_Bool)enableDecodeDM;
- (_Bool)enableDecodeGen3;
- (void)dealloc;
- (void)showBarcodeQRCatchAnimation:(id)arg1;
- (void)enterForceground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)resumeScan;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshOrangeConfig;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
