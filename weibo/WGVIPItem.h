//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface WGVIPItem : UIView
{
    UIImageView *_itemImageView;
    UIImageView *_itemVipImageView;
    UILabel *_itemVipNameLabel;
    UILabel *_itemNameLabel;
    UIButton *_itemBtn;
}

@property(nonatomic) __weak UIButton *itemBtn; // @synthesize itemBtn=_itemBtn;
@property(nonatomic) __weak UILabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
@property(nonatomic) __weak UILabel *itemVipNameLabel; // @synthesize itemVipNameLabel=_itemVipNameLabel;
@property(nonatomic) __weak UIImageView *itemVipImageView; // @synthesize itemVipImageView=_itemVipImageView;
@property(nonatomic) __weak UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void).cxx_destruct;
- (void)configVipItem:(int)arg1;

@end

