//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCell.h>

@class QQAIOCommonCellView, QQAIOMsgModel;

@interface QQAIOCommonCell : QQAIOCell
{
}

- (void)layoutSubviews;
- (void)tapHandler:(id)arg1;
- (void)updateCellView;
@property(retain, nonatomic) QQAIOMsgModel *aioModel;
- (void)setIndexPath:(id)arg1;
- (struct CGRect)GetPaoPaoBgRect;
- (struct CGRect)getContentBgRect;
- (void)prepareForReuse;

// Remaining properties
@property(retain, nonatomic) QQAIOCommonCellView *cellView;

@end
