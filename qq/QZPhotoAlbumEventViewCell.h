//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>

@class CATextLayer, MQZoneAutoPlayImageView, NSArray, NSDictionary, NSString, QZAutoPlayGifView, QZPhotoEventImageManager, UIButton, UIImageView, UILabel, UIView;
@protocol QZPhotoAlbumEventViewCellDelegate;

@interface QZPhotoAlbumEventViewCell : UITableViewCell <QZPhotoModuleDownloaderInterfaceDelegate>
{
    NSDictionary *_eventDict;
    UIView *_bgView;
    CATextLayer *_titleLabel;
    UILabel *_descLabel;
    NSArray *_imgViewArray;
    UILabel *_imgCountLabel;
    UIView *_moreMaskView;
    UIButton *_uploadBtn;
    UIView *_bottomLineView;
    NSString *_dateStr;
    UIView *_cardView;
    MQZoneAutoPlayImageView *_coverImgView;
    QZAutoPlayGifView *_gifImageView;
    UILabel *_numLabel;
    UIImageView *_photoIcon;
    NSString *_title;
    NSString *_decorationUrl;
    NSString *_currentImageKey;
    QZPhotoEventImageManager *_imageManager;
    int _xo;
    id <QZPhotoAlbumEventViewCellDelegate> _delegate;
    UIImageView *_decorationImgView;
}

@property(retain, nonatomic) NSString *decorationUrl; // @synthesize decorationUrl=_decorationUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *decorationImgView; // @synthesize decorationImgView=_decorationImgView;
@property(nonatomic) __weak id <QZPhotoAlbumEventViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)titleAttributeDictionary;

// Remaining properties
@property(retain, nonatomic) UIView *bgView; // @dynamic bgView;
@property(retain, nonatomic) UIView *bottomLineView; // @dynamic bottomLineView;
@property(retain, nonatomic) UIView *cardView; // @dynamic cardView;
@property(retain, nonatomic) MQZoneAutoPlayImageView *coverImgView; // @dynamic coverImgView;
@property(retain, nonatomic) NSString *currentImageKey; // @dynamic currentImageKey;
@property(retain, nonatomic) NSString *dateStr; // @dynamic dateStr;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UILabel *descLabel; // @dynamic descLabel;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *eventDict; // @dynamic eventDict;
@property(retain, nonatomic) QZAutoPlayGifView *gifImageView; // @dynamic gifImageView;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QZPhotoEventImageManager *imageManager; // @dynamic imageManager;
@property(retain, nonatomic) UILabel *imgCountLabel; // @dynamic imgCountLabel;
@property(retain, nonatomic) NSArray *imgViewArray; // @dynamic imgViewArray;
@property(retain, nonatomic) UIView *moreMaskView; // @dynamic moreMaskView;
@property(retain, nonatomic) UILabel *numLabel; // @dynamic numLabel;
@property(retain, nonatomic) UIImageView *photoIcon; // @dynamic photoIcon;
@property(readonly) Class superclass;
@property(retain, nonatomic) CATextLayer *titleLabel; // @dynamic titleLabel;
@property(retain, nonatomic) UIButton *uploadBtn; // @dynamic uploadBtn;

@end
