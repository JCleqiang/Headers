//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFantasyImageView;

@interface TTFResultTipsView : UIView
{
    unsigned long long _viewType;
    TTFantasyImageView *_iconImageView;
}

@property(retain, nonatomic) TTFantasyImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)hideTips;
- (void)showTips;
- (void)initUIComponents;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

