//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBArCaptureButton;

@protocol WBArCaptureButtonDelegate <NSObject>
- (_Bool)captureButton:(WBArCaptureButton *)arg1 shouldReceiveTouchAtPoint:(struct CGPoint)arg2;
- (void)captureButton:(WBArCaptureButton *)arg1 touchMovefrom:(struct CGPoint)arg2 to:(struct CGPoint)arg3;
- (void)captureButton:(WBArCaptureButton *)arg1 touchCancel:(struct CGPoint)arg2;
- (void)captureButton:(WBArCaptureButton *)arg1 touchDown:(struct CGPoint)arg2;
- (void)captureButton:(WBArCaptureButton *)arg1 touchEnd:(struct CGPoint)arg2;
@end

