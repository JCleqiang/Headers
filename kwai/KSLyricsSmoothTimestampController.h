//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLyricsTimestampController.h"

@class KSDashed, UIImageView, UILabel;

@interface KSLyricsSmoothTimestampController : KSLyricsTimestampController
{
    _Bool _supportLyricsTap;
    float _duration;
    CDUnknownBlockType _didTimestampChanged;
    UILabel *_timeCard;
    KSDashed *_line;
    UIImageView *_timeArrow;
}

@property(retain, nonatomic) UIImageView *timeArrow; // @synthesize timeArrow=_timeArrow;
@property(retain, nonatomic) KSDashed *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *timeCard; // @synthesize timeCard=_timeCard;
@property(copy, nonatomic) CDUnknownBlockType didTimestampChanged; // @synthesize didTimestampChanged=_didTimestampChanged;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool supportLyricsTap; // @synthesize supportLyricsTap=_supportLyricsTap;
- (void).cxx_destruct;
- (void)seekToTimestamp:(long long)arg1 lyricsLineAtIndex:(unsigned long long)arg2;
- (void)setValidatedKRCxLyricsAdapter:(id)arg1 autoSeeking:(_Bool)arg2;
- (void)seekToTimestamp:(long long)arg1 lyricsLineAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)scrollToLyricsLineIndex:(unsigned long long)arg1 animation:(_Bool)arg2 callBackNeeded:(_Bool)arg3;
- (void)scrollToLyricsLineIndex:(unsigned long long)arg1 animation:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)showLyricsIndicator:(_Bool)arg1;
- (void)displayLyrics;
- (void)updateLyricsWithTimeStamp:(long long)arg1 index:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)lineOriginY;
- (void)setValidatedKRCxLyricsAdapter:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)updateVisiableCells;
- (void)scrollToWordEnderLineWithScrollView:(id)arg1;
- (void)scrollToWordEnderLineWithoutCallBack;
- (void)updateTimeCard:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
