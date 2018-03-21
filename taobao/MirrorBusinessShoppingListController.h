//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MirrorBusinessControllerCallback-Protocol.h"
#import "MirrorBusinessNavBarDelegate-Protocol.h"
#import "MirrorBusinessShoppingListManagerDelegate-Protocol.h"

@class MirrorBusinessNavBar, MirrorBusinessShoppingListManager, NSArray, NSString, UIView;
@protocol MirrorBusinessControllerDelegate;

@interface MirrorBusinessShoppingListController : UIViewController <MirrorBusinessShoppingListManagerDelegate, MirrorBusinessNavBarDelegate, MirrorBusinessControllerCallback>
{
    id <MirrorBusinessControllerDelegate> _delegate;
    NSArray *_params;
    MirrorBusinessNavBar *_navBar;
    MirrorBusinessShoppingListManager *_shoppingListMgr;
    UIView *_emptyView;
}

@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) MirrorBusinessShoppingListManager *shoppingListMgr; // @synthesize shoppingListMgr=_shoppingListMgr;
@property(retain, nonatomic) MirrorBusinessNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(nonatomic) __weak id <MirrorBusinessControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)triggerRefresh;
- (void)onLoadFirstPageStatusChange:(long long)arg1;
- (void)gotoProdutDetail:(id)arg1;
- (void)didScroll:(double)arg1;
- (void)onNavBarShopClicked;
- (void)onNavBarBackClicked;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
