//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface MVActivityNoticeView : UIView
{
    UILabel *_noticeLabel;
    NSString *_noticeText;
}

@property(retain, nonatomic) NSString *noticeText; // @synthesize noticeText=_noticeText;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end

