//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MBKViewProtocol-Protocol.h"

@class MBKRideStatusShowModel, Mobike_ViewController, NSString, UILabel;

@interface MBKRideStatusShowTableViewCell : UITableViewCell <MBKViewProtocol>
{
    MBKRideStatusShowModel *_model;
    id _delegate;
    UILabel *_statusLabel;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKRideStatusShowModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)configSubView;
- (void)setupView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak Mobike_ViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
