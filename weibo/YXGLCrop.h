//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXGLVideoEffectBase.h"

@interface YXGLCrop : YXGLVideoEffectBase
{
    int _inputWidth;
    int _inputHeight;
    float _cropRatioX;
    float _cropRatioY;
    unsigned int _mHBuffer;
    unsigned int _mVBuffer;
}

@property(nonatomic) unsigned int mVBuffer; // @synthesize mVBuffer=_mVBuffer;
@property(nonatomic) unsigned int mHBuffer; // @synthesize mHBuffer=_mHBuffer;
@property(nonatomic) float cropRatioY; // @synthesize cropRatioY=_cropRatioY;
@property(nonatomic) float cropRatioX; // @synthesize cropRatioX=_cropRatioX;
@property(nonatomic) int inputHeight; // @synthesize inputHeight=_inputHeight;
@property(nonatomic) int inputWidth; // @synthesize inputWidth=_inputWidth;
- (void)freeCropEffect;
- (unsigned int)CropEffect:(int)arg1 hflip:(_Bool)arg2 vflip:(_Bool)arg3;
- (void)calCropRatio:(int)arg1 nSrcHeight:(int)arg2 nDstWidth:(int)arg3 nDstHeight:(int)arg4;
- (void)createCropEffect:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;

@end

