//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSwitchButton.h"

@class UIActivityIndicatorView, UILabel;
@protocol KSActivity;

@interface KSShareButtomBtn : KSSwitchButton
{
    _Bool _multiSelectedEnabled;
    id <KSActivity> _activity;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_btnTitle;
}

@property(retain, nonatomic) UILabel *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool multiSelectedEnabled; // @synthesize multiSelectedEnabled=_multiSelectedEnabled;
@property(retain, nonatomic) id <KSActivity> activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 offImage:(id)arg3 title:(id)arg4;

@end

