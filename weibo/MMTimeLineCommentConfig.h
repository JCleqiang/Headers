//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageTimelineConfigBase.h"

@class UIColor;

@interface MMTimeLineCommentConfig : MMMessageTimelineConfigBase
{
    double _leftPadding;
    double _topPadding;
    double _topPadding_deleted;
    double _rightPadding;
    double _leftPadding_deleted;
    double _rightPadding_deleted;
    double _backView_leftPadding;
    double _backView_rightPadding;
    double _backView_topPadding;
    double _backView_bottomPadding;
    double _textFont;
    double _deletedTextFont;
    UIColor *_textColor;
    UIColor *_deletedTextColor;
    UIColor *_deletedBackgroundColor;
    long long _numberofLines;
}

@property long long numberofLines; // @synthesize numberofLines=_numberofLines;
@property(retain) UIColor *deletedBackgroundColor; // @synthesize deletedBackgroundColor=_deletedBackgroundColor;
@property(retain) UIColor *deletedTextColor; // @synthesize deletedTextColor=_deletedTextColor;
@property(retain) UIColor *textColor; // @synthesize textColor=_textColor;
@property double deletedTextFont; // @synthesize deletedTextFont=_deletedTextFont;
@property double textFont; // @synthesize textFont=_textFont;
@property double backView_bottomPadding; // @synthesize backView_bottomPadding=_backView_bottomPadding;
@property double backView_topPadding; // @synthesize backView_topPadding=_backView_topPadding;
@property double backView_rightPadding; // @synthesize backView_rightPadding=_backView_rightPadding;
@property double backView_leftPadding; // @synthesize backView_leftPadding=_backView_leftPadding;
@property double rightPadding_deleted; // @synthesize rightPadding_deleted=_rightPadding_deleted;
@property double leftPadding_deleted; // @synthesize leftPadding_deleted=_leftPadding_deleted;
@property double rightPadding; // @synthesize rightPadding=_rightPadding;
@property double topPadding_deleted; // @synthesize topPadding_deleted=_topPadding_deleted;
@property double topPadding; // @synthesize topPadding=_topPadding;
@property double leftPadding; // @synthesize leftPadding=_leftPadding;
- (void).cxx_destruct;
- (void)configCommon;

@end

