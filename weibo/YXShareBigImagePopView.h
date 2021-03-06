//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel, UIViewController, YXWBShareBigImageInfoModel;

@interface YXShareBigImagePopView : UIView
{
    UILabel *_titleLabel;
    UILabel *_inviteCode;
    UIView *_shareItem;
    UIViewController *_parentViewController;
    YXWBShareBigImageInfoModel *_shareInfo;
    UIView *_contentView;
    UIView *_backgroundView;
    NSMutableArray *_shareButton;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableArray *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) YXWBShareBigImageInfoModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)share:(long long)arg1;
- (void)clickShareItem:(id)arg1;
- (void)mkShareItem;
- (void)addShareItem;
@property(readonly, nonatomic) UIView *shareItem; // @synthesize shareItem=_shareItem;
@property(readonly, nonatomic) UILabel *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)dismissPopView;
- (void)showPopView:(id)arg1 shareInfo:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

