//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

@interface UIWebView (AppLinkBridge)
+ (void)enableAppLinkBridge;
+ (void)hookSelector:(SEL)arg1 withSelector:(SEL)arg2;
- (void)setDelegate_ALHook:(id)arg1;
- (void)setupJSBridge;
- (id)initWithFrame_ALHook:(struct CGRect)arg1;
@end
