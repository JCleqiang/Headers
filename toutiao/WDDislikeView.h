//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFeedPopupView.h"

#import "TTFeedDislikeKeywordsViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SSThemedButton, TTFeedDislikeKeywordsView, UIImageView, UILabel, UIView;

@interface WDDislikeView : TTFeedPopupView <TTFeedDislikeKeywordsViewDelegate>
{
    UIView *_arrowBgView;
    UIView *_contentBgView;
    UILabel *_titleLabel;
    SSThemedButton *_okBtn;
    UIImageView *_arrowImageView;
    TTFeedDislikeKeywordsView *_keywordsView;
    NSMutableArray *_dislikeWords;
    SSThemedButton *_dislikeBtn;
    NSString *_adLogExtra;
    CDUnknownBlockType _didDislikeBlock;
}

+ (void)disable;
+ (void)enable;
+ (void)dismissIfVisible;
@property(copy, nonatomic) CDUnknownBlockType didDislikeBlock; // @synthesize didDislikeBlock=_didDislikeBlock;
@property(copy, nonatomic) NSString *adLogExtra; // @synthesize adLogExtra=_adLogExtra;
@property(retain, nonatomic) SSThemedButton *dislikeBtn; // @synthesize dislikeBtn=_dislikeBtn;
@property(retain, nonatomic) NSMutableArray *dislikeWords; // @synthesize dislikeWords=_dislikeWords;
@property(retain, nonatomic) TTFeedDislikeKeywordsView *keywordsView; // @synthesize keywordsView=_keywordsView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) SSThemedButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(retain, nonatomic) UIView *arrowBgView; // @synthesize arrowBgView=_arrowBgView;
- (void).cxx_destruct;
- (void)rootViewWillTransitionToSize:(id)arg1;
- (double)dislikeButtonImageTitleSpacing;
- (double)dislikeButtonGapX;
- (double)fontSizeForDislikeButton;
- (double)dislikeButtonHeight;
- (double)dislikeButtonWidth;
- (double)fontSizeForButton;
- (double)fontSizeForSubTitleLabel;
- (double)fontSizeForTitleLabel;
- (double)buttonRightPadding;
- (double)buttonGapX;
- (double)buttonHeight;
- (double)buttonWidth;
- (double)heightForTitleBar;
- (double)bottomPadding;
- (double)leftPadding;
- (double)arrowOffsetY;
- (void)themeChanged:(id)arg1;
- (void)dislikeKeywordsSelectionChanged;
- (void)clickMask;
- (void)okBtnClicked:(id)arg1;
- (void)refreshTitleLabel;
- (void)refreshOKBtn;
- (void)refreshContentUI;
- (void)refreshArrowUI;
- (void)showDislikeButton:(_Bool)arg1 atPoint:(struct CGPoint)arg2;
- (void)viewWillDisappear;
- (void)refreshUI;
- (void)dismiss:(_Bool)arg1;
- (id)selectedWords;
- (void)showAtPoint:(struct CGPoint)arg1 fromView:(id)arg2 didDislikeBlock:(CDUnknownBlockType)arg3;
- (void)refreshWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

