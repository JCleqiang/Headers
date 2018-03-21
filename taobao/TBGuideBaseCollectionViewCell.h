//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, TBGuideListItem, TBIconFontButton, TBNavigationController, UIButton, UIView;

@interface TBGuideBaseCollectionViewCell : UICollectionViewCell
{
    _Bool _showDislike;
    _Bool _isFirstCell;
    _Bool _isLastCell;
    _Bool _isZaning;
    int _rowType;
    int _menuType;
    NSString *_utPageName;
    TBNavigationController *_jumpNavigator;
    UIView *_cutLine;
    UIButton *_mainButton;
    TBIconFontButton *_likeButton;
    TBGuideListItem *_item;
    long long _cutlineType;
    double _willDisplayTime;
    double _endDisplayTime;
    long long _displayStatus;
}

+ (struct CGSize)contentSize;
+ (struct CGSize)contentSizeWithRowType:(int)arg1;
@property(nonatomic) long long displayStatus; // @synthesize displayStatus=_displayStatus;
@property(nonatomic) double endDisplayTime; // @synthesize endDisplayTime=_endDisplayTime;
@property(nonatomic) double willDisplayTime; // @synthesize willDisplayTime=_willDisplayTime;
@property(nonatomic) _Bool isZaning; // @synthesize isZaning=_isZaning;
@property(nonatomic) int menuType; // @synthesize menuType=_menuType;
@property(nonatomic) long long cutlineType; // @synthesize cutlineType=_cutlineType;
@property(nonatomic) int rowType; // @synthesize rowType=_rowType;
@property(retain, nonatomic) TBGuideListItem *item; // @synthesize item=_item;
@property(retain, nonatomic) TBIconFontButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(nonatomic) _Bool isFirstCell; // @synthesize isFirstCell=_isFirstCell;
@property(nonatomic) _Bool showDislike; // @synthesize showDislike=_showDislike;
@property(retain, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
@property(retain, nonatomic) UIView *cutLine; // @synthesize cutLine=_cutLine;
@property(nonatomic) __weak TBNavigationController *jumpNavigator; // @synthesize jumpNavigator=_jumpNavigator;
@property(copy, nonatomic) NSString *utPageName; // @synthesize utPageName=_utPageName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (double)displayTime;
- (void)endDisplay;
- (void)willDisplay;
- (void)contentLikeStateChangeNotification:(id)arg1;
- (id)spm;
- (id)dataBoardView;
- (void)clickMainButton:(id)arg1;
- (void)updateZanButtonWithStatus;
- (void)updateZanButtonWithStatusWithAnimation:(_Bool)arg1;
- (void)onLikeCallBack:(id)arg1;
- (id)zanTotalText;
- (id)initWithFrame:(struct CGRect)arg1;

@end
