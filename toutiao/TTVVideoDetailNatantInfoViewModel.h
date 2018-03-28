//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, TTRichSpanText;
@protocol TTVVideoDetailNatantInfoModelProtocol;

@interface TTVVideoDetailNatantInfoViewModel : NSObject
{
    id <TTVVideoDetailNatantInfoModelProtocol> _infoModel;
    NSString *_watchCountStr;
    NSString *_title;
    NSString *_digTitle;
    NSString *_buryTitle;
    NSAttributedString *_attributeString;
    NSDictionary *_contentLabelTextAttributs;
    NSDictionary *_contentLabelLinkAttributes;
    NSDictionary *_contentLabelActiveLinkAttributes;
    NSAttributedString *_titleLabelAttributedStr;
    NSArray *_titleLabelLinks;
    NSString *_abstactHTMlString;
    TTRichSpanText *_richTitle;
}

+ (double)contentLabelFontSize;
+ (id)titleLabelAttributedDictionary;
@property(retain, nonatomic) TTRichSpanText *richTitle; // @synthesize richTitle=_richTitle;
@property(retain, nonatomic) NSString *abstactHTMlString; // @synthesize abstactHTMlString=_abstactHTMlString;
@property(retain, nonatomic) NSArray *titleLabelLinks; // @synthesize titleLabelLinks=_titleLabelLinks;
@property(copy, nonatomic) NSAttributedString *titleLabelAttributedStr; // @synthesize titleLabelAttributedStr=_titleLabelAttributedStr;
@property(retain, nonatomic) NSDictionary *contentLabelActiveLinkAttributes; // @synthesize contentLabelActiveLinkAttributes=_contentLabelActiveLinkAttributes;
@property(retain, nonatomic) NSDictionary *contentLabelLinkAttributes; // @synthesize contentLabelLinkAttributes=_contentLabelLinkAttributes;
@property(retain, nonatomic) NSDictionary *contentLabelTextAttributs; // @synthesize contentLabelTextAttributs=_contentLabelTextAttributs;
@property(copy, nonatomic) NSAttributedString *attributeString; // @synthesize attributeString=_attributeString;
@property(retain, nonatomic) NSString *buryTitle; // @synthesize buryTitle=_buryTitle;
@property(retain, nonatomic) NSString *digTitle; // @synthesize digTitle=_digTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *watchCountStr; // @synthesize watchCountStr=_watchCountStr;
@property(retain, nonatomic) id <TTVVideoDetailNatantInfoModelProtocol> infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
- (id)uniqueID;
- (_Bool)showExtendLink;
- (void)linkTap:(id)arg1 UIView:(id)arg2;
- (void)cancelBurryAction;
- (void)buryAction;
- (void)cancelDiggAction;
- (void)digAction;
- (void)logShowRecommentView:(id)arg1;
- (void)updateButtonTitle;
- (void)updateAttributeTitle;
- (void)updateContentLabelWithHTMLString:(id)arg1;
- (void)constructLabelStrings;
- (id)initWithInfoModel:(id)arg1;

@end
