//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface ClipMaskView : UIView
{
    CAShapeLayer *_fillLayer;
    struct CGRect _noMaskRect;
}

@property(retain, nonatomic) CAShapeLayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(nonatomic) struct CGRect noMaskRect; // @synthesize noMaskRect=_noMaskRect;
- (void)updateMask;
- (id)initWithFrame:(struct CGRect)arg1;

@end
