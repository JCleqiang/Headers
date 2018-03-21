//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUBaseButton, AUIconView, NSString, UIColor, UIFont, UIImage, UILabel;

@interface AUNavItemView : UIView
{
    _Bool _isNavigationItem;
    NSString *_itemTitle;
    UIFont *_titleFont;
    UIImage *_nomarlStateIconImage;
    NSString *_nomarlStateIconFontName;
    NSString *_badgeNumber;
    NSString *_widgetId;
    NSString *_voiceOverText;
    double _touchEventMargin;
    long long _currentTabType;
    double _marginBetweenIconTitle;
    double _marginBetweenLeftIcon;
    double _badgeViewWidth;
    UILabel *_itemTitleLabel;
    AUBaseButton *_backgroundButton;
    AUIconView *_iconImageView;
    UIView *_badgeView;
    UIColor *_titleColor;
    UIColor *_normalBackgroundColor;
    struct CGSize _iconSize;
}

@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) AUIconView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) AUBaseButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(readonly, nonatomic) double badgeViewWidth; // @synthesize badgeViewWidth=_badgeViewWidth;
@property(readonly, nonatomic) double marginBetweenLeftIcon; // @synthesize marginBetweenLeftIcon=_marginBetweenLeftIcon;
@property(readonly, nonatomic) double marginBetweenIconTitle; // @synthesize marginBetweenIconTitle=_marginBetweenIconTitle;
@property(nonatomic) long long currentTabType; // @synthesize currentTabType=_currentTabType;
@property(readonly, nonatomic) double touchEventMargin; // @synthesize touchEventMargin=_touchEventMargin;
@property(nonatomic) _Bool isNavigationItem; // @synthesize isNavigationItem=_isNavigationItem;
@property(retain, nonatomic) NSString *voiceOverText; // @synthesize voiceOverText=_voiceOverText;
@property(copy, nonatomic) NSString *widgetId; // @synthesize widgetId=_widgetId;
@property(retain, nonatomic) NSString *badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(retain, nonatomic) NSString *nomarlStateIconFontName; // @synthesize nomarlStateIconFontName=_nomarlStateIconFontName;
@property(retain, nonatomic) UIImage *nomarlStateIconImage; // @synthesize nomarlStateIconImage=_nomarlStateIconImage;
@property(readonly, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
- (void).cxx_destruct;
- (struct CGSize)iconViewSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)onClicked;
- (void)removeIconImageViewFromSuperView;
- (void)createIconImageView;
- (void)refreshIconImageViewTmp:(_Bool)arg1;
- (void)createIconImageViewWithFontName:(id)arg1;
- (void)setNomarlStateIconImage:(id)arg1 withSize:(struct CGSize)arg2;
- (void)onCancelClicked:(id)arg1;
- (void)onWillClicked:(id)arg1;
- (void)resetUserInteractionEnabled;
- (void)onClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)aui_isKindOfClass:(Class)arg1;

@end
