//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQHeaderCell.h>

@class QQTableHeaderContentView, UIButton, UIImageView, UILabel;

@interface QQTHBannerView : QQHeaderCell
{
    UIButton *_closeButton;
    QQTableHeaderContentView *_headerContentView;
    unsigned long long _bannerStyle;
    int _issueCount;
    int _xo;
    UILabel *_textLabel;
    UILabel *_subtextLabel;
    UIImageView *_iconImageView;
    UIImageView *_bagroundImageView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)headerHeight;
- (void)setBannerStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long bannerStyle; // @dynamic bannerStyle;
@property(readonly, nonatomic) UIButton *closeButton; // @dynamic closeButton;
@property(nonatomic) __weak QQTableHeaderContentView *headerContentView; // @dynamic headerContentView;
@property(nonatomic) int issueCount; // @dynamic issueCount;

@end

