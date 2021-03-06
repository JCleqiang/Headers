//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol TBSearchLabelButtonMixedDelegate;

@interface TBSearchLabelButtonMixedViewModel : NSObject
{
    float _titleButtonPadding;
    float _buttonPadding;
    float _totalHeight;
    NSString *_title;
    NSArray *_tagArray;
    id <TBSearchLabelButtonMixedDelegate> _delegate;
    NSString *_buttonTextColor;
    NSString *_buttonBackgroundColor;
    struct CGRect _frame;
}

@property(nonatomic) float totalHeight; // @synthesize totalHeight=_totalHeight;
@property(retain, nonatomic) NSString *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) NSString *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(nonatomic) float buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(nonatomic) float titleButtonPadding; // @synthesize titleButtonPadding=_titleButtonPadding;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak id <TBSearchLabelButtonMixedDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tagArray; // @synthesize tagArray=_tagArray;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

