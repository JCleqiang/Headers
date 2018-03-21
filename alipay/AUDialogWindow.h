//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class AUDialogViewController, NSMutableArray;

@interface AUDialogWindow : UIWindow
{
    _Bool _haveConfigWindowState;
    UIWindow *_previousWindow;
    NSMutableArray *_dialogs;
    AUDialogViewController *_dialogViewController;
}

+ (_Bool)dialogWindowShowing;
+ (id)window;
+ (_Bool)isOpenConfigerService;
@property(nonatomic) _Bool haveConfigWindowState; // @synthesize haveConfigWindowState=_haveConfigWindowState;
@property(retain, nonatomic) AUDialogViewController *dialogViewController; // @synthesize dialogViewController=_dialogViewController;
@property(retain, nonatomic) NSMutableArray *dialogs; // @synthesize dialogs=_dialogs;
@property(nonatomic) __weak UIWindow *previousWindow; // @synthesize previousWindow=_previousWindow;
- (void).cxx_destruct;
- (void)dismissAllDialogView;
- (void)resetState;
- (void)dismissDialogView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyShowAnimation:(id)arg1;
- (void)popLastDialog;
- (void)showDialogEnterForground;
- (void)hideDialogInBackground;
- (void)showDialogView:(id)arg1;
- (void)applyShowDialog:(id)arg1;
- (void)configWindowStateDialog:(id)arg1;
- (void)pushStackDialog:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
