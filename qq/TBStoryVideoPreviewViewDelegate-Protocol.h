//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class TBStoryVideoPreviewView;

@protocol TBStoryVideoPreviewViewDelegate <NSObject>

@optional
- (void)storyVideoPreview:(TBStoryVideoPreviewView *)arg1 changedWithTime:(double)arg2 videoTotalDuration:(double)arg3;
- (void)storyVideoPreview:(TBStoryVideoPreviewView *)arg1 preparedStatus:(_Bool)arg2;
- (void)storyVideoPreviewDidStop:(TBStoryVideoPreviewView *)arg1;
- (void)storyVideoPreviewDidPlay:(TBStoryVideoPreviewView *)arg1;
- (void)storyVideoPreviewReadyToPlay:(TBStoryVideoPreviewView *)arg1;
@end

