//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTextRenderer.h"

@class NSAttributedString, UIColor;

@interface WBTimelineTextRenderer : WBTextRenderer
{
    _Bool _highlighted;
    NSAttributedString *_savedSubstring;
    NSAttributedString *_savedAttributedString;
    UIColor *_hitRangeTextColor;
    UIColor *_highlightedTextColor;
    UIColor *_hitRangeBackgroundColor;
    struct UIOffset _drawOffset;
}

@property(nonatomic) struct UIOffset drawOffset; // @synthesize drawOffset=_drawOffset;
@property(retain, nonatomic) UIColor *hitRangeBackgroundColor; // @synthesize hitRangeBackgroundColor=_hitRangeBackgroundColor;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *hitRangeTextColor; // @synthesize hitRangeTextColor=_hitRangeTextColor;
@property(retain, nonatomic) NSAttributedString *savedAttributedString; // @synthesize savedAttributedString=_savedAttributedString;
@property(retain, nonatomic) NSAttributedString *savedSubstring; // @synthesize savedSubstring=_savedSubstring;
- (void).cxx_destruct;
- (struct UIOffset)drawingOffsetWithTextLayout:(id)arg1 layoutFrame:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 activeRanges:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setPressingActiveRange:(id)arg1;
- (void)drawHighlightedBackgroundForActiveRange:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)dealloc;

@end

