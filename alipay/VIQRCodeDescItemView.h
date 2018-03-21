//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface VIQRCodeDescItemView : UIView
{
    UIImageView *_headImageView;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (double)heightWithWidth:(double)arg1 fontSize:(double)arg2 str:(id)arg3;
- (double)heightForItemView;
- (void)drawItemViewWith:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 descItem:(id)arg2;

@end
