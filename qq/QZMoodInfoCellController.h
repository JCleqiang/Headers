//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneViewController.h>

#import <QQMainProject/QZComposerMultipleInfoViewDelegate-Protocol.h>
#import <QQMainProject/QZMoodTagEventListControllerDelegate-Protocol.h>

@class NSDictionary, NSString, QZComposerMultipleInfoView, QZMoodComposeViewCoordinator, QZMoodComposeViewPresenter, UITableView, UIView;

@interface QZMoodInfoCellController : QZoneViewController <QZComposerMultipleInfoViewDelegate, QZMoodTagEventListControllerDelegate>
{
    QZMoodComposeViewPresenter *_viewModel;
    QZMoodComposeViewCoordinator *_coordinator;
    QZComposerMultipleInfoView *_multipleInfoView;
    QZComposerMultipleInfoView *_accessoryMultipleInfoView;
    UIView *_bottomLine;
    _Bool _forbidChangeTag;
    NSDictionary *_permissonJSParams;
    UITableView *_tableView;
}

@property(readonly, nonatomic) QZComposerMultipleInfoView *accessoryMultipleInfoView; // @synthesize accessoryMultipleInfoView=_accessoryMultipleInfoView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)needShowAccessoryMultipleInfoView;
- (void)refreshMultipleInfoView:(_Bool)arg1 durationTime:(double)arg2;
- (void)refreshInfoView;
- (void)selectTag:(id)arg1;
- (id)postParamOfOpenTagSettingWebView;
- (void)setTag:(id)arg1;
- (void)clickTagEvent;
- (id)getJSUgcRightsParam;
- (void)setJSUgcRightsParam:(id)arg1;
- (void)enterPermissionSelectView;
- (void)multipleInfoViewButtonPressed:(unsigned long long)arg1;
- (void)onNotifyEventTag:(id)arg1;
- (void)createInfoCell;
- (void)viewDidLoad;
- (void)loadView;
- (id)cell;
- (id)initWithViewModel:(id)arg1 coordinator:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

