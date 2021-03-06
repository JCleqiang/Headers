//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPushToTalkView.h>

#import <QQMainProject/QQAnimojiVoiceAnimDelegate-Protocol.h>

@class NSString, QQAnimojiVoicePlayAnimationView;

@interface QQPushToTalkViewNew : QQPushToTalkView <QQAnimojiVoiceAnimDelegate>
{
    QQAnimojiVoicePlayAnimationView *_animojiVoicePlayAnimView;
    long long _pustToTalkStatusType;
}

- (_Bool)isNewAudioInputUI;
- (float)getOperateViewContainerY;
- (float)getOperateTipsLabelY;
- (float)getTimeLabelY;
- (void)setLabelColorAndFont:(id)arg1;
- (void)stopVoiceAnimMonitor;
- (void)startVoiceAnimMonitor;
- (void)resetToStart;
- (float)getAnimojiCurrentVoicePeakPower;
- (void)createDeleteButton;
- (void)creatPlayButton;
- (void)creatPushButton;
- (void)resetAnimView;
- (void)recordVoicePlayAnimView;
- (void)setPlayAnimationView;
- (void)createVoicePlayAnimView;
- (struct CGRect)getAudioPlayViewRect;
- (void)hideOperateTips;
- (void)UpdateTimeLableLocal:(long long)arg1;
- (struct CGRect)getPttTipsLableRect;
- (void)onSend;
- (void)onCancel;
- (void)touchBegin:(id)arg1;
- (void)setMaxScale;
- (void)showMask;
- (void)transformDeleteBtn:(float)arg1 heightScale:(float)arg2;
- (void)transformPlayBtn:(float)arg1 heightScale:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

