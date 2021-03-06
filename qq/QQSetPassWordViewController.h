//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQPassWordViewDelegate-Protocol.h>

@class NSString, PassWordPreView, QQPassWordView, UILabel;

@interface QQSetPassWordViewController : QQViewController <QQPassWordViewDelegate>
{
    QQPassWordView *_passView;
    PassWordPreView *_preView;
    UILabel *_tipLabel;
    NSString *_passWord;
    _Bool _needGoToSetView;
}

@property(nonatomic) _Bool needGoToSetView; // @synthesize needGoToSetView=_needGoToSetView;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;
- (void)erroTipEnd;
- (void)popAfterSuccessTip;
- (void)QQPassWordDidEnd:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithPass:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

