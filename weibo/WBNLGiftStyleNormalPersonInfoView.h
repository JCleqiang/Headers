//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WBNLGiftWithSenderModel, WBNLLiveUserView;

@interface WBNLGiftStyleNormalPersonInfoView : UIView
{
    WBNLGiftWithSenderModel *_giftData;
    CDUnknownBlockType _headTappedBlock;
    UIView *_bgView;
    UIView *_headView;
    WBNLLiveUserView *_userView;
    UILabel *_nickLabel;
    UILabel *_descLabel;
    UIButton *_tapButton;
}

@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) WBNLLiveUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType headTappedBlock; // @synthesize headTappedBlock=_headTappedBlock;
@property(retain, nonatomic) WBNLGiftWithSenderModel *giftData; // @synthesize giftData=_giftData;
- (void).cxx_destruct;
- (void)animationWithView:(id)arg1 onCenter:(_Bool)arg2;
- (void)headTappedEvent:(id)arg1;
- (double)descLableWidth;
- (double)nickLabelWidth;
- (double)currentMainWidth;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

