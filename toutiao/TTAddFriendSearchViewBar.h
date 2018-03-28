//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, TTAlphaThemedButton;
@protocol TTAddFriendSearchViewBarDelegate;

@interface TTAddFriendSearchViewBar : SSThemedView
{
    id <TTAddFriendSearchViewBarDelegate> _delegate;
    NSString *_searchPlaceHolderText;
    NSString *_rightImageName;
    TTAlphaThemedButton *_backButton;
    SSThemedButton *_centerSearchBar;
    SSThemedImageView *_searchIconView;
    SSThemedLabel *_placeHolderLabel;
    TTAlphaThemedButton *_rightButton;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) TTAlphaThemedButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) SSThemedLabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) SSThemedImageView *searchIconView; // @synthesize searchIconView=_searchIconView;
@property(retain, nonatomic) SSThemedButton *centerSearchBar; // @synthesize centerSearchBar=_centerSearchBar;
@property(retain, nonatomic) TTAlphaThemedButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) NSString *rightImageName; // @synthesize rightImageName=_rightImageName;
@property(copy, nonatomic) NSString *searchPlaceHolderText; // @synthesize searchPlaceHolderText=_searchPlaceHolderText;
@property(nonatomic) __weak id <TTAddFriendSearchViewBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickRightButton:(id)arg1;
- (void)clickCenterSearchView:(id)arg1;
- (void)clickBackButton:(id)arg1;
- (void)initPublicProperties;
- (void)constraintsViews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
