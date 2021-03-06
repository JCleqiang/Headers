//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAIOCell, QQAIOModel, QQChatViewTable;

@interface QQAIOCellView : UIView
{
    _Bool _highlighted;
    _Bool _isLongPress;
    _Bool _isHandleTouch;
    struct CGPoint _longPressPoint;
    QQChatViewTable *_chatViewTable;
    QQAIOModel *_aioModel;
    QQAIOCell *_aioCell;
}

@property(nonatomic, setter=setHighlighted:) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak QQAIOCell *aioCell; // @synthesize aioCell=_aioCell;
@property(nonatomic) __weak QQAIOModel *aioModel; // @synthesize aioModel=_aioModel;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @synthesize chatViewTable=_chatViewTable;
- (void).cxx_destruct;
- (void)LongPressCallBack:(struct CGPoint)arg1;
- (void)LongPressedEnded;
- (void)setIsLongPressed;
- (void)prepareForReuse;
- (void)updateCellView;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end

