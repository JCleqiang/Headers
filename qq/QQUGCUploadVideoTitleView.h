//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UITextViewDelegate-Protocol.h>

@class NSString, QQUGCUploadTitleTextView, UILabel;

@interface QQUGCUploadVideoTitleView : UIView <UITextViewDelegate>
{
    QQUGCUploadTitleTextView *_textView;
    CDUnknownBlockType _textChangeAction;
    UILabel *_placeHolderLabel;
}

@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(copy, nonatomic) CDUnknownBlockType textChangeAction; // @synthesize textChangeAction=_textChangeAction;
@property(retain, nonatomic) QQUGCUploadTitleTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)refreshView;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textNotifyChanged:(id)arg1;
- (void)layoutSubviews;
- (unsigned long long)getTextCount;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
