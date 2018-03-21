//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class DWAnchorNaviView, UIProgressView, UIView;

@interface DWSlider : UISlider
{
    UIProgressView *progressView;
    UIView *_sliderStrokeView;
    DWAnchorNaviView *_anchorNaviView;
}

@property(retain, nonatomic) DWAnchorNaviView *anchorNaviView; // @synthesize anchorNaviView=_anchorNaviView;
@property(retain, nonatomic) UIView *sliderStrokeView; // @synthesize sliderStrokeView=_sliderStrokeView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView;
- (void).cxx_destruct;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)hideAnchorBubbleView:(_Bool)arg1;
- (void)updateAnchorNaviWithDuration:(double)arg1;
- (void)updateAnchorNaviWithModels:(id)arg1 duration:(double)arg2;
- (void)setThumbSize:(struct CGSize)arg1;
- (void)setSecondaryTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setSecondaryValue:(float)arg1;
- (void)insertAnchorNaviView;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end
