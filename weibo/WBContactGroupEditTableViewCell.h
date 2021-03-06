//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIControl, UIImageView, UILabel, WBContactGroup, WBTextField;
@protocol WBContactGroupEditTableViewCellDelegate;

@interface WBContactGroupEditTableViewCell : WBTableViewCell <UITextFieldDelegate>
{
    UIImageView *backgroundImageView;
    WBContactGroup *group;
    WBTextField *textField;
    UILabel *promptLabel;
    NSString *prompt;
    UIControl *createGroupButton;
    long long rowType;
    _Bool pressedReturnKey;
    id <WBContactGroupEditTableViewCellDelegate> delegate;
}

@property(retain, nonatomic) id <WBContactGroupEditTableViewCellDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) WBContactGroup *group; // @synthesize group;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)fixBlackBackgroundColor;
- (void)dealloc;
- (void)createButtonPressed:(id)arg1;
- (void)setGroup:(id)arg1 prompt:(id)arg2;
- (void)refreshUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

