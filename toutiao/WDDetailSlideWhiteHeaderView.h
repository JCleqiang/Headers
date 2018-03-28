//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "WDDetailSlideHeaderViewProtocol-Protocol.h"

@class NSString, SSThemedImageView, TTAlphaThemedButton, TTTAttributedLabel, WDDetailModel;
@protocol WDDetailSlideHeaderViewDelegate;

@interface WDDetailSlideWhiteHeaderView : SSThemedView <WDDetailSlideHeaderViewProtocol>
{
    id <WDDetailSlideHeaderViewDelegate> _delegate;
    SSThemedView *_bgView;
    TTTAttributedLabel *_questionContentLabel;
    TTAlphaThemedButton *_transparentButton;
    TTAlphaThemedButton *_checkAnswerButton;
    TTAlphaThemedButton *_writeAnswerButton;
    TTAlphaThemedButton *_middleAnswerButton;
    SSThemedImageView *_iconImageView;
    SSThemedView *_singleLineView;
    SSThemedView *_bottomSeparateView;
    WDDetailModel *_initialDetailModel;
    WDDetailModel *_currentDetailModel;
}

@property(retain, nonatomic) WDDetailModel *currentDetailModel; // @synthesize currentDetailModel=_currentDetailModel;
@property(retain, nonatomic) WDDetailModel *initialDetailModel; // @synthesize initialDetailModel=_initialDetailModel;
@property(retain, nonatomic) SSThemedView *bottomSeparateView; // @synthesize bottomSeparateView=_bottomSeparateView;
@property(retain, nonatomic) SSThemedView *singleLineView; // @synthesize singleLineView=_singleLineView;
@property(retain, nonatomic) SSThemedImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) TTAlphaThemedButton *middleAnswerButton; // @synthesize middleAnswerButton=_middleAnswerButton;
@property(retain, nonatomic) TTAlphaThemedButton *writeAnswerButton; // @synthesize writeAnswerButton=_writeAnswerButton;
@property(retain, nonatomic) TTAlphaThemedButton *checkAnswerButton; // @synthesize checkAnswerButton=_checkAnswerButton;
@property(retain, nonatomic) TTAlphaThemedButton *transparentButton; // @synthesize transparentButton=_transparentButton;
@property(retain, nonatomic) TTTAttributedLabel *questionContentLabel; // @synthesize questionContentLabel=_questionContentLabel;
@property(retain, nonatomic) SSThemedView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <WDDetailSlideHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)goodAnswerWriteButtonTapped;
- (void)writeAnswerButtonTapped;
- (void)allAnswerButtonTapped;
- (double)heightForContentLabel;
- (struct CGRect)frameForContentLabel;
- (void)updateFrame;
- (void)updateQuestionTitleContent;
- (void)updateContent;
- (void)addKVO;
- (void)reloadView;
- (void)updateCurrentDetailModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 detailModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
