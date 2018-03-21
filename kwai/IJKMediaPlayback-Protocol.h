//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, UIView;

@protocol IJKMediaPlayback <NSObject>
@property(nonatomic) float playbackRate;
@property(readonly, nonatomic) _Bool airPlayMediaActive;
@property(nonatomic) _Bool isDanmakuMediaAirPlay;
@property(nonatomic) _Bool allowsMediaAirPlay;
@property(nonatomic) _Bool shouldUseHwCodec;
@property(nonatomic) _Bool shouldAutoplay;
@property(nonatomic) long long scalingMode;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) long long numberOfBytesTransferred;
@property(readonly, nonatomic) unsigned long long loadState;
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
@property(readonly, nonatomic) long long bufferingProgress;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
@property(nonatomic) double currentPlaybackTime;
@property(readonly, nonatomic) float probeFps;
@property(readonly, nonatomic) UIView *view;
- (UIImage *)thumbnailImageAtCurrentTime;
- (void)setPauseInBackground:(_Bool)arg1;
- (void)shutdown;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
@end
