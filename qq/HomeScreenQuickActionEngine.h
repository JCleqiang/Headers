//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIApplicationShortcutItem, UIGestureRecognizer, UIViewController;

@interface HomeScreenQuickActionEngine : NSObject
{
    UIApplicationShortcutItem *_shortcutItem;
    UIViewController *_showingVC;
    UIGestureRecognizer *_forceTouchGesture;
}

+ (id)GetInstance;
@property(nonatomic) __weak UIGestureRecognizer *forceTouchGesture; // @synthesize forceTouchGesture=_forceTouchGesture;
- (void).cxx_destruct;
- (void)willDismissFromScreen;
- (void)onLoginSuc;
- (void)tryHanleQuickAction;
- (void)handleQuickAction:(id)arg1;
- (id)init;

@end

