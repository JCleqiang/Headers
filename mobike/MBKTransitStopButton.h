//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MBKTransitStopModel, UIImageView, UILabel;

@interface MBKTransitStopButton : UIButton
{
    UILabel *_station;
    MBKTransitStopModel *_stop;
    UIImageView *_icon;
}

@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) MBKTransitStopModel *stop; // @synthesize stop=_stop;
@property(retain, nonatomic) UILabel *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

