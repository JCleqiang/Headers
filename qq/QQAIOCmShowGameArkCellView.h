//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOArkAppCellView.h>

@class QQTwinkleCircleProgressView, UIImageView, UILabel;

@interface QQAIOCmShowGameArkCellView : QQAIOArkAppCellView
{
    UIImageView *_progressMaskView;
    QQTwinkleCircleProgressView *_progressView;
    UILabel *_progressLabel;
}

- (void)handleSpriteDownloadUpdate:(id)arg1;
- (id)getMenuItems;
- (void)adjustCellViewCenter;
- (void)setProgress:(double)arg1;
- (void)removeSpriteProgressView;
- (void)showSpriteProgressViewWithProgress:(float)arg1;
- (void)setAioModel:(id)arg1;
- (void)willDrawBubble;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)dealloc;

@end
