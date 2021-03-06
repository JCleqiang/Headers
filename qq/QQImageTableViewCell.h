//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQTableViewCell.h>

@class NSArray, NSString, UILabel, UIView;

@interface QQImageTableViewCell : QQTableViewCell
{
    UILabel *_titleLabel;
    NSArray *_iconInfo;
    NSString *_title;
    double _titleLabelOriginX;
    _Bool _customTitleFrame;
    int _xo;
    UIView *_iconContainerView;
    int _iconType;
    struct UIEdgeInsets _iconImageEdigeInset;
}

@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
@property(nonatomic) struct UIEdgeInsets iconImageEdigeInset; // @synthesize iconImageEdigeInset=_iconImageEdigeInset;
- (void)dealloc;
- (void)layoutSubviews;
@property(nonatomic) double titleLabelOriginX; // @dynamic titleLabelOriginX;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 iconInfo:(id)arg3 type:(int)arg4;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSArray *iconInfo; // @dynamic iconInfo;
@property(retain, nonatomic) UILabel *titleLabel; // @dynamic titleLabel;

@end

