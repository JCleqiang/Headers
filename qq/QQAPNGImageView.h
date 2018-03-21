//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CADisplayLink, CALayer, NSMutableDictionary, NSObject, NSOperationQueue, NSString, QQAPNGDecode, UIImage;
@protocol OS_dispatch_semaphore, QQImagePlayDelegate;

@interface QQAPNGImageView : UIImageView
{
    QQAPNGDecode *_decode;
    unsigned long long _nextIndex;
    unsigned long long _maxBufferCount;
    unsigned long long _incrBufferCount;
    _Bool _bufferMiss;
    unsigned long long _frameCount;
    double _frameSize;
    NSMutableDictionary *_buffer;
    CADisplayLink *_displayLink;
    double _time;
    UIImage *_coverImage;
    NSOperationQueue *parseQueue;
    unsigned long long _curIndex;
    UIImage *_curImage;
    _Bool _isEmoji;
    NSObject<OS_dispatch_semaphore> *_lock;
    _Bool _loopFinish;
    unsigned long long _curLoop;
    _Bool _animateAfterDecode;
    _Bool _showLastImgaeWhenPause;
    _Bool _needCache;
    int _decryptType;
    double _playSpeed;
    long long _playCount;
    NSString *_filePath;
    NSString *_runloopMode;
    id <QQImagePlayDelegate> _delegate;
    CALayer *_animateLayer;
}

+ (id)dispatchQueue;
+ (id)imageViewWithPath:(id)arg1 isEmoji:(_Bool)arg2;
@property(retain, nonatomic) CALayer *animateLayer; // @synthesize animateLayer=_animateLayer;
@property(nonatomic) id <QQImagePlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int decryptType; // @synthesize decryptType=_decryptType;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
@property(copy, nonatomic) NSString *runloopMode; // @synthesize runloopMode=_runloopMode;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) _Bool showLastImgaeWhenPause; // @synthesize showLastImgaeWhenPause=_showLastImgaeWhenPause;
@property(nonatomic) double playSpeed; // @synthesize playSpeed=_playSpeed;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dealWithDecodeImage:(id)arg1;
- (void)removeBuffer:(id)arg1;
- (void)calcAvailableMaxBuffer;
- (void)displayLayer:(id)arg1;
- (void)animate:(id)arg1;
- (id)getCoverImage;
- (void)resetAnimated;
- (void)setFilePath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)restartPlay;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFilePath:(id)arg1 isEmoji:(_Bool)arg2;
- (void)animateWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
