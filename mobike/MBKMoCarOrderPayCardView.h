//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKMoCarAddressView, MBKMoCarOrderInfoModel, MBKMoCarOrderPayCardItemView, UIButton, UILabel;

@interface MBKMoCarOrderPayCardView : UIView
{
    CDUnknownBlockType _priceDetailBlock;
    CDUnknownBlockType _confirmPayBlock;
    MBKMoCarOrderInfoModel *_dataModel;
    MBKMoCarAddressView *_topAddressView;
    MBKMoCarOrderPayCardItemView *_timeItemView;
    MBKMoCarOrderPayCardItemView *_distanceItemView;
    UILabel *_priceLab;
    UILabel *_deductionLab;
    UIButton *_priceDetailBtn;
    UIButton *_confirmPayBtn;
}

@property(retain, nonatomic) UIButton *confirmPayBtn; // @synthesize confirmPayBtn=_confirmPayBtn;
@property(retain, nonatomic) UIButton *priceDetailBtn; // @synthesize priceDetailBtn=_priceDetailBtn;
@property(retain, nonatomic) UILabel *deductionLab; // @synthesize deductionLab=_deductionLab;
@property(retain, nonatomic) UILabel *priceLab; // @synthesize priceLab=_priceLab;
@property(retain, nonatomic) MBKMoCarOrderPayCardItemView *distanceItemView; // @synthesize distanceItemView=_distanceItemView;
@property(retain, nonatomic) MBKMoCarOrderPayCardItemView *timeItemView; // @synthesize timeItemView=_timeItemView;
@property(retain, nonatomic) MBKMoCarAddressView *topAddressView; // @synthesize topAddressView=_topAddressView;
@property(retain, nonatomic) MBKMoCarOrderInfoModel *dataModel; // @synthesize dataModel=_dataModel;
@property(copy, nonatomic) CDUnknownBlockType confirmPayBlock; // @synthesize confirmPayBlock=_confirmPayBlock;
@property(copy, nonatomic) CDUnknownBlockType priceDetailBlock; // @synthesize priceDetailBlock=_priceDetailBlock;
- (void).cxx_destruct;
- (void)seupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
