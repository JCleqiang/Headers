//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class H5KeyboardField, NSDictionary, NSString, UIWebView;
@protocol H5NumKeyboardDelegate;

@interface H5Keyboard : NSObject <UITextFieldDelegate>
{
    float _initPadding;
    id <H5NumKeyboardDelegate> _delegate;
    UIWebView *_curWebview;
    NSDictionary *_currentActiveInputData;
    H5KeyboardField *_activeTextField;
    double _mMoveDistance;
    double _uiWebViewScrollViewOldOffsetY;
}

@property(nonatomic) double uiWebViewScrollViewOldOffsetY; // @synthesize uiWebViewScrollViewOldOffsetY=_uiWebViewScrollViewOldOffsetY;
@property(nonatomic) double mMoveDistance; // @synthesize mMoveDistance=_mMoveDistance;
@property(retain, nonatomic) H5KeyboardField *activeTextField; // @synthesize activeTextField=_activeTextField;
@property(retain, nonatomic) NSDictionary *currentActiveInputData; // @synthesize currentActiveInputData=_currentActiveInputData;
@property(nonatomic) __weak UIWebView *curWebview; // @synthesize curWebview=_curWebview;
@property(nonatomic) float initPadding; // @synthesize initPadding=_initPadding;
@property(nonatomic) __weak id <H5NumKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateValueByText:(id)arg1 withEventType:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textEditingDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)scrollDocumentBody;
- (void)adjustScrollViewWithNotification:(id)arg1 toobarHeight:(float)arg2;
- (double)getKeyBoardHeightWithNotify:(id)arg1;
- (void)keyboardShowNotification:(id)arg1 toobarHeight:(float)arg2;
- (void)hideKeyBoard;
- (id)createNativeInputWithParam:(id)arg1 idx:(unsigned long long)arg2;
- (void)dealloc;
- (void)h5fontSizeChanged;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
