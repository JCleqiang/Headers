//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class CABasicAnimation, NSString, SSThemedImageView, SSThemedLabel;

@interface TTExportFullscreenLoadingView : SSThemedView
{
    double _progress;
    NSString *_text;
    SSThemedImageView *_synthesizeVideoIndicatorView;
    SSThemedLabel *_synthesizeProgressLabel;
    SSThemedLabel *_textLabel;
    CABasicAnimation *_rotateAnimation;
}

@property(retain, nonatomic) CABasicAnimation *rotateAnimation; // @synthesize rotateAnimation=_rotateAnimation;
@property(retain, nonatomic) SSThemedLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) SSThemedLabel *synthesizeProgressLabel; // @synthesize synthesizeProgressLabel=_synthesizeProgressLabel;
@property(retain, nonatomic) SSThemedImageView *synthesizeVideoIndicatorView; // @synthesize synthesizeVideoIndicatorView=_synthesizeVideoIndicatorView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dismiss;
- (void)showOnView:(id)arg1;

@end

