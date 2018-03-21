//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQAvatarPendantLoadObserver-Protocol.h>
#import <QQMainProject/StrangerDecorationDelegate-Protocol.h>
#import <QQMainProject/VASKeyframeAnimationDelegate-Protocol.h>

@class CALayer, NSString, QQAvatarPendantDIYInfo, QQAvatarPendantDisplayManager, UIView, VASKeyframeAnimation;
@protocol QQAvatarPendantPresentDelegate;

@interface QQAvatarPendantPresenter : NSObject <QQAvatarPendantLoadObserver, StrangerDecorationDelegate, VASKeyframeAnimationDelegate>
{
    long long _avatarPendantID;
    NSString *_uin;
    UIView<QQAvatarPendantPresentDelegate> *_delegate;
    CALayer *_layer;
    CALayer *_diyLayer;
    _Bool _userInteractionEnabled;
    _Bool _notPlay;
    QQAvatarPendantDIYInfo *_pendantDiyInfo;
    _Bool _hasRequestDiyPendant;
    int _xo;
    struct {
        unsigned int useOutsideID:1;
        unsigned int isObservingUpdate:1;
        unsigned int isObservingDisplay:1;
    } _flags;
    _Bool _textDrawn;
    unsigned int _pendantDiyInfoId;
    long long _animationLoopTimes;
    unsigned long long _msgTime;
    unsigned long long _pendantId;
    long long _animateStatus;
    QQAvatarPendantDisplayManager *_displayManager;
    VASKeyframeAnimation *_keyframeAnimation;
}

@property(retain, nonatomic) VASKeyframeAnimation *keyframeAnimation; // @synthesize keyframeAnimation=_keyframeAnimation;
@property(nonatomic) QQAvatarPendantDisplayManager *displayManager; // @synthesize displayManager=_displayManager;
@property(nonatomic) long long animateStatus; // @synthesize animateStatus=_animateStatus;
@property(nonatomic) _Bool textDrawn; // @synthesize textDrawn=_textDrawn;
@property(nonatomic) unsigned int pendantDiyInfoId; // @synthesize pendantDiyInfoId=_pendantDiyInfoId;
@property(nonatomic) unsigned long long pendantId; // @synthesize pendantId=_pendantId;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(retain, nonatomic) QQAvatarPendantDIYInfo *pendantDiyInfo; // @synthesize pendantDiyInfo=_pendantDiyInfo;
@property(nonatomic) long long animationLoopTimes; // @synthesize animationLoopTimes=_animationLoopTimes;
@property(readonly, nonatomic) __weak CALayer *diyLayer; // @synthesize diyLayer=_diyLayer;
- (void).cxx_destruct;
- (id)getUrlParam;
- (id)getDiyImage:(id)arg1 pendantSize:(struct CGSize)arg2 stickerSacle:(double)arg3;
- (void)onGetStickerImages:(id)arg1;
- (void)onDiyFontLoadSuccess:(id)arg1;
- (void)setDiySticker:(_Bool)arg1;
- (void)onDiyPendantUpdate:(id)arg1;
- (void)keyframeAnimationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)playAnimationForLayer:(id)arg1 imageLists:(id)arg2 frameInterval:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)avatarPendantFileLoadedSuccess:(_Bool)arg1 byID:(long long)arg2 type:(int)arg3 frameInterval:(double)arg4 data:(id)arg5;
- (void)avatarPendantIDLoadedSuccess:(_Bool)arg1 forUin:(id)arg2 ID:(long long)arg3;
@property(nonatomic) long long avatarPendantID; // @dynamic avatarPendantID;
@property(nonatomic) __weak UIView<QQAvatarPendantPresentDelegate> *delegate; // @dynamic delegate;
@property(copy, nonatomic) NSString *uin; // @dynamic uin;
- (void)avatarPendantDisplay:(id)arg1;
- (void)avatarPendantUpdate:(id)arg1;
- (void)removeAvatarPendantUpdateNotification;
- (void)addAvatarPendantUpdateNotification;
- (void)removeAvatarPendantDisplayNotification;
- (void)addAvatarPendantDisplayNotification;
- (void)onStrangerPendantLoadSuccess:(_Bool)arg1 forUin:(id)arg2 ID:(long long)arg3 isCache:(_Bool)arg4;
- (void)showAvatarPendantDynamic:(_Bool)arg1 usingIDCache:(_Bool)arg2;
- (void)updateAvatarPendantWhenCellReuse;
- (void)loadStaticRes;
- (void)update;
- (void)animateAvatarPendant:(long long)arg1;
- (void)stopAnimateAvatarPendant:(long long)arg1;
- (void)stopAnimateAvatarPendant;
- (void)animateAvatarPendant;
- (void)setNeedsLayer;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak CALayer *layer; // @dynamic layer;
@property(nonatomic) _Bool notPlay; // @dynamic notPlay;
@property(readonly) Class superclass;
@property(nonatomic) _Bool userInteractionEnabled; // @dynamic userInteractionEnabled;

@end
