//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView, UILabel;

@interface TTVVideoDetailArrowButton : UIView
{
    UILabel *_numberLabel;
    UIButton *_button;
    UIImage *_arrowImage;
    UIImage *_downArrowImage;
    UIImageView *_arrow;
}

@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UIImage *downArrowImage; // @synthesize downArrowImage=_downArrowImage;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
- (void).cxx_destruct;
- (void)setIsFlod:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (id)downArrow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

