//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class FRLocationEntity, SSThemedImageView, SSThemedLabel;

@interface FRForumLocationDoubleLineCell : SSThemedTableViewCell
{
    FRLocationEntity *_location;
    SSThemedLabel *_titleLabel;
    SSThemedLabel *_describeLabel;
    SSThemedImageView *_selectedImageView;
}

@property(retain, nonatomic) SSThemedImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) SSThemedLabel *describeLabel; // @synthesize describeLabel=_describeLabel;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FRLocationEntity *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

