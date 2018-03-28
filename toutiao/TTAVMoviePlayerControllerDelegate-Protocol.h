//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, TTAVMoviePlayerController;

@protocol TTAVMoviePlayerControllerDelegate <NSObject>

@optional
- (void)playerControllerPlayerLayerIsReadyToDisplay:(_Bool)arg1;
- (void)playerControllerBeforePrepareToPlay:(TTAVMoviePlayerController *)arg1;
- (void)playerControllerIsPrepareToPlay:(TTAVMoviePlayerController *)arg1;
- (void)playerController:(TTAVMoviePlayerController *)arg1 loadStateDidChange:(unsigned long long)arg2;
- (void)playerController:(TTAVMoviePlayerController *)arg1 playbackStateDidChange:(long long)arg2;
- (void)playerController:(TTAVMoviePlayerController *)arg1 playbackDidFinish:(NSDictionary *)arg2;
@end
