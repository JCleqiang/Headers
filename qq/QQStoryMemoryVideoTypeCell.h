//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView;
@protocol QQStoryMemoryVideoTypeCellDelagete;

@interface QQStoryMemoryVideoTypeCell : UITableViewCell
{
    UILabel *_storyCountLabel;
    UILabel *_storyNameLabel;
    UILabel *_shareVideoCountLabel;
    UILabel *_shareVideoNameLabel;
    UIButton *_storyContentView;
    UIButton *_shareVideoContentView;
    UIView *_slideMarkView;
    unsigned int _storyNum;
    unsigned int _shareVideoNum;
    long long _videoType;
    id <QQStoryMemoryVideoTypeCellDelagete> _delegate;
}

+ (double)height;
@property(nonatomic) id <QQStoryMemoryVideoTypeCellDelagete> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) unsigned int shareVideoNum; // @synthesize shareVideoNum=_shareVideoNum;
@property(nonatomic) unsigned int storyNum; // @synthesize storyNum=_storyNum;
- (void)dealloc;
- (void)onClickShareVideoTab;
- (void)onClickStoryTab;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

