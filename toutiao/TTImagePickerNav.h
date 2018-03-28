//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTImageAlbumSelectViewDelegate-Protocol.h"
#import "TTImagePickerNavProtocol-Protocol.h"

@class NSString, TTAlbumModel, TTImageAlbumSelectView, UIButton, UIImageView, UILabel;
@protocol TTImagePickerNavDelegate;

@interface TTImagePickerNav : UIView <TTImageAlbumSelectViewDelegate, TTImagePickerNavProtocol>
{
    UILabel *numLabel;
    UILabel *completeLabel;
    int seletedCount;
    UIView *bottomLine;
    _Bool _enableSelcect;
    _Bool _isShowAlbum;
    _Bool _isTrackChanged;
    id <TTImagePickerNavDelegate> _delegate;
    unsigned long long _imagePickerMode;
    UILabel *_ablumName;
    UIImageView *_arrow;
    TTAlbumModel *_model;
    UIButton *_tipBtn;
    TTImageAlbumSelectView *_albumSelectView;
}

@property(nonatomic) _Bool isTrackChanged; // @synthesize isTrackChanged=_isTrackChanged;
@property(retain, nonatomic) TTImageAlbumSelectView *albumSelectView; // @synthesize albumSelectView=_albumSelectView;
@property(nonatomic) _Bool isShowAlbum; // @synthesize isShowAlbum=_isShowAlbum;
@property(retain, nonatomic) UIButton *tipBtn; // @synthesize tipBtn=_tipBtn;
@property(retain, nonatomic) TTAlbumModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *ablumName; // @synthesize ablumName=_ablumName;
@property(nonatomic) _Bool enableSelcect; // @synthesize enableSelcect=_enableSelcect;
@property(nonatomic) unsigned long long imagePickerMode; // @synthesize imagePickerMode=_imagePickerMode;
@property(nonatomic) __weak id <TTImagePickerNavDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectedCountDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)ttImageAlbumSelectViewDidSelect:(id)arg1;
- (id)bezierPathLayer:(struct CGRect)arg1;
- (void)didCompletedTheRequestWithAlbums:(id)arg1;
- (void)navBarTapAction;
- (void)completeTapAction;
- (void)_initViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
