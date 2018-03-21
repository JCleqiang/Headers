//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, QQBaseChatViewController, sa_gl_view;

@interface CmShowScriptManager : NSObject
{
    QQBaseChatViewController *_chatViewController;
    sa_gl_view *_glView;
    NSMutableArray *_loadedScriptArray;
}

@property(retain, nonatomic) NSMutableArray *loadedScriptArray; // @synthesize loadedScriptArray=_loadedScriptArray;
@property(retain, nonatomic) sa_gl_view *glView; // @synthesize glView=_glView;
@property(nonatomic) QQBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)callBackToBk:(id)arg1 retCode:(int)arg2 data:(id)arg3;
- (void)sendLocalCmd:(id)arg1 data:(id)arg2;
- (void)spriteInfoChanged:(int)arg1 uinList:(id)arg2;
- (void)stopAllTasksWithType:(_Bool)arg1;
- (void)addBubbbleWithContent:(id)arg1 bubbleUin:(id)arg2 bubbleFile:(id)arg3;
- (void)setSpriteVisibility:(int)arg1;
- (void)didClickSprite:(int)arg1 url:(id)arg2;
- (void)spriteActionUpdateFinished:(id)arg1 isSuccess:(_Bool)arg2 taskId:(id)arg3 extraInfo:(id)arg4;
- (void)spriteRoleAndDressUpdateFinished:(id)arg1 isSuccess:(_Bool)arg2 extraInfo:(id)arg3;
- (void)spritePanelStatusChange:(int)arg1;
- (void)glviewVisibleSizeChange:(struct CGSize)arg1;
- (void)playAction:(id)arg1;
- (void)sendMsg:(id)arg1;
- (void)initSprite:(id)arg1;
- (void)initAioCommonInfo:(id)arg1;
- (_Bool)isScriptLoaded:(int)arg1;
- (id)registerActionScript:(id)arg1 actionType:(int)arg2;
- (void)updateScriptInMainThread;
- (_Bool)loadActionScriptWithActionId:(long long)arg1 actionType:(int)arg2;
- (_Bool)loadActionBasicScript;
- (_Bool)loadCmShowSceneScript;
- (void)dealloc;
- (id)initWithSpriteView:(id)arg1;

@end
