//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBTextLabelDelegate-Protocol.h"

@class MocRichTextLabel, NSArray, NSString, UIView;

@interface MocRichTextComponent : WXComponent <TBTextLabelDelegate>
{
    double _fontSize;
    double _labelHeight;
    double _lineSpacing;
    double _picPadding;
    long long _picTop;
    long long _rowMax;
    double _fontWeight;
    NSString *_textValue;
    NSString *_fontColor;
    MocRichTextLabel *_tbtext;
    UIView *_wrapView;
    NSArray *_infos;
}

+ (id)getNSMutableAttributedString:(id)arg1 lineSpacing:(double)arg2 infos:(id)arg3 picPadding:(double)arg4 picTop:(double)arg5 color:(id)arg6;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=_infos;
@property(retain, nonatomic) UIView *wrapView; // @synthesize wrapView=_wrapView;
@property(retain, nonatomic) MocRichTextLabel *tbtext; // @synthesize tbtext=_tbtext;
@property(copy, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *textValue; // @synthesize textValue=_textValue;
@property(nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) long long rowMax; // @synthesize rowMax=_rowMax;
@property(nonatomic) long long picTop; // @synthesize picTop=_picTop;
@property(nonatomic) double picPadding; // @synthesize picPadding=_picPadding;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (id)getMocRichTextLabel;
- (void)updateAttributes:(id)arg1;
- (void)updateStyles:(id)arg1;
- (struct CGSize)getTextSize:(struct CGSize)arg1;
- (CDUnknownBlockType)measureBlock;
- (void)textLabel:(id)arg1 didTapWithLink:(id)arg2 range:(struct _NSRange)arg3;
- (void)rendRichText:(id)arg1;
- (void)setRichTextInfos:(id)arg1;
- (void)dealloc;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (id)init;
- (id)richtextView;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
