//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBExtBuyUtils : NSObject
{
}

+ (id)seperateLineModelAtIndex:(unsigned long long)arg1 withDataSource:(id)arg2;
+ (id)priceAttributedString:(id)arg1 currencySymbol:(id)arg2 symbolFontSize:(double)arg3 symbolFontColor:(id)arg4 integerFontSize:(double)arg5 integerFontColor:(id)arg6 decimalFontSize:(double)arg7 decimalFontColor:(id)arg8;
+ (id)colorWithHexString:(id)arg1 alpha:(double)arg2 defaultColor:(id)arg3;
+ (id)colorWithHexString:(id)arg1 alpha:(double)arg2;
+ (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 options:(unsigned long long)arg3 lineBreakMode:(long long)arg4 forString:(id)arg5;
+ (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 forString:(id)arg4;
+ (struct CGSize)sizeWithFont:(id)arg1 forString:(id)arg2;

@end
