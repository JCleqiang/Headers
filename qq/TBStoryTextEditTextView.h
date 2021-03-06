//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@interface TBStoryTextEditTextView : UITextView
{
    _Bool _freshColor;
    _Bool _firstResponderEnabled;
    double _textZoomScale;
}

@property(nonatomic) double textZoomScale; // @synthesize textZoomScale=_textZoomScale;
@property(nonatomic, getter=isFirstResponderEnabled) _Bool firstResponderEnabled; // @synthesize firstResponderEnabled=_firstResponderEnabled;
@property(nonatomic, getter=isFreshColor) _Bool freshColor; // @synthesize freshColor=_freshColor;
- (void)applyScale:(double)arg1 toLayer:(id)arg2;
- (void)applyScale:(double)arg1 toView:(id)arg2;
- (void)updateForZoomScale:(double)arg1;
- (_Bool)becomeFirstResponder;
- (void)setTintColor:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;

@end

