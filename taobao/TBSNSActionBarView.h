//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBIconFontButton, TBSCPraiseOperation, TBSNSWeDetailBaseItem;

@interface TBSNSActionBarView : UIView
{
    double _lastPraiseTime;
    _Bool _isPraised;
    TBIconFontButton *_commentButton;
    TBIconFontButton *_praiseButton;
    TBIconFontButton *_shareButton;
    unsigned long long _praiseCnt;
    unsigned long long _commentCnt;
    TBSNSWeDetailBaseItem *_baseItem;
    TBSCPraiseOperation *_praiseOperater;
}

@property(retain, nonatomic) TBSCPraiseOperation *praiseOperater; // @synthesize praiseOperater=_praiseOperater;
@property(retain, nonatomic) TBSNSWeDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(nonatomic) unsigned long long commentCnt; // @synthesize commentCnt=_commentCnt;
@property(nonatomic) unsigned long long praiseCnt; // @synthesize praiseCnt=_praiseCnt;
@property(nonatomic) _Bool isPraised; // @synthesize isPraised=_isPraised;
@property(retain, nonatomic) TBIconFontButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TBIconFontButton *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(retain, nonatomic) TBIconFontButton *commentButton; // @synthesize commentButton=_commentButton;
- (void).cxx_destruct;
- (void)shareBtnClicked:(id)arg1;
- (void)dealloc;
- (void)showPraiseAnimation;
- (void)updateFeedPraisedCntBtn;
- (void)updateCommentCntBtn;
- (void)deleteCommentCount;
- (void)addCommentCount;
- (void)dealWithPraiseOperate;
- (void)praiseBtnClicked:(id)arg1;
- (void)setupTBToolbarItems;
- (void)updateIsPraisedBtn;
- (void)updateDataWithExtendItem:(id)arg1;
- (void)refreshInputBarData;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 BaseItem:(id)arg2 CommentCnt:(unsigned long long)arg3 PraiseCnt:(unsigned long long)arg4 isPraise:(_Bool)arg5;

@end

