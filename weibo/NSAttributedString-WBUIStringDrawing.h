//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (WBUIStringDrawing)
+ (id)wbct_sharedTextRenderer;
+ (id)rendererForCurrentThread;
- (void)wbct_drawWithWidth:(double)arg1 context:(struct CGContext *)arg2 numberOfLines:(long long)arg3 frameBlock:(CDUnknownBlockType)arg4;
- (void)wbct_drawWithWidth:(double)arg1 frameBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)wbct_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 numberOfLines:(long long)arg3 baselineMetrics:(struct WBTFontMetrics)arg4 textRender:(id)arg5;
- (struct CGSize)wbct_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 numberOfLines:(long long)arg3 baselineMetrics:(struct WBTFontMetrics)arg4;
- (struct CGSize)wbct_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 numberOfLines:(long long)arg3;
- (struct CGSize)wbct_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (struct CGSize)wbct_drawInRect:(struct CGRect)arg1;
- (struct _NSRange)wbct_rangeToSize:(struct CGSize)arg1 withLimitedLines:(unsigned long long)arg2;
- (struct _NSRange)wbct_rangeToSize:(struct CGSize)arg1;
- (struct CGSize)wbct_sizeConstrainedToSize:(struct CGSize)arg1 numberOfLines:(long long)arg2 derivedLineCount:(long long *)arg3 baselineMetrics:(struct WBTFontMetrics)arg4;
- (struct CGSize)wbct_sizeConstrainedToSize:(struct CGSize)arg1 numberOfLines:(long long)arg2 derivedLineCount:(long long *)arg3;
- (struct CGSize)wbct_sizeConstrainedToSize:(struct CGSize)arg1 numberOfLines:(long long)arg2;
- (struct CGSize)wbct_sizeConstrainedToSize:(struct CGSize)arg1;
- (struct CGSize)wbct_size;
- (struct CGSize)wbct_sizeConstrainedToWidth:(double)arg1 numberOfLines:(long long)arg2;
- (struct CGSize)wbct_sizeConstrainedToWidth:(double)arg1;
- (double)wbct_heightConstrainedToWidth:(double)arg1 exclusionPaths:(id)arg2;
- (double)wbct_heightConstrainedToWidth:(double)arg1;
- (id)wbct_layoutToWidth:(double)arg1 maxNumberOfLines:(long long)arg2 exclusionPaths:(id)arg3 layoutSize:(struct CGSize)arg4;
- (id)wbct_layoutToWidth:(double)arg1 maxNumberOfLines:(long long)arg2 exclusionPaths:(id)arg3;
- (struct CGSize)wbct_sizeForLastLine;
- (id)wbct_sharedTextRenderer;
@end

