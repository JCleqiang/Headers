//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMapViewController.h"

#import "MMMapContextDelegate-Protocol.h"

@class MBKMoCarCheckCarInfoViewController, MBKMoCarCurrentStateModel, MBKMoCarInitCurrentStateRequest, MBKMoCarOrderPayViewController, MBKMoCarRebackCarViewController, MBKMoCarUnlockCarViewController, MBKMocarAnnotation, MBKTimer, NSString;

@interface MBKMoCarOrderViewController : MBKMapViewController <MMMapContextDelegate>
{
    _Bool _isCheckCarInfoCtl;
    _Bool _carViewAdded;
    _Bool _notFirstRequest;
    MBKMocarAnnotation *_carAnnotation;
    MBKMoCarUnlockCarViewController *_unLockCarCtl;
    MBKMoCarRebackCarViewController *_rebackCarCtl;
    MBKMoCarOrderPayViewController *_payCtl;
    MBKMoCarCheckCarInfoViewController *_checkCarInfoCtl;
    MBKTimer *_timer;
    MBKMoCarInitCurrentStateRequest *_currentStateRequest;
    MBKMoCarCurrentStateModel *_typeModel;
}

+ (void)load;
@property(retain, nonatomic) MBKMoCarCurrentStateModel *typeModel; // @synthesize typeModel=_typeModel;
@property(nonatomic) _Bool notFirstRequest; // @synthesize notFirstRequest=_notFirstRequest;
@property(retain, nonatomic) MBKMoCarInitCurrentStateRequest *currentStateRequest; // @synthesize currentStateRequest=_currentStateRequest;
@property(retain, nonatomic) MBKTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool carViewAdded; // @synthesize carViewAdded=_carViewAdded;
@property(nonatomic) _Bool isCheckCarInfoCtl; // @synthesize isCheckCarInfoCtl=_isCheckCarInfoCtl;
@property(retain, nonatomic) MBKMoCarCheckCarInfoViewController *checkCarInfoCtl; // @synthesize checkCarInfoCtl=_checkCarInfoCtl;
@property(retain, nonatomic) MBKMoCarOrderPayViewController *payCtl; // @synthesize payCtl=_payCtl;
@property(retain, nonatomic) MBKMoCarRebackCarViewController *rebackCarCtl; // @synthesize rebackCarCtl=_rebackCarCtl;
@property(retain, nonatomic) MBKMoCarUnlockCarViewController *unLockCarCtl; // @synthesize unLockCarCtl=_unLockCarCtl;
@property(retain, nonatomic) MBKMocarAnnotation *carAnnotation; // @synthesize carAnnotation=_carAnnotation;
- (void).cxx_destruct;
- (void)addChildVC:(id)arg1;
- (void)loopinitStateRequest;
- (void)getCurrentState;
- (void)cancelLoop;
- (id)mapContext:(id)arg1 renderForOverlay:(id)arg2;
- (id)mapContext:(id)arg1 viewForAnnotation:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
