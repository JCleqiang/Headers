//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeServiceAddressOption, UIImageView, UILabel, UIView;

@interface TBExtBuySerViceAddressItemSubpageCell : TBExtBuyBaseCell
{
    _Bool _isSelected;
    TBTradeServiceAddressOption *_model;
    UILabel *_nameLabel;
    UILabel *_addressLabel;
    UILabel *_defaultLabel;
    UILabel *_tipLabel;
    UIImageView *_selectedImageView;
    UIView *_separateLine;
}

+ (id)addressStr:(id)arg1;
+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak TBTradeServiceAddressOption *model; // @synthesize model=_model;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end
