//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel, UIView;

@interface WBVideoFollowButton : UIControl
{
    _Bool _shrinked;
    NSString *_title;
    UILabel *_label;
    UIView *_labelContentView;
    UIImageView *_imageView;
}

@property(nonatomic) _Bool shrinked; // @synthesize shrinked=_shrinked;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *labelContentView; // @synthesize labelContentView=_labelContentView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)followButtonSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

