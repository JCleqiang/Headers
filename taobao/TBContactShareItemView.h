//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBContactData, UIButton, UIImageView, UILabel;

@interface TBContactShareItemView : UIView
{
    TBContactData *_contactData;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _specialTapBlock;
    UIButton *_contactImageButton;
    UILabel *_contactNameLabel;
    UILabel *_contactPhoneLabel;
    UIImageView *_contactTagImageView;
}

+ (id)contactShareItemViewWithImageName:(id)arg1 iconFontName:(id)arg2 itemName:(id)arg3 tapBlock:(CDUnknownBlockType)arg4;
+ (id)contactShareItemViewWithContactData:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIImageView *contactTagImageView; // @synthesize contactTagImageView=_contactTagImageView;
@property(retain, nonatomic) UILabel *contactPhoneLabel; // @synthesize contactPhoneLabel=_contactPhoneLabel;
@property(retain, nonatomic) UILabel *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(retain, nonatomic) UIButton *contactImageButton; // @synthesize contactImageButton=_contactImageButton;
@property(copy, nonatomic) CDUnknownBlockType specialTapBlock; // @synthesize specialTapBlock=_specialTapBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) TBContactData *contactData; // @synthesize contactData=_contactData;
- (void).cxx_destruct;
- (void)contactImageButtonTap:(id)arg1;
- (id)initWithImageName:(id)arg1 iconFontName:(id)arg2 itemName:(id)arg3 tapBlock:(CDUnknownBlockType)arg4;
- (id)initWithContactData:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;

@end

