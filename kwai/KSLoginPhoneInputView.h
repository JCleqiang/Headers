//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseLoginInputView.h"

@class KSCountryInfo, NSString, UIImageView, UILabel, UITextField;

@interface KSLoginPhoneInputView : KSBaseLoginInputView
{
    KSCountryInfo *_countryInfo;
    CDUnknownBlockType _countryInfoPressed;
    CDUnknownBlockType _countryInfoChanged;
    UILabel *_countryCodeLabel;
    UIImageView *_arrowIconImageView;
    UITextField *_phoneTextField;
}

@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UIImageView *arrowIconImageView; // @synthesize arrowIconImageView=_arrowIconImageView;
@property(retain, nonatomic) UILabel *countryCodeLabel; // @synthesize countryCodeLabel=_countryCodeLabel;
@property(copy, nonatomic) CDUnknownBlockType countryInfoChanged; // @synthesize countryInfoChanged=_countryInfoChanged;
@property(copy, nonatomic) CDUnknownBlockType countryInfoPressed; // @synthesize countryInfoPressed=_countryInfoPressed;
@property(retain, nonatomic) KSCountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *phone; // @dynamic phone;
- (id)initWithFrame:(struct CGRect)arg1;

@end

