//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class DOUAudioStreamer, HTSVideoMusicModel, HTSVideoMusicSliderView, NSDictionary, SSThemedImageView, SSThemedLabel, SSThemedView, TTAlphaThemedButton, UIImageView;

@interface HTSVideoAudioClipperViewController : SSViewControllerBase
{
    _Bool _shouldResumePlayInForeground;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _cancelHandle;
    double _startTime;
    TTAlphaThemedButton *_cancelButton;
    SSThemedLabel *_navigationTitle;
    SSThemedView *_naviSplit;
    TTAlphaThemedButton *_confirmButton;
    SSThemedImageView *_musicCoverBackAlbum;
    UIImageView *_musicCover;
    SSThemedLabel *_titleLabel;
    SSThemedLabel *_authorLabel;
    HTSVideoMusicSliderView *_sliderView;
    HTSVideoMusicModel *_musicModel;
    DOUAudioStreamer *_player;
    NSDictionary *_extraTrack;
}

@property(nonatomic) _Bool shouldResumePlayInForeground; // @synthesize shouldResumePlayInForeground=_shouldResumePlayInForeground;
@property(copy, nonatomic) NSDictionary *extraTrack; // @synthesize extraTrack=_extraTrack;
@property(retain, nonatomic) DOUAudioStreamer *player; // @synthesize player=_player;
@property(retain, nonatomic) HTSVideoMusicModel *musicModel; // @synthesize musicModel=_musicModel;
@property(retain, nonatomic) HTSVideoMusicSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) SSThemedLabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *musicCover; // @synthesize musicCover=_musicCover;
@property(retain, nonatomic) SSThemedImageView *musicCoverBackAlbum; // @synthesize musicCoverBackAlbum=_musicCoverBackAlbum;
@property(retain, nonatomic) TTAlphaThemedButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) SSThemedView *naviSplit; // @synthesize naviSplit=_naviSplit;
@property(retain, nonatomic) SSThemedLabel *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(retain, nonatomic) TTAlphaThemedButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType cancelHandle; // @synthesize cancelHandle=_cancelHandle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)_setupInitContent;
- (void)trackWithV3Event:(id)arg1 extraDic:(id)arg2;
- (void)confirmButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)stopSpin;
- (void)startSpin;
- (id)spinAnimationWithDuration:(double)arg1 clockwise:(_Bool)arg2 repeat:(_Bool)arg3;
- (id)initWithModel:(id)arg1 AndPlayer:(id)arg2 extraTrack:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)themeChanged:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)viewDidLoad;
- (void)dealloc;

@end

