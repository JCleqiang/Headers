//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface CLDetailHeaderView : UIView
{
    NSString *_titleString;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonCallBack;
    UILabel *_titileLabel;
    UIButton *_actionButton;
}

@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titileLabel; // @synthesize titileLabel=_titileLabel;
@property(copy, nonatomic) CDUnknownBlockType buttonCallBack; // @synthesize buttonCallBack=_buttonCallBack;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)onButtonClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 buttonTitle:(id)arg3 buttonActionBlock:(CDUnknownBlockType)arg4;

@end
