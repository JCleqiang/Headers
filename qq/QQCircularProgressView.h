//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, QQCircularTrackView, UILabel;
@protocol QQCircularProgressViewDelegate;

@interface QQCircularProgressView : UIView
{
    CADisplayLink *_displayLink;
    double _progressStep;
    double _nowProgress;
    id <QQCircularProgressViewDelegate> _delegate;
    UILabel *_progressLabel;
    float _progress;
    QQCircularTrackView *_trackView;
}

@property(retain, nonatomic) QQCircularTrackView *trackView; // @synthesize trackView=_trackView;
@property(nonatomic) id <QQCircularProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)setProgressFont:(id)arg1;
- (void)showLoadingWithoutProgress;
- (void)animationSelector:(id)arg1;
- (void)stopAnimation;
- (void)setProgressWithAnimation:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
