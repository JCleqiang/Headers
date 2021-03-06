//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDate, NSTimer;

@interface JKCountDownButton : UIButton
{
    long long _second;
    unsigned long long _totalSecond;
    NSTimer *_timer;
    NSDate *_startDate;
    CDUnknownBlockType _countDownChanging;
    CDUnknownBlockType _countDownFinished;
    CDUnknownBlockType _touchedCountDownButtonHandler;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)countDownFinished:(CDUnknownBlockType)arg1;
- (void)countDownChanging:(CDUnknownBlockType)arg1;
- (void)stopCountDown;
- (void)timerStart:(id)arg1;
- (void)startCountDownWithSecond:(unsigned long long)arg1;
- (void)touched:(id)arg1;
- (void)countDownButtonHandler:(CDUnknownBlockType)arg1;

@end

