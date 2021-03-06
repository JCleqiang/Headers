//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibrary/ALAsset.h>

@interface ALAsset (Video)
+ (_Bool)fixVideoForFastPlaybackWithInputPath:(id)arg1 outputPath:(id)arg2;
+ (void)updateVideoPath:(id)arg1 withAssetURL:(id)arg2;
+ (id)videoURLForPlaceholder:(id)arg1;
+ (id)cachedPathAssetIDDictionay;
+ (id)cachedPathAssetIDMapPath;
+ (long long)calTargetBitrateForVideoWithShoter:(long long)arg1 toRate:(long long)arg2 toResolution:(long long)arg3;
+ (_Bool)needCompressForVideo:(id)arg1 toRate:(long long)arg2 toResolution:(long long)arg3;
+ (_Bool)needCompressForVideo:(id)arg1;
+ (_Bool)needCompressForVideoPath:(id)arg1;
+ (struct CGSize)videoSizeForVideo:(id)arg1;
+ (struct CGSize)videoSizeForVideoPath:(id)arg1;
+ (id)videoFullScreenImageForPath:(id)arg1;
+ (id)videoAspectThumbnailForPath:(id)arg1;
+ (id)videoThumbnailForPath:(id)arg1;
+ (id)convertVideoSyncToLowQualityWithInput:(id)arg1 WithOutput:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
+ (void)cropVideoToLowQualityWithInput:(id)arg1 WithOutput:(id)arg2 withTranfrom:(struct CGAffineTransform)arg3 timeRange:(CDStruct_e83c9415)arg4 handler:(CDUnknownBlockType)arg5;
+ (void)convertVideoToLowQualityWithInput:(id)arg1 WithOutput:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)convertVideoToLowQualityWithInput:(id)arg1 Output:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)convertVideoToLowQualityWithOutput:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 handler:(CDUnknownBlockType)arg3;
- (void)convertVideoToLowQualityWithOutput:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)isVideoType;
@end

