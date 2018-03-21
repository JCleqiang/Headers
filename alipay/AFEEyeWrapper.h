//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EVAuthSessionDelegate-Protocol.h"

@class APBMonitor, EyeVerify, NSString;
@protocol EyePrintDelegate, OS_dispatch_semaphore;

@interface AFEEyeWrapper : NSObject <EVAuthSessionDelegate>
{
    NSObject<OS_dispatch_semaphore> *_eyeWrapperLock;
    _Bool _firstDetectEye;
    _Bool _shouldPause;
    NSString *_version;
    APBMonitor *_monitor;
    EyeVerify *_eyeVerify;
    id <EyePrintDelegate> _delegate;
}

+ (id)getVersion;
@property(nonatomic) __weak id <EyePrintDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EyeVerify *eyeVerify; // @synthesize eyeVerify=_eyeVerify;
@property(retain, nonatomic) APBMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(nonatomic) _Bool firstDetectEye; // @synthesize firstDetectEye=_firstDetectEye;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)onMonitorLog:(long long)arg1 message:(id)arg2;
- (void)stepCompletedWithDiagnosticData:(id)arg1 messageType:(int)arg2;
- (void)stepCompletedWithData:(id)arg1 messageType:(int)arg2;
- (void)eyeStatusChanged:(long long)arg1 centerDistance:(double)arg2;
- (void)lightingNormal:(float)arg1;
- (void)lightingTooLow:(float)arg1;
- (void)takeDarkCapture;
- (void)continueSession;
- (void)cancel;
- (void)finish:(int)arg1;
@property(readonly, nonatomic) _Bool isBusy;
- (void)resume;
- (void)pause;
- (void)processMotionSensorData:(struct evp_motion_data_t)arg1;
- (void)processFrameBuffer:(struct opaqueCMSampleBuffer *)arg1 exifData:(id)arg2 cameraConfiguration:(struct evp_camera_configuration_t)arg3 faceProperty:(struct face_property_t)arg4;
- (void)startWithAction:(int)arg1 withLivenessLevel:(long long)arg2 diagnosticLogging:(long long)arg3;
- (id)eyeVerifyDictionaryFrom:(int)arg1 diagnosticLogging:(long long)arg2;
- (void)_addMonitor:(id)arg1 param4:(id)arg2;
- (id)initWithSettingData:(id)arg1 resourcePath:(id)arg2 monitorInstance:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
