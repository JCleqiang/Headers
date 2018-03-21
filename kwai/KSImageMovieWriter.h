//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageMovieWriter.h"

@class NSDate;

@interface KSImageMovieWriter : GPUImageMovieWriter
{
    double _fastforwardRate;
    double _recordingDuration;
    NSDate *_lastPausedDate;
    double _pauseDurantion;
    double _recordingVideoDuration;
    double _recordingAudioDuration;
    CDStruct_1b6d18a9 _minFrameIntervalTime;
    CDStruct_1b6d18a9 _lastAudioTime;
    CDStruct_1b6d18a9 _lastVideoTime;
    CDStruct_1b6d18a9 _firstAudioTime;
    CDStruct_1b6d18a9 _firstVideoTime;
}

@property(nonatomic) double recordingAudioDuration; // @synthesize recordingAudioDuration=_recordingAudioDuration;
@property(nonatomic) CDStruct_1b6d18a9 firstVideoTime; // @synthesize firstVideoTime=_firstVideoTime;
@property(nonatomic) CDStruct_1b6d18a9 firstAudioTime; // @synthesize firstAudioTime=_firstAudioTime;
@property(nonatomic) double recordingVideoDuration; // @synthesize recordingVideoDuration=_recordingVideoDuration;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoTime; // @synthesize lastVideoTime=_lastVideoTime;
@property(nonatomic) CDStruct_1b6d18a9 lastAudioTime; // @synthesize lastAudioTime=_lastAudioTime;
@property(nonatomic) double pauseDurantion; // @synthesize pauseDurantion=_pauseDurantion;
@property(retain, nonatomic) NSDate *lastPausedDate; // @synthesize lastPausedDate=_lastPausedDate;
@property(nonatomic) CDStruct_1b6d18a9 minFrameIntervalTime; // @synthesize minFrameIntervalTime=_minFrameIntervalTime;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic) double fastforwardRate; // @synthesize fastforwardRate=_fastforwardRate;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long inputRotation;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setPaused:(_Bool)arg1;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startRecording;
- (void)resetRecord;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2 fileType:(id)arg3 outputSettings:(id)arg4;

@end
