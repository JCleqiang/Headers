//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol FalconCameraDelegate <NSObject>
- (long long)ProcessLowQualityPhoto:(UIImage *)arg1;
- (long long)ProcessPhoto:(char *)arg1 width:(long long)arg2 height:(long long)arg3 captureImg:(UIImage *)arg4 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg5;
- (long long)ProcessVideo:(char *)arg1 width:(long long)arg2 height:(long long)arg3;
@end
