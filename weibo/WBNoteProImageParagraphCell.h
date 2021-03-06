//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNoteProParagraphCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UITextView;
@protocol WBNoteProImageParagraphCellDelegate;

@interface WBNoteProImageParagraphCell : WBNoteProParagraphCell
{
    _Bool _textViewEditable;
    UITextView *_textView;
    UIImageView *_insertImageView;
    UIImageView *_textViewBackgroundImageView;
    NSLayoutConstraint *_imageViewHeightConstraint;
    UIButton *_editButton;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(retain, nonatomic) UIImageView *textViewBackgroundImageView; // @synthesize textViewBackgroundImageView=_textViewBackgroundImageView;
@property(retain, nonatomic) UIImageView *insertImageView; // @synthesize insertImageView=_insertImageView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)editButtonDidTap;
- (void)deleteButtonDidTap;
- (void)showImageWithPath:(id)arg1 forHeight:(double)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <WBNoteProImageParagraphCellDelegate> delegate;

@end

