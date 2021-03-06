//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, SSThemedButton, SSThemedView, TTNewPanelControllerWindow, TTNewPanelRootViewController, UIWindow;

@interface TTNewPanelController : NSObject
{
    double _cellWidth;
    _Bool moviePaused;
    TTNewPanelControllerWindow *_backWindow;
    NSMutableArray *_collectionViews;
    SSThemedView *_backView;
    SSThemedView *_maskView;
    SSThemedButton *_cancelButton;
    SSThemedView *_bottomSafeAreaView;
    UIWindow *_originalKeyWindow;
    TTNewPanelRootViewController *_rootViewController;
    NSArray *_data;
    NSString *_cancelTitle;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) TTNewPanelRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIWindow *originalKeyWindow; // @synthesize originalKeyWindow=_originalKeyWindow;
@property(retain, nonatomic) SSThemedView *bottomSafeAreaView; // @synthesize bottomSafeAreaView=_bottomSafeAreaView;
@property(retain, nonatomic) SSThemedButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) SSThemedView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) SSThemedView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NSMutableArray *collectionViews; // @synthesize collectionViews=_collectionViews;
@property(retain, nonatomic) TTNewPanelControllerWindow *backWindow; // @synthesize backWindow=_backWindow;
- (void).cxx_destruct;
- (id)createCollectionViewWithIndex:(int)arg1;
- (id)nameLabel;
- (id)cellViewWithRow:(int)arg1 index:(int)arg2 item:(id)arg3;
- (id)lineViewWithIndex:(int)arg1 isLast:(_Bool)arg2;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1;
- (void)cancelButtonAction:(id)arg1;
- (void)buttonClickAction:(id)arg1;
- (void)selectedIconButtonAction:(id)arg1;
- (void)selectedDigIconButtonAction:(id)arg1;
- (void)hideWithBlock:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)hideWithBlock:(CDUnknownBlockType)arg1;
- (void)show;
- (void)commonInit;
- (void)willTransitionToSize:(struct CGSize)arg1;
- (void)rootViewWillTransitionToSize:(id)arg1;
- (void)deviceOrientationDidChange;
- (void)refreshStatusBarOrientation:(long long)arg1;
- (struct CGAffineTransform)transformForRotationAngle:(long long)arg1;
- (void)movieViewFullScreenDidChange:(id)arg1;
- (id)initWithItems:(id)arg1 cancelTitle:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)initWithItems:(id)arg1 cancelTitle:(id)arg2 isFullScreen:(_Bool)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (id)initWithItems:(id)arg1 cancelTitle:(id)arg2;
- (void)dealloc;

@end

