//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MomRecordingVController.h"

#import "MomBabyProfileServiceDelegate-Protocol.h"
#import "MomFoodTableCellDelegate-Protocol.h"
#import "MomInputBarDelegate-Protocol.h"
#import "MomTabBarDelegate-Protocol.h"
#import "MomToolFoodServiceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class MomBabyProfileService, MomInputBar, MomTabBar, MomToolFoodService, NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, UITableView, UIView;

@interface MomFoodVController : MomRecordingVController <MomTabBarDelegate, MomInputBarDelegate, MomToolFoodServiceDelegate, MomFoodTableCellDelegate, MomBabyProfileServiceDelegate, UITableViewDataSource>
{
    MomTabBar *_navTabBar;
    UILabel *_label;
    UIView *_line;
    UITableView *_tableView;
    MomInputBar *_inputBar;
    UIView *_emptyTableView;
    NSArray *_titles;
    NSArray *_ages;
    NSMutableArray *_foods;
    MomToolFoodService *_foodService;
    MomBabyProfileService *_babyProfileService;
    NSMutableDictionary *_foodListcache;
    NSString *_currentAge;
}

@property(retain, nonatomic) NSString *currentAge; // @synthesize currentAge=_currentAge;
@property(retain, nonatomic) NSMutableDictionary *foodListcache; // @synthesize foodListcache=_foodListcache;
@property(retain, nonatomic) MomBabyProfileService *babyProfileService; // @synthesize babyProfileService=_babyProfileService;
@property(retain, nonatomic) MomToolFoodService *foodService; // @synthesize foodService=_foodService;
@property(retain, nonatomic) NSMutableArray *foods; // @synthesize foods=_foods;
@property(retain, nonatomic) NSArray *ages; // @synthesize ages=_ages;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UIView *emptyTableView; // @synthesize emptyTableView=_emptyTableView;
@property(retain, nonatomic) MomInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MomTabBar *navTabBar; // @synthesize navTabBar=_navTabBar;
- (void).cxx_destruct;
- (void)dealloc;
- (void)foodReactionDidChanged:(long long)arg1 AtIndex:(long long)arg2;
- (void)queryBabyProfileFinished:(id)arg1;
- (void)deleteFoodDidFinish:(id)arg1;
- (void)addFoodDidFinish:(id)arg1;
- (void)queryFoodsDidFinish:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tabAtIndex:(long long)arg1;
- (double)tabWidthAtIndex:(long long)arg1;
- (long long)numberOfTabs;
- (void)tabSelected:(long long)arg1;
- (void)inputDidFinish:(id)arg1;
- (_Bool)foodExist:(id)arg1;
- (void)updateFoodList:(id)arg1;
- (void)hideTipsView;
- (void)showTipsView:(id)arg1;
- (void)moveKeyboard:(id)arg1;
- (id)getBabyCurrentAge:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

