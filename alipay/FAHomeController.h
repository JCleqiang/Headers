//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEScrollController.h"

#import "FARelationShipDelegate-Protocol.h"

@class APButton, APCustomNavigationView, FACFamilyAppResources, NSMutableArray, NSString, UIButton, UIImageView, UIPageViewController, UIView;

@interface FAHomeController : BEEScrollController <FARelationShipDelegate>
{
    APCustomNavigationView *_navigationView;
    _Bool _hasRelatedFamilyAccount;
    _Bool _viewDidAppeared;
    _Bool _instructionHasShown;
    NSString *_poiUserId;
    FACFamilyAppResources *_appResources;
    UIButton *_portraitButton;
    UIImageView *_portraitView;
    NSMutableArray *_ignoreFamilyActors;
    NSMutableArray *_recommendFamilyActors;
    NSMutableArray *_recommendFamilyActorButtons;
    UIButton *_recommendAccountButton;
    NSMutableArray *_ignoreDearPayActors;
    NSMutableArray *_recommendDearPayActors;
    NSMutableArray *_recommendDearPayActorViews;
    NSMutableArray *_familyAccounts;
    NSMutableArray *_dearPayAccounts;
    UIButton *_deletingButton;
    UIButton *_productInfoBtn;
    UIView *_guideBgView;
    UIView *_guideMaskView;
    UIView *_guideNavMaskView;
    UIPageViewController *_guidePVC;
    UIButton *_deleteButton;
    APButton *_enterButton;
    UIView *_instructionView;
    double _poiY;
    NSString *_selectedUserId;
    NSString *_selectedUserLoginId;
}

@property(retain, nonatomic) NSString *selectedUserLoginId; // @synthesize selectedUserLoginId=_selectedUserLoginId;
@property(retain, nonatomic) NSString *selectedUserId; // @synthesize selectedUserId=_selectedUserId;
@property(nonatomic) double poiY; // @synthesize poiY=_poiY;
@property(nonatomic) _Bool instructionHasShown; // @synthesize instructionHasShown=_instructionHasShown;
@property(retain, nonatomic) UIView *instructionView; // @synthesize instructionView=_instructionView;
@property(retain, nonatomic) APButton *enterButton; // @synthesize enterButton=_enterButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIPageViewController *guidePVC; // @synthesize guidePVC=_guidePVC;
@property(retain, nonatomic) UIView *guideNavMaskView; // @synthesize guideNavMaskView=_guideNavMaskView;
@property(retain, nonatomic) UIView *guideMaskView; // @synthesize guideMaskView=_guideMaskView;
@property(retain, nonatomic) UIView *guideBgView; // @synthesize guideBgView=_guideBgView;
@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(retain, nonatomic) UIButton *productInfoBtn; // @synthesize productInfoBtn=_productInfoBtn;
@property(retain, nonatomic) UIButton *deletingButton; // @synthesize deletingButton=_deletingButton;
@property(nonatomic) _Bool hasRelatedFamilyAccount; // @synthesize hasRelatedFamilyAccount=_hasRelatedFamilyAccount;
@property(retain, nonatomic) NSMutableArray *dearPayAccounts; // @synthesize dearPayAccounts=_dearPayAccounts;
@property(retain, nonatomic) NSMutableArray *familyAccounts; // @synthesize familyAccounts=_familyAccounts;
@property(retain, nonatomic) NSMutableArray *recommendDearPayActorViews; // @synthesize recommendDearPayActorViews=_recommendDearPayActorViews;
@property(retain, nonatomic) NSMutableArray *recommendDearPayActors; // @synthesize recommendDearPayActors=_recommendDearPayActors;
@property(retain, nonatomic) NSMutableArray *ignoreDearPayActors; // @synthesize ignoreDearPayActors=_ignoreDearPayActors;
@property(retain, nonatomic) UIButton *recommendAccountButton; // @synthesize recommendAccountButton=_recommendAccountButton;
@property(retain, nonatomic) NSMutableArray *recommendFamilyActorButtons; // @synthesize recommendFamilyActorButtons=_recommendFamilyActorButtons;
@property(retain, nonatomic) NSMutableArray *recommendFamilyActors; // @synthesize recommendFamilyActors=_recommendFamilyActors;
@property(retain, nonatomic) NSMutableArray *ignoreFamilyActors; // @synthesize ignoreFamilyActors=_ignoreFamilyActors;
@property(retain, nonatomic) UIImageView *portraitView; // @synthesize portraitView=_portraitView;
@property(retain, nonatomic) UIButton *portraitButton; // @synthesize portraitButton=_portraitButton;
@property(retain, nonatomic) FACFamilyAppResources *appResources; // @synthesize appResources=_appResources;
@property(retain, nonatomic) NSString *poiUserId; // @synthesize poiUserId=_poiUserId;
- (void).cxx_destruct;
- (void)relationDidSelected:(long long)arg1;
- (void)beginToUse;
- (void)goHelp:(id)arg1;
- (_Bool)checkIfDearPayIgnored:(id)arg1;
- (_Bool)checkIfActorIgnored:(id)arg1 familyAcInfos:(id)arg2;
- (id)colorWithIndex:(long long)arg1;
- (void)deleteBigButtonHandler:(id)arg1;
- (void)deleteButtonHandler:(id)arg1;
- (void)viewTapHandler:(id)arg1;
- (void)restoreDeletingButton;
- (void)panHandler:(id)arg1;
- (void)readyToDeleting:(id)arg1;
- (void)defaultToDetail:(id)arg1;
- (void)inviteToCreate;
- (void)moreActorWithId:(id)arg1;
- (void)moreActor;
- (_Bool)checkCanAddFamily;
- (void)addAccount:(id)arg1;
- (void)toDetail:(id)arg1;
- (void)drawDashedBorderAroundView:(id)arg1 Color:(id)arg2;
- (void)renderButtons:(id)arg1;
- (void)renderAccounts:(id)arg1;
- (void)gotoDetail;
- (void)removeGuideView;
- (void)enterHandler;
- (void)dealloc;
- (void)back;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadContent;
- (id)contentView;
- (void)reloadContent;
- (id)loadOnline;
- (void)changeNavigationBarStyleToWhite:(_Bool)arg1;
- (void)changeNaivgationBarToTranslute:(_Bool)arg1 hiddenRightBarButton:(_Bool)arg2;
- (void)buildNavigationView;
- (_Bool)autohideNavigationBar;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)makeAccessHiden:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillFirstAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
