//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APExceptionView, APTiledImageView, NSDictionary, NSTimer, UIImageView, UILabel, UIWindow;

@interface APThrottleFlowView : NSObject
{
    NSTimer *_timer;
    UIWindow *_window;
    APTiledImageView *_bgImageView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_countdownLabel;
    APExceptionView *_exceptionView;
    _Bool _waiting;
    double _stopTime;
    NSDictionary *_ctrlParams;
}

@property(retain, nonatomic) NSDictionary *ctrlParams; // @synthesize ctrlParams=_ctrlParams;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
- (void).cxx_destruct;
- (_Bool)checkShow;
- (id)titleColor;
- (void)updateViewWithRemainingTime:(double)arg1;
- (void)onTimer:(id)arg1;
- (void)setCountdownDidCompleteBlock:(CDUnknownBlockType)arg1;
- (void)stopCountdown;
- (void)startCountdown:(double)arg1;
- (void)dismiss;
- (void)show;
- (_Bool)parseParams:(id)arg1;
- (void)show:(id)arg1;
- (id)init;
- (void)dealloc;

@end
