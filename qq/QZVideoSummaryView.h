//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QZFeedCellDelegate-Protocol.h>

@class NSString, QzoneFeedLayoutView, QzoneFeedModel, UIImageView;

@interface QZVideoSummaryView : UIView <QZFeedCellDelegate>
{
    UIImageView *_bgView;
    QzoneFeedLayoutView *_layoutView;
    QzoneFeedModel *_feedModel;
}

@property(retain, nonatomic) QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
- (void).cxx_destruct;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)reset;
- (void)checkAutoPlayViewEvent:(long long)arg1 params:(id)arg2;
- (void)layoutVideoSummaryView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
