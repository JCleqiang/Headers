//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOArkAppModel.h>

@class SpriteActionMsgInfo;

@interface QQAIOCmShowGameArkModel : QQAIOArkAppModel
{
    SpriteActionMsgInfo *_spriteMsgInfo;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(retain, nonatomic) SpriteActionMsgInfo *spriteMsgInfo; // @synthesize spriteMsgInfo=_spriteMsgInfo;
- (int)spriteAioTypeByArkGame;
- (id)gamePlayersInfo;
- (id)cmShowGameArkDictionary;
- (id)eventHandleClassName;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;
- (void)createArkView;
- (void)initArkView;
- (id)initWithMessageModel:(id)arg1;

@end

