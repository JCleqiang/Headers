//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBDetailNavigationItemViewModel, UIImageView, UILabel, UITapGestureRecognizer;

@interface TBDetailNavigationItem : UIView
{
    struct CGPoint customOriginPoint;
    NSString *jumpUrl;
    _Bool _customLocationEnabled;
    _Bool _setImageView;
    UIView *_customView;
    TBDetailNavigationItemViewModel *_itemModel;
    UILabel *_titleLabel;
    UIImageView *_imgView;
    UITapGestureRecognizer *_tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBDetailNavigationItemViewModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) _Bool setImageView; // @synthesize setImageView=_setImageView;
@property(nonatomic) _Bool customLocationEnabled; // @synthesize customLocationEnabled=_customLocationEnabled;
- (void).cxx_destruct;
- (void)initIconFontColors;
- (id)createLabel:(struct CGSize)arg1 title:(id)arg2 fontSize:(double)arg3;
- (struct CGRect)getDefaultFrame;
- (void)adjustFrameByImgSie:(id)arg1;
- (void)initWithImgUrl:(id)arg1;
- (void)initWithImg:(id)arg1;
- (id)actions:(id)arg1;
- (void)navigationItemAction:(id)arg1;
- (void)setItemAlpa:(double)arg1;
- (void)setVoiceAccessbility:(id)arg1;
- (void)initWithIconFontString:(id)arg1 fontSize:(double)arg2;
- (id)initWithCustomView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
