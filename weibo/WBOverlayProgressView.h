//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage;

@interface WBOverlayProgressView : UIView
{
    unsigned long long style;
    UIImage *image;
    UIColor *tintColor;
    double progress;
}

@property(nonatomic) double progress; // @synthesize progress;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image;
@property(nonatomic) unsigned long long style; // @synthesize style;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

