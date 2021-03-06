//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MBKViewProtocol-Protocol.h"

@class MBKBaseViewController, MBKCardTypeCellModel, NSString, UIImageView, UILabel, UIView;

@interface MBKCardTypeCell : UITableViewCell <MBKViewProtocol>
{
    UIView *_cardBackgroundView;
    UIImageView *_cardBikeLogo;
    UILabel *_cardTitleLabel;
    UILabel *_leftDaysLabel;
    MBKCardTypeCellModel *_model;
    id _delegate;
    UIView *_separateView;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(nonatomic) __weak UIView *separateView; // @synthesize separateView=_separateView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKCardTypeCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *leftDaysLabel; // @synthesize leftDaysLabel=_leftDaysLabel;
@property(nonatomic) __weak UILabel *cardTitleLabel; // @synthesize cardTitleLabel=_cardTitleLabel;
@property(nonatomic) __weak UIImageView *cardBikeLogo; // @synthesize cardBikeLogo=_cardBikeLogo;
@property(nonatomic) __weak UIView *cardBackgroundView; // @synthesize cardBackgroundView=_cardBackgroundView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(nonatomic) __weak MBKBaseViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

