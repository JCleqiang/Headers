//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBLiveSVBroadCastInfoView, TBLiveSVTagAreaView, TBLiveShortVideoModel, TBLiveTweSVVC, UILabel;

@interface TBLiveSVIntroduceView : UIView
{
    _Bool _hideAccount;
    TBLiveSVBroadCastInfoView *_broadcastView;
    TBLiveSVTagAreaView *_tagAreaView;
    UILabel *_titleLabel;
    TBLiveShortVideoModel *_model;
    double _bottom;
    TBLiveTweSVVC *_superVC;
    double _broadcastInfoViewStartY;
}

@property(nonatomic) double broadcastInfoViewStartY; // @synthesize broadcastInfoViewStartY=_broadcastInfoViewStartY;
@property(nonatomic) __weak TBLiveTweSVVC *superVC; // @synthesize superVC=_superVC;
@property(nonatomic) _Bool hideAccount; // @synthesize hideAccount=_hideAccount;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) TBLiveShortVideoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBLiveSVTagAreaView *tagAreaView; // @synthesize tagAreaView=_tagAreaView;
@property(retain, nonatomic) TBLiveSVBroadCastInfoView *broadcastView; // @synthesize broadcastView=_broadcastView;
- (void).cxx_destruct;
- (void)refreshIntroduceViewWithPortrait:(_Bool)arg1;
- (struct CGPoint)originWithItemCard:(id)arg1;
- (void)setupBroadcastView;
- (void)setupTagAreaView;
- (void)setupTitleLabel;
- (void)setupSubviews;
- (id)initWithModel:(id)arg1 hideAccount:(_Bool)arg2 superVC:(id)arg3;

@end

