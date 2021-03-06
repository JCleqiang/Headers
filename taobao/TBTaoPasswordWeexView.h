//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTaoPasswordBaseView.h"

@class NSString, TPWeexResult, UIButton, UIImageView, UILabel, UIView, WXSDKInstance;

@interface TBTaoPasswordWeexView : TBTaoPasswordBaseView
{
    WXSDKInstance *_instance;
    UIView *_weexView;
    UIView *_shareUserView;
    UIImageView *_imageView;
    UILabel *_tipLable;
    UIButton *_reloadBtn;
    TPWeexResult *_model;
    NSString *_sizeMode;
}

@property(retain, nonatomic) NSString *sizeMode; // @synthesize sizeMode=_sizeMode;
@property(retain, nonatomic) TPWeexResult *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *reloadBtn; // @synthesize reloadBtn=_reloadBtn;
@property(retain, nonatomic) UILabel *tipLable; // @synthesize tipLable=_tipLable;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *shareUserView; // @synthesize shareUserView=_shareUserView;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)reloadButtonTapped:(id)arg1;
- (struct CGRect)getShowViewRect:(id)arg1;
- (struct CGPoint)getCloseButtonOrigin;
- (void)removeExceptionView;
- (void)addExceptionView;
- (void)createWeexUI;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

@end

