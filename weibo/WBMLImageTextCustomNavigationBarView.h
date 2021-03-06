//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UIButton, UILabel;
@protocol WBMLImageTextCustomNavigationBarViewProtcol;

@interface WBMLImageTextCustomNavigationBarView : UIView
{
    _Bool _followStatus;
    UIView *_rightInfo;
    id <WBMLImageTextCustomNavigationBarViewProtcol> _delegate;
    NSString *_title;
    UIButton *_backButton;
    UILabel *_backLabel;
    UIButton *_followButton;
    CAGradientLayer *_followButtonBackgroudColor;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAGradientLayer *followButtonBackgroudColor; // @synthesize followButtonBackgroudColor=_followButtonBackgroudColor;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *backLabel; // @synthesize backLabel=_backLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool followStatus; // @synthesize followStatus=_followStatus;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WBMLImageTextCustomNavigationBarViewProtcol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *rightInfo; // @synthesize rightInfo=_rightInfo;
- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
- (void)followOwnerBtnPressed:(id)arg1;
- (void)clickUser:(id)arg1;
- (void)addRightView:(id)arg1;
- (void)updateFollowButton:(_Bool)arg1;
- (void)addView;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

