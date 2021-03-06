//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSSHPBaseCell.h"

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, TTTAttributedLabel, UILabel;

@interface AWSStockProfileAcceptCell : AWSSHPBaseCell <TTTAttributedLabelDelegate>
{
    TTTAttributedLabel *_label;
    UILabel *_time;
}

+ (double)cellHeight:(id)arg1 phone:(id)arg2;
+ (id)createCellWithTableView:(id)arg1;
@property(retain, nonatomic) UILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) TTTAttributedLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)setAttrString:(id)arg1 phone:(id)arg2;
- (void)setTips:(id)arg1 time:(id)arg2 phone:(id)arg3;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

