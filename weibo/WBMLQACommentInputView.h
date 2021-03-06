//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIControl, WBMLQACommentInputBar;

@interface WBMLQACommentInputView : UIView <UITextFieldDelegate>
{
    WBMLQACommentInputBar *_inputBar;
    CDUnknownBlockType _onKeyboardSend;
    UIControl *_dismissControl;
}

@property(retain, nonatomic) UIControl *dismissControl; // @synthesize dismissControl=_dismissControl;
@property(copy, nonatomic) CDUnknownBlockType onKeyboardSend; // @synthesize onKeyboardSend=_onKeyboardSend;
@property(retain, nonatomic) WBMLQACommentInputBar *inputBar; // @synthesize inputBar=_inputBar;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)addCloseTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

