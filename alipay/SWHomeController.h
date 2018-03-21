//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWViewController.h"

#import "SWScanViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SWScanController, SWScrollLabelFrame, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface SWHomeController : SWViewController <SWScanViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isBind;
    _Bool _isDisappearForScan;
    _Bool _isQuerying;
    NSMutableArray *_sectionDataArray;
    UILabel *_mainLabel;
    UILabel *_detailTextLabel;
    UIButton *_protocolButton;
    UIButton *_bindingButton;
    UILabel *_bindingLabel;
    UIImageView *_watchImageView;
    UILabel *_bottomLabel;
    UITableView *_tableView;
    UIView *_tableHeader;
    SWScrollLabelFrame *_bannerLabel;
    SWScanController *_scanController;
}

@property(retain, nonatomic) SWScanController *scanController; // @synthesize scanController=_scanController;
@property(nonatomic) _Bool isQuerying; // @synthesize isQuerying=_isQuerying;
@property(nonatomic) _Bool isDisappearForScan; // @synthesize isDisappearForScan=_isDisappearForScan;
@property(retain, nonatomic) SWScrollLabelFrame *bannerLabel; // @synthesize bannerLabel=_bannerLabel;
@property(retain, nonatomic) UIView *tableHeader; // @synthesize tableHeader=_tableHeader;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIImageView *watchImageView; // @synthesize watchImageView=_watchImageView;
@property(retain, nonatomic) UILabel *bindingLabel; // @synthesize bindingLabel=_bindingLabel;
@property(retain, nonatomic) UIButton *bindingButton; // @synthesize bindingButton=_bindingButton;
@property(retain, nonatomic) UIButton *protocolButton; // @synthesize protocolButton=_protocolButton;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) NSMutableArray *sectionDataArray; // @synthesize sectionDataArray=_sectionDataArray;
@property(nonatomic) _Bool isBind; // @synthesize isBind=_isBind;
- (void).cxx_destruct;
- (void)bannerOnTapped:(id)arg1;
- (void)setPageType:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)switchValueChanged:(id)arg1;
- (void)closeFeature:(long long)arg1 on:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sw_didScanCode:(id)arg1 mac:(id)arg2 model:(id)arg3;
- (void)openPwdCheckPage;
- (void)openUnbindPage;
- (void)openPwdPageWithFeature:(long long)arg1;
- (void)openScanPage;
- (void)startBinding;
- (void)bindingButtonClicked:(id)arg1;
- (void)protocolButtonClicked:(id)arg1;
- (void)buildUnbindHeader;
- (void)buildBindHeader;
- (void)buildHeader;
- (void)updateUI;
- (void)configUI;
- (void)querySetting;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
