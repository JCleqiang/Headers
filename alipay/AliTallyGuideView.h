//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIWindow;

@interface AliTallyGuideView : UIView
{
    UIView *_containView;
    UIImageView *_topImageView;
    UILabel *_bigLabel;
    UILabel *_smallLabel;
    UIButton *_bottomBtn;
    UIWindow *_window;
}

+ (id)mainWindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIButton *bottomBtn; // @synthesize bottomBtn=_bottomBtn;
@property(retain, nonatomic) UILabel *smallLabel; // @synthesize smallLabel=_smallLabel;
@property(retain, nonatomic) UILabel *bigLabel; // @synthesize bigLabel=_bigLabel;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
