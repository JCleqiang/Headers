//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (MBKFoundation)
+ (id)mbk_imageForScrollView:(id)arg1;
+ (id)mbk_imageForView:(id)arg1;
+ (id)mbk_imageForLayer:(id)arg1;
+ (id)mbk_imageWithColor:(id)arg1;
+ (id)mbk_imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (id)mbk_imageRotatedByDegrees:(double)arg1 withScale:(double)arg2;
- (id)mbk_imageRotatedByDegrees:(double)arg1;
- (_Bool)saveToPath:(id)arg1;
- (id)mbk_applyWaterMarkWithText:(id)arg1;
- (id)mbk_applyWaterMarkWithImage:(id)arg1;
- (id)mbk_blurredImageWithRadius:(double)arg1 iterations:(unsigned long long)arg2 tintColor:(id)arg3;
- (id)imageCompressWithSimple:(id)arg1 scale:(float)arg2;
- (id)mbk_imageImageOrientationUp;
- (struct CGContext *)mbk_createARGBBitmapContextFromImage:(struct CGImage *)arg1;
- (id)mbk_applyGaussianBlurWithRadius:(double)arg1;
- (id)mbk_applyBlurForEdgeInsets:(struct UIEdgeInsets)arg1 withRadius:(double)arg2 tintColor:(id)arg3 saturationDeltaFactor:(double)arg4 maskImage:(id)arg5 didCancel:(CDUnknownBlockType)arg6;
- (id)mbk_applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4 didCancel:(CDUnknownBlockType)arg5;
- (id)mbk_applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (_Bool)mbk_isARGB8888:(struct CGImage *)arg1;
- (id)mbk_applyResizeToSize:(struct CGSize)arg1 withContentMode:(long long)arg2;
- (id)mbk_imageWithCornerRadius:(struct CGSize)arg1 radius:(double)arg2 contentMode:(long long)arg3;
- (id)mbk_decodedImage;
- (id)mbk_resizeToSize:(struct CGSize)arg1 contentMode:(long long)arg2;
- (id)mbk_resizedImageWithMaximumSize:(struct CGSize)arg1;
- (id)mbk_resizedImageWithMinimumSize:(struct CGSize)arg1;
- (id)mbk_resizedImageByHeight:(unsigned long long)arg1;
- (id)mbk_resizedImageByWidth:(unsigned long long)arg1;
- (id)drawImageInBounds:(struct CGRect)arg1;
- (struct CGImage *)CGImageWithCorrectOrientation;
- (id)mbk_squareImage;
- (id)mbk_imageCroppedToRect:(struct CGRect)arg1;
@end

