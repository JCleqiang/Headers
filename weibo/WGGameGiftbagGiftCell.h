//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WGBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, WGGiftbagInfo, WGProgressImageView;
@protocol WGGameGiftbagGiftCellDelegate;

@interface WGGameGiftbagGiftCell : WGBaseTableViewCell
{
    UIImageView *_headImage;
    UILabel *_title;
    UILabel *_subtitle;
    UILabel *_progressLabel;
    WGProgressImageView *_progressView;
    UIButton *_playBtn;
    WGGiftbagInfo *_giftbagInfo;
    id <WGGameGiftbagGiftCellDelegate> _delegate;
    UIImageView *_colorprogressView;
}

@property(retain, nonatomic) UIImageView *colorprogressView; // @synthesize colorprogressView=_colorprogressView;
@property(nonatomic) id <WGGameGiftbagGiftCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WGGiftbagInfo *giftbagInfo; // @synthesize giftbagInfo=_giftbagInfo;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) WGProgressImageView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
- (void).cxx_destruct;
- (void)gameGiftbagGiftplayBtnAction:(id)arg1;
- (void)configCell:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

