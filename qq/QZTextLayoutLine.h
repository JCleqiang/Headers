//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, UIImage;

@interface QZTextLayoutLine : NSObject
{
    struct __CTLine *_line;
    struct _NSRange _styleRange;
    _Bool _truncationNotShowMore;
    NSAttributedString *_lineText;
    UIImage *_backgroundImage;
    struct __CTLine *_textline;
    struct _NSRange _lineRange;
    struct QZTextRect _textRect;
}

@property(nonatomic) struct __CTLine *textline; // @synthesize textline=_textline;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool truncationNotShowMore; // @synthesize truncationNotShowMore=_truncationNotShowMore;
@property(retain, nonatomic) NSAttributedString *lineText; // @synthesize lineText=_lineText;
@property(nonatomic) struct _NSRange lineRange; // @synthesize lineRange=_lineRange;
@property(nonatomic) struct QZTextRect textRect; // @synthesize textRect=_textRect;
- (void).cxx_destruct;
- (void)dealloc;
- (struct __CTLine *)QZTextCreateCTLineWithStyle:(id)arg1 range:(struct _NSRange)arg2 styleRange:(struct _NSRange *)arg3;
- (struct __CTLine *)QZTextCreateCTLine;
- (void)drawStrikeLineInContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2 lineBounds:(struct CGRect)arg3 runs:(struct __CFArray *)arg4;
- (void)drawInContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2 line:(struct __CTLine *)arg3 lineTextPosition:(struct CGPoint)arg4 run:(struct __CTRun *)arg5;
- (void)drawInContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2 line:(struct __CTLine *)arg3;
- (void)drawInContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2 style:(id)arg3;
- (void)drawInContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (id)getAttributedTextWithStyle:(id)arg1 range:(struct _NSRange)arg2 styleRange:(struct _NSRange)arg3;
- (id)initWithLineText:(id)arg1 lineRage:(struct _NSRange)arg2 textRect:(struct QZTextRect)arg3;
- (id)initWithLineText:(id)arg1 lineRage:(struct _NSRange)arg2 textRect:(struct QZTextRect)arg3 backgroundImage:(id)arg4;
- (id)initWithLineText:(id)arg1 lineRage:(struct _NSRange)arg2 textRect:(struct QZTextRect)arg3 backgroundImage:(id)arg4 line:(struct __CTLine *)arg5;

@end

