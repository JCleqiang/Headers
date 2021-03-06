//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQRichVideoPreloadWriterDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, QQRichVideoPreloadWriterManagerDelegate;

@interface QQRichVideoPreloadWriterManager : NSObject <QQRichVideoPreloadWriterDelegate>
{
    _Bool _isRecording;
    _Bool _hasThumbnail;
    _Bool _hasError;
    float _sectionDuration;
    int _frameNumber;
    NSObject<QQRichVideoPreloadWriterManagerDelegate> *_delegate;
    long long _deviceOrientation;
    NSMutableArray *_writers;
    NSString *_videoSavedPath;
    NSObject<OS_dispatch_queue> *_videoPreloadQueue;
    unsigned long long _bitrate;
    NSObject<OS_dispatch_queue> *_makeThumbnailQueue;
    struct CGSize _finalSize;
    CDStruct_1b6d18a9 _startSampleTimeStamp;
    CDStruct_1b6d18a9 _currentSampleTimeStamp;
    struct CGAffineTransform _videoTransform;
}

@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *makeThumbnailQueue; // @synthesize makeThumbnailQueue=_makeThumbnailQueue;
@property(nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(nonatomic) CDStruct_1b6d18a9 currentSampleTimeStamp; // @synthesize currentSampleTimeStamp=_currentSampleTimeStamp;
@property(nonatomic) CDStruct_1b6d18a9 startSampleTimeStamp; // @synthesize startSampleTimeStamp=_startSampleTimeStamp;
@property(nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) struct CGSize finalSize; // @synthesize finalSize=_finalSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoPreloadQueue; // @synthesize videoPreloadQueue=_videoPreloadQueue;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) int frameNumber; // @synthesize frameNumber=_frameNumber;
@property(retain, nonatomic) NSString *videoSavedPath; // @synthesize videoSavedPath=_videoSavedPath;
@property(retain, nonatomic) NSMutableArray *writers; // @synthesize writers=_writers;
@property(nonatomic) float sectionDuration; // @synthesize sectionDuration=_sectionDuration;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) struct CGAffineTransform videoTransform; // @synthesize videoTransform=_videoTransform;
@property(nonatomic) NSObject<QQRichVideoPreloadWriterManagerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageFromSampleBuffer:(struct __CVBuffer *)arg1 transform:(struct CGAffineTransform)arg2;
- (id)thumbnailFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 finalSize:(struct CGSize)arg2;
- (struct opaqueCMSampleBuffer *)setTimeStamp:(CDStruct_1b6d18a9)arg1 ToSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)QQRichVideoPreloadWriter:(id)arg1 recordError:(id)arg2;
- (void)QQRichVideoPreloadWriter:(id)arg1 finishedRecordWithUrl:(id)arg2;
- (void)makeThumbnailWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopRecord;
- (void)startRecord;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 Type:(int)arg2;
- (_Bool)createVideoSavedPath;
- (void)initVideoSettings;
- (id)initWithSavedPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

