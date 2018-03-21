//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDelegate-Protocol.h"

@class NSString, TTFTalkBoardCell, TTFTalkBoardViewModel, UITableView;

@interface TTFTalkBoardView : UIView <UITableViewDelegate>
{
    TTFTalkBoardViewModel *_viewModel;
    UITableView *_messageQueueBoard;
    TTFTalkBoardCell *_heightCell;
    long long _lastUpdateSize;
}

@property(nonatomic) long long lastUpdateSize; // @synthesize lastUpdateSize=_lastUpdateSize;
@property(retain, nonatomic) TTFTalkBoardCell *heightCell; // @synthesize heightCell=_heightCell;
@property(retain, nonatomic) UITableView *messageQueueBoard; // @synthesize messageQueueBoard=_messageQueueBoard;
@property(nonatomic) __weak TTFTalkBoardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
@property(nonatomic) struct UIEdgeInsets tableviewInsets;
- (void)layoutSubviews;
- (void)reloadTableview;
- (void)bindEvents;
- (void)dealloc;
- (void)initUIComponents;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
