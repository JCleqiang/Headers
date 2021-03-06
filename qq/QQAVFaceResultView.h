//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView;
@protocol QQAVFaceResultViewDelegate;

@interface QQAVFaceResultView : UIView
{
    UIView *_bgView;
    CAGradientLayer *_bgLayer;
    UIImageView *_flowView;
    UIImageView *_textView;
    UIImageView *_excellentView;
    int _hitResult;
    id <QQAVFaceResultViewDelegate> _delegate;
}

@property(nonatomic) int hitResult; // @synthesize hitResult=_hitResult;
@property(nonatomic) id <QQAVFaceResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopAnimate;
- (void)startAnimate;
- (void)setHitResult:(int)arg1 isStartAnimate:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

