//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSCameraDelegate-Protocol.h"
#import "TTCommonTimerObjDelegate-Protocol.h"

@class AVPlayer, AVPlayerLayer, HTSCamera, NSDictionary, NSString, NSURL, SSThemedButton, SSThemedImageView, SSThemedScrollView, SSThemedView, TTAlphaThemedButton, TTBezierPathCircleView, TTCommonTimerObj, UIImage, UILabel, UIProgressView, UISlider, UIView;
@protocol TTLiveCameraVCDelegate;

@interface TTLiveCameraViewController : UIViewController <HTSCameraDelegate, TTCommonTimerObjDelegate>
{
    TTAlphaThemedButton *cancelBtn;
    _Bool _videoEndAction;
    _Bool _beautyModeEnable;
    _Bool _preSelfieEnable;
    id <TTLiveCameraVCDelegate> _delegate;
    unsigned long long _cameraType;
    unsigned long long _currentState;
    TTAlphaThemedButton *_flashBtn;
    SSThemedButton *_videoRecordButton;
    TTAlphaThemedButton *_photoTakenButton;
    TTAlphaThemedButton *_playBtn;
    TTAlphaThemedButton *_finishBtn;
    UIView *_realTimeView;
    SSThemedImageView *_photoPreView;
    SSThemedView *_videoPreView;
    AVPlayerLayer *_playerLayer;
    AVPlayer *_videoPrePlayer;
    UIImage *_preViewImage;
    UIView *_redDot;
    SSThemedScrollView *_typeIndicateView;
    SSThemedView *_previewActionView;
    SSThemedImageView *_focusBoxView;
    UISlider *_factorSlider;
    NSURL *_videoUrl;
    UILabel *_timerLabel;
    TTCommonTimerObj *_videoTimer;
    TTCommonTimerObj *_progressTimer;
    TTBezierPathCircleView *_progressCircle;
    TTBezierPathCircleView *_whiteCircle;
    UIProgressView *_progressView;
    NSDictionary *_ssTrackerDic;
    HTSCamera *_videoCamera;
    CDStruct_1b6d18a9 _videoCurrentTime;
}

@property(nonatomic) _Bool preSelfieEnable; // @synthesize preSelfieEnable=_preSelfieEnable;
@property(nonatomic) _Bool beautyModeEnable; // @synthesize beautyModeEnable=_beautyModeEnable;
@property(retain, nonatomic) HTSCamera *videoCamera; // @synthesize videoCamera=_videoCamera;
@property(retain, nonatomic) NSDictionary *ssTrackerDic; // @synthesize ssTrackerDic=_ssTrackerDic;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TTBezierPathCircleView *whiteCircle; // @synthesize whiteCircle=_whiteCircle;
@property(retain, nonatomic) TTBezierPathCircleView *progressCircle; // @synthesize progressCircle=_progressCircle;
@property(retain, nonatomic) TTCommonTimerObj *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) TTCommonTimerObj *videoTimer; // @synthesize videoTimer=_videoTimer;
@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(nonatomic) CDStruct_1b6d18a9 videoCurrentTime; // @synthesize videoCurrentTime=_videoCurrentTime;
@property(nonatomic) _Bool videoEndAction; // @synthesize videoEndAction=_videoEndAction;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UISlider *factorSlider; // @synthesize factorSlider=_factorSlider;
@property(retain, nonatomic) SSThemedImageView *focusBoxView; // @synthesize focusBoxView=_focusBoxView;
@property(retain, nonatomic) SSThemedView *previewActionView; // @synthesize previewActionView=_previewActionView;
@property(retain, nonatomic) SSThemedScrollView *typeIndicateView; // @synthesize typeIndicateView=_typeIndicateView;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UIImage *preViewImage; // @synthesize preViewImage=_preViewImage;
@property(retain, nonatomic) AVPlayer *videoPrePlayer; // @synthesize videoPrePlayer=_videoPrePlayer;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) SSThemedView *videoPreView; // @synthesize videoPreView=_videoPreView;
@property(retain, nonatomic) SSThemedImageView *photoPreView; // @synthesize photoPreView=_photoPreView;
@property(retain, nonatomic) UIView *realTimeView; // @synthesize realTimeView=_realTimeView;
@property(retain, nonatomic) TTAlphaThemedButton *finishBtn; // @synthesize finishBtn=_finishBtn;
@property(retain, nonatomic) TTAlphaThemedButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) TTAlphaThemedButton *photoTakenButton; // @synthesize photoTakenButton=_photoTakenButton;
@property(retain, nonatomic) SSThemedButton *videoRecordButton; // @synthesize videoRecordButton=_videoRecordButton;
@property(retain, nonatomic) TTAlphaThemedButton *flashBtn; // @synthesize flashBtn=_flashBtn;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) unsigned long long cameraType; // @synthesize cameraType=_cameraType;
@property(nonatomic) __weak id <TTLiveCameraVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)eventTrackWithLabel:(id)arg1;
- (id)getTimeStringFromSeconds:(long long)arg1;
- (void)cameraVideoFailed;
- (void)ttTimer:(id)arg1 EachIntervalAction:(float)arg2;
- (void)ttTimerReachMaxTimeStop:(id)arg1;
- (void)ttTimer:(id)arg1 StopLessThanMinTime:(_Bool)arg2;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)sessionInterruptioFinishedeAction;
- (void)sessionInterruptionStartAction;
- (void)playerDidFinishPlay:(id)arg1;
- (void)videoPlayerStart:(id)arg1;
- (void)videoSaveAction;
- (void)photoSaveAction;
- (void)finishAndSaveMediaAction;
- (void)restartMedioAction;
- (void)stopVideoProcess;
- (void)enableRealTimeInteraction:(_Bool)arg1;
- (void)handleVideoRecordGesture:(id)arg1;
- (void)photoTakenButtonPressed:(id)arg1;
- (void)switchCameraButtonClick:(id)arg1;
- (void)closeFlashOrTorchIfNeed;
- (void)checkFlashAndTorchMode;
- (void)cancelCameraAction:(id)arg1;
- (void)factorValueChangedGesture:(id)arg1;
- (void)factorValueChangedSlider:(id)arg1;
- (void)cameraAVConnectionFactorChangedValue:(double)arg1 velocity:(double)arg2;
- (void)focusBoxAnimation:(struct CGPoint)arg1;
- (void)switchVideoAndPhotoState:(unsigned long long)arg1;
- (void)handleRealTimeViewGesture:(id)arg1;
- (void)showVideoRecordButton:(_Bool)arg1;
- (void)setUpCommonSubviews;
- (void)initTotalSubviews;
- (void)camera:(id)arg1 didPauseVideoRecordingWithError:(id)arg2;
- (void)camera:(id)arg1 willFocusAtPoint:(struct CGPoint)arg2;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCamreraType:(unsigned long long)arg1 beautyModeEnable:(_Bool)arg2 preSelfieEnable:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
