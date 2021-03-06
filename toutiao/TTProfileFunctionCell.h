//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class NSIndexPath, NSLayoutConstraint, SSThemedImageView, SSThemedLabel, TTBadgeNumberView, UISwitch;

@interface TTProfileFunctionCell : SSThemedTableViewCell
{
    SSThemedLabel *_titleLb;
    SSThemedImageView *_cellImageView;
    SSThemedLabel *_accessoryLb;
    TTBadgeNumberView *_badgeView;
    SSThemedImageView *_rightImageView;
    NSLayoutConstraint *_titleLeftMargin;
    UISwitch *_rightSwitch;
    CDUnknownBlockType _switchChanged;
    NSIndexPath *_index;
}

+ (double)fontSizeOfAccessory;
+ (double)fontSizeOfTitle;
@property(retain, nonatomic) NSIndexPath *index; // @synthesize index=_index;
@property(copy, nonatomic) CDUnknownBlockType switchChanged; // @synthesize switchChanged=_switchChanged;
@property(retain, nonatomic) UISwitch *rightSwitch; // @synthesize rightSwitch=_rightSwitch;
@property(nonatomic) __weak NSLayoutConstraint *titleLeftMargin; // @synthesize titleLeftMargin=_titleLeftMargin;
@property(nonatomic) __weak SSThemedImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(nonatomic) __weak TTBadgeNumberView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) __weak SSThemedLabel *accessoryLb; // @synthesize accessoryLb=_accessoryLb;
@property(nonatomic) __weak SSThemedImageView *cellImageView; // @synthesize cellImageView=_cellImageView;
@property(nonatomic) __weak SSThemedLabel *titleLb; // @synthesize titleLb=_titleLb;
- (void).cxx_destruct;
- (void)rightSwitchChanged;
- (void)layoutSubviews;
- (void)setCellImageName:(id)arg1;
- (void)refreshHintWithEntry:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

