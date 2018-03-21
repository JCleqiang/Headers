//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface QQFaceImageBoardView : UIView
{
    long long _pageId;
    _Bool _landscape;
    _Bool _notDisplayDel;
    _Bool _delPressDown;
    _Bool _hightLinghted;
    struct CGRect _rectBG;
    int _emojiType;
    NSMutableArray *_accessibilityChildren;
    int _xo;
}

+ (id)GetBoardViewWithPageId:(long long)arg1 frame:(struct CGRect)arg2;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityChildren;
- (_Bool)isAccessibilityElement;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) _Bool delPressDown; // @dynamic delPressDown;
- (void)drawFaces:(struct CGRect)arg1;
- (id)GetIOSEmojiFont;
- (id)GetIOSEmojiInfo:(unsigned long long)arg1;
- (CDStruct_3309b7df)GetEmojiFace:(unsigned long long)arg1;
- (unsigned long long)GetFaceKeyBoardMaxCount;
- (unsigned long long)GetFaceKeyBoardCol;
- (unsigned long long)GetFaceKeyBoardRow;
- (id)imageWithQQFaceID:(int)arg1;
- (id)imageWithFaceId:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) int emojiType; // @dynamic emojiType;
@property(nonatomic) _Bool notDisplayDel; // @dynamic notDisplayDel;
@property(nonatomic) long long pageId; // @dynamic pageId;

@end
