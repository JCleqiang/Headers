//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface TB3dDetailLoadingView : UIView
{
    UIButton *_loadingIcon;
    UILabel *_loadingTip;
}

@property(retain, nonatomic) UILabel *loadingTip; // @synthesize loadingTip=_loadingTip;
@property(retain, nonatomic) UIButton *loadingIcon; // @synthesize loadingIcon=_loadingIcon;
- (void).cxx_destruct;
- (void)startLoadingAnim;
- (void)setUpView:(struct CGRect)arg1;
- (id)loadingTipLabel;
- (id)loadingButton;
- (id)initTB3dDetailLoadingView:(struct CGRect)arg1;

@end

