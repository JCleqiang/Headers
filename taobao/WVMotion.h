//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class AVAudioRecorder, CMMotionManager, NSTimer, WVShakeRecognizer;

@interface WVMotion : WVDynamicHandler
{
    _Bool _isOpenBlow;
    _Bool _isOpenShake;
    _Bool _isOpenGyro;
    float _blowTaskPercent;
    AVAudioRecorder *_audioRecorder;
    NSTimer *_audioTimer;
    double _lowPassResults;
    CMMotionManager *_motionManager;
    double _shakeFrequency;
    double _notifyTime;
    long long _shakeNum;
    double _shakeThreshold;
    WVShakeRecognizer *_xShake;
    WVShakeRecognizer *_yShake;
    WVShakeRecognizer *_zShake;
    double _gyroNotifyTime;
    double _gyroFrequency;
}

+ (void)vibrate:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (unsigned long long)instanceScope;
@property(nonatomic) _Bool isOpenGyro; // @synthesize isOpenGyro=_isOpenGyro;
@property(nonatomic) double gyroFrequency; // @synthesize gyroFrequency=_gyroFrequency;
@property(nonatomic) double gyroNotifyTime; // @synthesize gyroNotifyTime=_gyroNotifyTime;
@property(retain, nonatomic) WVShakeRecognizer *zShake; // @synthesize zShake=_zShake;
@property(retain, nonatomic) WVShakeRecognizer *yShake; // @synthesize yShake=_yShake;
@property(retain, nonatomic) WVShakeRecognizer *xShake; // @synthesize xShake=_xShake;
@property(nonatomic) double shakeThreshold; // @synthesize shakeThreshold=_shakeThreshold;
@property(nonatomic) long long shakeNum; // @synthesize shakeNum=_shakeNum;
@property(nonatomic) double notifyTime; // @synthesize notifyTime=_notifyTime;
@property(nonatomic) double shakeFrequency; // @synthesize shakeFrequency=_shakeFrequency;
@property(nonatomic) _Bool isOpenShake; // @synthesize isOpenShake=_isOpenShake;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) _Bool isOpenBlow; // @synthesize isOpenBlow=_isOpenBlow;
@property(nonatomic) float blowTaskPercent; // @synthesize blowTaskPercent=_blowTaskPercent;
@property(nonatomic) double lowPassResults; // @synthesize lowPassResults=_lowPassResults;
@property(retain, nonatomic) NSTimer *audioTimer; // @synthesize audioTimer=_audioTimer;
@property(retain, nonatomic) AVAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void).cxx_destruct;
- (void)resumeWVJSBridgeInstance;
- (void)resetWVJSBridgeInstance:(id)arg1;
- (void)releaseInstance;
- (void)dealloc;
- (void)listenGyro:(_Bool)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)listenGyro:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)releaseMotionManager;
- (void)initMotionManager;
- (void)listeningShake:(_Bool)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)listeningShake:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)stopListenBlow:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)audioTask;
- (void)initAVAudioRecorder;
- (void)releaseRecorder;
- (void)releaseTimer;
- (void)listenBlow:(_Bool)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)listenBlow:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;

@end
