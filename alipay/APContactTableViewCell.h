//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class APButton, APContactInfo, APSearchPosition, NSString, TTTAttributedLabel, UIImageView, UILabel, UIView;
@protocol APContactTableViewCellDelegate;

@interface APContactTableViewCell : UITableViewCell
{
    _Bool _isSelected;
    _Bool _isSearchModel;
    _Bool _enableHiddenAccount;
    _Bool _shouldShowHead;
    _Bool _isMultiSelectMode;
    _Bool _shouldResponseTapHead;
    int _displayMode;
    int _buttonType;
    APContactInfo *_contactInfo;
    id <APContactTableViewCellDelegate> _delegate;
    APSearchPosition *_nameSearchPostion;
    NSString *_searchText;
    TTTAttributedLabel *_contactNameLabel;
    TTTAttributedLabel *_detailLabel;
    UIImageView *_apAvatarIcon;
    NSString *_lastImageUrl;
    NSString *_noAccountText;
    UIImageView *_contactSelectStateIcon;
    UIView *_bottomSepLine;
    UIImageView *_apIcon;
    UIImageView *_hasAppIcon;
    UIView *_noAccountView;
    APButton *_accButton;
    UIView *_noAccountDescLine;
    UILabel *_noAccountDescLabel;
    UIImageView *_noAccountImage;
}

+ (double)heightOfCell;
+ (id)cellIdentifier;
@property(retain, nonatomic) UIImageView *noAccountImage; // @synthesize noAccountImage=_noAccountImage;
@property(retain, nonatomic) UILabel *noAccountDescLabel; // @synthesize noAccountDescLabel=_noAccountDescLabel;
@property(retain, nonatomic) UIView *noAccountDescLine; // @synthesize noAccountDescLine=_noAccountDescLine;
@property(retain, nonatomic) APButton *accButton; // @synthesize accButton=_accButton;
@property(retain, nonatomic) UIView *noAccountView; // @synthesize noAccountView=_noAccountView;
@property(nonatomic) _Bool shouldResponseTapHead; // @synthesize shouldResponseTapHead=_shouldResponseTapHead;
@property(retain, nonatomic) UIImageView *hasAppIcon; // @synthesize hasAppIcon=_hasAppIcon;
@property(retain, nonatomic) UIImageView *apIcon; // @synthesize apIcon=_apIcon;
@property(nonatomic) _Bool isMultiSelectMode; // @synthesize isMultiSelectMode=_isMultiSelectMode;
@property(retain, nonatomic) UIView *bottomSepLine; // @synthesize bottomSepLine=_bottomSepLine;
@property(retain, nonatomic) UIImageView *contactSelectStateIcon; // @synthesize contactSelectStateIcon=_contactSelectStateIcon;
@property(retain, nonatomic) NSString *noAccountText; // @synthesize noAccountText=_noAccountText;
@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) _Bool shouldShowHead; // @synthesize shouldShowHead=_shouldShowHead;
@property(retain, nonatomic) NSString *lastImageUrl; // @synthesize lastImageUrl=_lastImageUrl;
@property(retain, nonatomic) UIImageView *apAvatarIcon; // @synthesize apAvatarIcon=_apAvatarIcon;
@property(retain, nonatomic) TTTAttributedLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) TTTAttributedLabel *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(nonatomic) _Bool enableHiddenAccount; // @synthesize enableHiddenAccount=_enableHiddenAccount;
@property(nonatomic) _Bool isSearchModel; // @synthesize isSearchModel=_isSearchModel;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) APSearchPosition *nameSearchPostion; // @synthesize nameSearchPostion=_nameSearchPostion;
@property(nonatomic) __weak id <APContactTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)didClickBtn;
- (void)didClickHead;
- (void)removeButton;
- (void)buttonShowWithTitle:(id)arg1 enable:(_Bool)arg2;
- (_Bool)shouldShowNoAccountDesc;
- (void)refreshNoAccountDesc;
- (void)refreshCellButtonType:(int)arg1;
- (void)refreshDetail;
- (void)refreshContactName;
- (void)refreshCellSelectMode:(_Bool)arg1;
- (void)refreshSelectMode;
- (void)refreshAvatar;
- (void)refreshCellWithAPContact:(id)arg1;
- (void)refreshSepLine;
- (double)getDetailLabelEndX;
- (double)contactTextValidWidth:(double)arg1;
- (void)adjustContactInfo:(double)arg1;
- (double)adjustAvatarIcon:(double)arg1;
- (double)adjustSelectModeIcon:(double)arg1;
- (void)adjustFrames;
- (void)bottomLineShow:(_Bool)arg1;
- (void)setupSelectIcon;
- (void)setupAvatarIcon;
- (void)setupDetailLabel;
- (void)setupContactNameLabel;
- (void)setupUI;
- (void)dealloc;
- (void)configParams:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configParams:(id)arg2;

@end
