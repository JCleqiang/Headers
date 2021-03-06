//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BaseSmartVideoPlayerDelegate-Protocol.h"
#import "YXSDKLivePlayerDelegate-Protocol.h"

@class NSString, NSTimer, UIView, WBMediaAudioSession, WBNLLiveLoggerManager, YXBaseSmartVideoPlayer;
@protocol WBNLPlayerDelegate;

@interface WBNLPlayer : NSObject <YXSDKLivePlayerDelegate, BaseSmartVideoPlayerDelegate>
{
    UIView *_playView;
    NSString *_URL;
    WBNLLiveLoggerManager *logger;
    _Bool live;
    id <WBNLPlayerDelegate> _delegate;
    unsigned long long _status;
    YXBaseSmartVideoPlayer *_replayPlayer;
    NSTimer *_timeoutTimer;
    WBMediaAudioSession *_session;
}

+ (id)currentPlayerNormal;
+ (id)currentPlayer;
+ (void)setPlayerType:(unsigned long long)arg1;
@property(retain, nonatomic) WBMediaAudioSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) YXBaseSmartVideoPlayer *replayPlayer; // @synthesize replayPlayer=_replayPlayer;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <WBNLPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIView *playView; // @synthesize playView=_playView;
- (void).cxx_destruct;
- (void)setDelegatePano:(id)arg1;
- (void)handleTapGestures:(id)arg1;
- (void)handlePanGestures:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)loadingTimeout;
- (void)handlePlayEventDelegateWithEvent:(unsigned long long)arg1;
- (void)BaseSmartVideoPlayerWillResignActive;
- (void)BaseSmartVideoPlayerProgressWithCurrent:(double)arg1 duration:(double)arg2;
- (void)BaseSmartVideoPlayerStopLoading;
- (void)BaseSmartVideoPlayerFailedWithError:(id)arg1;
- (void)BaseSmartVideoPlayerStartLoading;
- (void)BaseSmartVideoPlayerReadyToPlay;
- (void)BaseSmartVideoPlayerDidPlayToEnd:(id)arg1;
- (void)BaseSmartVideoPlayerDoPause:(id)arg1;
- (void)BaseSmartVideoPlayerDoPlay:(id)arg1;
- (void)onPlayerEventCallback:(int)arg1 msg:(id)arg2;
- (void)onPlayerVideoDataCallback:(struct opaqueCMSampleBuffer *)arg1;
- (void)onPlayerAudioDataCallback:(struct opaqueCMSampleBuffer *)arg1;
- (void)onPlayerLogCallback:(int)arg1 msg:(id)arg2;
- (void)onPlayerNetStatisticsCallback:(int)arg1 msg:(id)arg2;
- (void)configLivePlayer;
- (void)clean;
- (double)currentDuration;
- (void)seekToTime:(double)arg1;
- (void)restart;
- (void)resume;
- (void)pause;
- (void)startPlayWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

