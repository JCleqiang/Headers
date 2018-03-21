//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCellView.h>

#import <QQMainProject/NIAttributedLabelDelegate-Protocol.h>

@class NIAttributedLabel, NSString;

@interface QQAIOTipFriendOriginCellView : QQAIOCellView <NIAttributedLabelDelegate>
{
    NSString *_content;
    _Bool _touchBegan;
    NIAttributedLabel *_tipsLabel;
    struct CGRect _bgRect;
}

- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)getBgRect;
- (void)updateCellView;
- (void)setMsgContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
