//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageInfoBaseCardView.h"

@class WBCommonButtonStyleTrendNormalView, WBTimelineLargeCardTextView, WBTimelinePageInfo;

@interface WBPageInfoTrendAdsView : WBPageInfoBaseCardView
{
    WBTimelinePageInfo *pageInfo;
    WBTimelineLargeCardTextView *_textView;
    WBCommonButtonStyleTrendNormalView *_commonButtonView;
}

+ (unsigned long long)timelinePageInfoViewBorderStyle;
+ (struct UIEdgeInsets)timelineBackgroundBorderEdgeInsetsWithPageInfo:(id)arg1;
+ (_Bool)timelineNeedsBackgroundBorder;
+ (_Bool)timelineIntegratable;
+ (id)placeholderText:(id)arg1 color:(id)arg2 fontSize:(double)arg3;
+ (double)heightConstraintToWidth:(double)arg1 forPageInfo:(id)arg2 displayType:(long long)arg3;
@property(retain, nonatomic) WBCommonButtonStyleTrendNormalView *commonButtonView; // @synthesize commonButtonView=_commonButtonView;
@property(retain, nonatomic) WBTimelineLargeCardTextView *textView; // @synthesize textView=_textView;
- (void)setPageInfo:(id)arg1;
- (id)pageInfo;
- (void).cxx_destruct;
- (void)updateViewWithPageInfo:(id)arg1;
- (void)loadWithPageInfo:(id)arg1 forPageID:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)skinDidChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

