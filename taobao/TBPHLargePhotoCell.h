//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TBPHPhoto, UIImageView, UIScrollView;

@interface TBPHLargePhotoCell : UICollectionViewCell <UIScrollViewDelegate>
{
    TBPHPhoto *_photo;
    CDUnknownBlockType _singleClicked;
    UIScrollView *_scrollView;
    UIImageView *_coverImageView;
}

@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType singleClicked; // @synthesize singleClicked=_singleClicked;
@property(retain, nonatomic) TBPHPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)largeImageDoubleClicked:(id)arg1;
- (void)largeImageDidClicked;
- (void)loadAssetImageWithAsset:(id)arg1 comption:(CDUnknownBlockType)arg2;
- (void)loadOrignImage;
- (void)layoutImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)orignImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

