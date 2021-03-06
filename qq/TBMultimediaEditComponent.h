//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBMultimediaEditView, UIButton, UIView;
@protocol TBMultimediaEditComponentDelegate, TBMultimediaEditReportDelegate;

@interface TBMultimediaEditComponent : NSObject
{
    _Bool _manageByPanel;
    _Bool _abovePanel;
    _Bool _hidePanel;
    _Bool _enabled;
    _Bool _isOuterControl;
    UIButton *_button;
    TBMultimediaEditView *_editView;
    UIView *_containerView;
    NSString *_componentID;
    unsigned long long _baseZIndex;
    id <TBMultimediaEditComponentDelegate> _delegate;
    id <TBMultimediaEditReportDelegate> _reportDelegate;
}

@property(nonatomic) __weak id <TBMultimediaEditReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <TBMultimediaEditComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isOuterControl; // @synthesize isOuterControl=_isOuterControl;
@property(nonatomic) unsigned long long baseZIndex; // @synthesize baseZIndex=_baseZIndex;
@property(copy, nonatomic) NSString *componentID; // @synthesize componentID=_componentID;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=shouldHidePanel) _Bool hidePanel; // @synthesize hidePanel=_hidePanel;
@property(nonatomic, getter=shouldAbovePanel) _Bool abovePanel; // @synthesize abovePanel=_abovePanel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak TBMultimediaEditView *editView; // @synthesize editView=_editView;
@property(nonatomic, getter=isManageByPanel) _Bool manageByPanel; // @synthesize manageByPanel=_manageByPanel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)getPublishInfo:(id)arg1;
- (void)getEditActionResult:(id)arg1;
- (void)reportEvent:(id)arg1 withParam:(id)arg2;
- (void)receiveInfo:(id)arg1;
- (void)refreshComponentParam;
- (void)reset;
- (void)stop;
- (void)start;
- (void)buttonClicked;
- (void)viewEndShot;
- (void)viewWillShot;
- (void)dealloc;
- (id)initWithComponentID:(id)arg1;
- (id)init;

@end

