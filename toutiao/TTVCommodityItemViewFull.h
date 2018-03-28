//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, TTVCommodityEntity, UIButton, UIImageView, UILabel;
@protocol TTVCommodityItemViewFullDelegate;

@interface TTVCommodityItemViewFull : UIView
{
    _Bool _isFullScreen;
    TTVCommodityEntity *_entity;
    NSObject<TTVCommodityItemViewFullDelegate> *_delegate;
    UIButton *_background;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_couponLabel;
    UIButton *_buyButton;
    UIButton *_imageBuyButton;
    UIImageView *_recommandIcon;
}

@property(retain, nonatomic) UIImageView *recommandIcon; // @synthesize recommandIcon=_recommandIcon;
@property(retain, nonatomic) UIButton *imageBuyButton; // @synthesize imageBuyButton=_imageBuyButton;
@property(retain, nonatomic) UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *background; // @synthesize background=_background;
@property(nonatomic) __weak NSObject<TTVCommodityItemViewFullDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) TTVCommodityEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (void)openCommodityClickButton;
- (void)openCommodityByGesture;
- (void)openCommodityIsClickButton:(_Bool)arg1;
- (void)layoutSubviews;
- (void)resetPriceLabelIfNeed;
- (id)initWithFrame:(struct CGRect)arg1;

@end
