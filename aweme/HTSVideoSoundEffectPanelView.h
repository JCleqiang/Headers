//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UISlider;

@interface HTSVideoSoundEffectPanelView : UIView
{
    UISlider *_bgmSlider;
    UISlider *_voiceSlider;
    UILabel *_bgmLabel;
    UILabel *_voiceLabe;
}

@property(retain, nonatomic) UILabel *voiceLabe; // @synthesize voiceLabe=_voiceLabe;
@property(retain, nonatomic) UILabel *bgmLabel; // @synthesize bgmLabel=_bgmLabel;
@property(nonatomic) __weak UISlider *voiceSlider; // @synthesize voiceSlider=_voiceSlider;
@property(nonatomic) __weak UISlider *bgmSlider; // @synthesize bgmSlider=_bgmSlider;
- (void).cxx_destruct;
@property(nonatomic) float voiceVolume;
@property(nonatomic) float musicVolume;
- (void)show;
- (void)close;
- (void)sliderValueChanged:(id)arg1;
- (void)resetButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
