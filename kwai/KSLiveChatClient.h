//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSLiveChatAudioDataInputChannelDelegate-Protocol.h"
#import "KSLiveChatVideoDataInputChannelDelegate-Protocol.h"
#import "QAVAudioDataDelegate-Protocol.h"
#import "QAVLocalVideoDelegate-Protocol.h"
#import "QAVRemoteVideoDelegate-Protocol.h"
#import "QAVRoomDelegate-Protocol.h"

@class KSLiveChatAudioDataInputChannel, KSLiveChatClientConnectRequest, KSLiveChatVideoDataInputChannel, LiveChatStatistics, NSNumber, NSString, NSTimer, QAVContext;
@protocol KSLiveChatClientVideoDataDelegate, OnRemoteAudioRawDataDelegate, OnRoomStatusNotifyDelegate;

@interface KSLiveChatClient : NSObject <QAVRemoteVideoDelegate, KSLiveChatVideoDataInputChannelDelegate, KSLiveChatAudioDataInputChannelDelegate, QAVRoomDelegate, QAVLocalVideoDelegate, QAVAudioDataDelegate>
{
    id <KSLiveChatClientVideoDataDelegate> _videoDataDelegate;
    KSLiveChatVideoDataInputChannel *_videoDataInputChannel;
    KSLiveChatAudioDataInputChannel *_audioDataInputChannel;
    id <OnRemoteAudioRawDataDelegate> _audioDataDelegate;
    id <OnRoomStatusNotifyDelegate> _roomStatusNotifyDelegate;
    QAVContext *_context;
    NSNumber *_originalUserID;
    NSNumber *_localLiveChatID;
    KSLiveChatClientConnectRequest *_connectRequest;
    NSNumber *_remoteLiveChatID;
    NSTimer *_qualityMetricsTimer;
    LiveChatStatistics *_qosStatistics;
    double _qosTime;
}

@property(nonatomic) double qosTime; // @synthesize qosTime=_qosTime;
@property(retain, nonatomic) LiveChatStatistics *qosStatistics; // @synthesize qosStatistics=_qosStatistics;
@property(retain, nonatomic) NSTimer *qualityMetricsTimer; // @synthesize qualityMetricsTimer=_qualityMetricsTimer;
@property(retain, nonatomic) NSNumber *remoteLiveChatID; // @synthesize remoteLiveChatID=_remoteLiveChatID;
@property(retain, nonatomic) KSLiveChatClientConnectRequest *connectRequest; // @synthesize connectRequest=_connectRequest;
@property(retain, nonatomic) NSNumber *localLiveChatID; // @synthesize localLiveChatID=_localLiveChatID;
@property(retain, nonatomic) NSNumber *originalUserID; // @synthesize originalUserID=_originalUserID;
@property(retain, nonatomic) QAVContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <OnRoomStatusNotifyDelegate> roomStatusNotifyDelegate; // @synthesize roomStatusNotifyDelegate=_roomStatusNotifyDelegate;
@property(nonatomic) __weak id <OnRemoteAudioRawDataDelegate> audioDataDelegate; // @synthesize audioDataDelegate=_audioDataDelegate;
@property(retain, nonatomic) KSLiveChatAudioDataInputChannel *audioDataInputChannel; // @synthesize audioDataInputChannel=_audioDataInputChannel;
@property(retain, nonatomic) KSLiveChatVideoDataInputChannel *videoDataInputChannel; // @synthesize videoDataInputChannel=_videoDataInputChannel;
@property(nonatomic) __weak id <KSLiveChatClientVideoDataDelegate> videoDataDelegate; // @synthesize videoDataDelegate=_videoDataDelegate;
- (void).cxx_destruct;
- (id)getStatisticsResult;
- (void)getQosInfo;
- (void)setAVSDKCallBack;
- (void)_setupBeautyIfPossible;
- (void)OnLocalVideoRawSampleBuf:(struct opaqueCMSampleBuffer *)arg1 result:(struct opaqueCMSampleBuffer **)arg2;
- (void)OnLocalVideoPreProcess:(id)arg1;
- (void)OnLocalVideoPreview:(id)arg1;
- (void)OnVideoPreview:(id)arg1;
- (long long)audioDataDispose:(id)arg1 type:(long long)arg2;
- (long long)audioDataShouInput:(id)arg1 type:(long long)arg2;
- (long long)audioDataComes:(id)arg1 type:(long long)arg2;
- (int)fillExternalAudioFrame:(id)arg1 fromChannel:(id)arg2;
- (int)fillExternalVideoFrame:(id)arg1 fromChannel:(id)arg2;
- (void)destroy;
- (void)disconnect;
- (void)OnHwStateChangeNotify:(_Bool)arg1 isMain:(_Bool)arg2 isSwitchToSoft:(_Bool)arg3 identifier:(id)arg4;
- (void)OnRoomEvent:(int)arg1 subtype:(int)arg2 data:(void *)arg3;
- (void)OnCameraSettingNotify:(int)arg1 Height:(int)arg2 Fps:(int)arg3;
- (void)OnSemiAutoRecvMediaVideo:(id)arg1;
- (void)OnSemiAutoRecvScreenVideo:(id)arg1;
- (void)OnSemiAutoRecvCameraVideo:(id)arg1;
- (void)OnPrivilegeDiffNotify:(int)arg1;
- (void)OnEndpointsUpdateInfo:(long long)arg1 endpointlist:(id)arg2;
- (void)_cleanUpForDisconnection;
- (void)OnRoomDisconnect:(int)arg1 WithErrinfo:(id)arg2;
- (void)OnExitRoomComplete;
- (void)OnSwitchRoomComplete:(int)arg1 WithErrinfo:(id)arg2;
- (void)OnEnterRoomComplete:(int)arg1 WithErrinfo:(id)arg2;
- (id)getLiveChatIDFromUserID:(id)arg1;
- (void)connect:(id)arg1;
- (void)prepare:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
