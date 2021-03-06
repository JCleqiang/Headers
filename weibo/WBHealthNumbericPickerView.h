//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBListPickerView.h"

@class NSString, UILabel;

@interface WBHealthNumbericPickerView : WBListPickerView
{
    NSString *_unit;
    UILabel *_dotLabel;
    struct _NSRange _numberRange;
}

+ (id)dataArrayWithRange:(struct _NSRange)arg1 unitString:(id)arg2;
@property(retain, nonatomic) UILabel *dotLabel; // @synthesize dotLabel=_dotLabel;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) struct _NSRange numberRange; // @synthesize numberRange=_numberRange;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) float selectedNumber;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)initWithNumberRange:(struct _NSRange)arg1 unitString:(id)arg2;

@end

