//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MarqueeLabel, NSLayoutConstraint, UIImageView;

@interface KSMusicTagTitleView : UIView
{
    MarqueeLabel *_titleLabel;
    UIImageView *_icon;
    NSLayoutConstraint *_titleHeight;
}

+ (id)instance;
@property(nonatomic) __weak NSLayoutConstraint *titleHeight; // @synthesize titleHeight=_titleHeight;
@property(nonatomic) __weak UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak MarqueeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)awakeFromNib;

@end

