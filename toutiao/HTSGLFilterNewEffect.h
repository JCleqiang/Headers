//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

#import "RenderMsgDelegate-Protocol.h"

@class HTSSenseTimeManager, IRenderMsgDelegateManager, NSString;
@protocol HTSGLFilterEffectDelegate;

@interface HTSGLFilterNewEffect : HTSGLFilter <RenderMsgDelegate>
{
    struct st_mobile_human_action_t stDetectResult;
    int iWidth;
    int iHeight;
    _Bool _isFrontCamera;
    _Bool _needFaceDetect;
    _Bool _needMatting;
    _Bool _needHairColor;
    _Bool _enableFakeFace;
    id <HTSGLFilterEffectDelegate> _delegate;
    unsigned long long _needEffect;
    long long _deviceOrientation;
    CDUnknownBlockType _detectFaceStatus;
    struct __CVBuffer *_currentPixelBuffer;
    void *_renderMangerHandle;
    IRenderMsgDelegateManager *_IESGpuProcessMsg;
    HTSSenseTimeManager *_senseTimeManager;
    CDUnknownBlockType _IESStickerStatusBlock;
    CDUnknownBlockType _IESStickerAnimationFinishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType IESStickerAnimationFinishBlock; // @synthesize IESStickerAnimationFinishBlock=_IESStickerAnimationFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType IESStickerStatusBlock; // @synthesize IESStickerStatusBlock=_IESStickerStatusBlock;
@property(retain, nonatomic) HTSSenseTimeManager *senseTimeManager; // @synthesize senseTimeManager=_senseTimeManager;
@property(retain, nonatomic) IRenderMsgDelegateManager *IESGpuProcessMsg; // @synthesize IESGpuProcessMsg=_IESGpuProcessMsg;
@property(nonatomic) void *renderMangerHandle; // @synthesize renderMangerHandle=_renderMangerHandle;
@property(nonatomic) _Bool enableFakeFace; // @synthesize enableFakeFace=_enableFakeFace;
@property(nonatomic) _Bool needHairColor; // @synthesize needHairColor=_needHairColor;
@property(nonatomic) _Bool needMatting; // @synthesize needMatting=_needMatting;
@property(nonatomic) _Bool needFaceDetect; // @synthesize needFaceDetect=_needFaceDetect;
@property(nonatomic) struct __CVBuffer *currentPixelBuffer; // @synthesize currentPixelBuffer=_currentPixelBuffer;
@property(copy, nonatomic) CDUnknownBlockType detectFaceStatus; // @synthesize detectFaceStatus=_detectFaceStatus;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) unsigned long long needEffect; // @synthesize needEffect=_needEffect;
@property(nonatomic) __weak id <HTSGLFilterEffectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setDetectedFaces:(void *)arg1;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setBeautifyWithType:(unsigned long long)arg1 smoothIntensity:(double)arg2 whiteIntensity:(double)arg3;
- (void)switchFilterWithPathOne:(id)arg1 pathTwo:(id)arg2 progress:(double)arg3;
- (void)applyIndensity:(struct IESIndensityParam_t)arg1 type:(long long)arg2;
- (void)applyEffect:(id)arg1 type:(long long)arg2;
- (void)pauseEffectAudio;
- (void)resumeEffectAudio;
- (void)releaseResources;
- (void)releaseRenderManager;
- (id)initWithStickerDocumentPath:(id)arg1 completeBlock:(CDUnknownBlockType)arg2 stickerLoadStatusBlock:(CDUnknownBlockType)arg3;
- (_Bool)msgProc:(unsigned int)arg1 arg1:(int)arg2 arg2:(int)arg3 arg3:(const char *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

