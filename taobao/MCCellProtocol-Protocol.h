//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString;
@protocol MCCellHandlerProtocol, MCCellModeProtocol, MCChatPageDisplayPresenterForCellAndBubbleInterface;

@protocol MCCellProtocol <NSObject>
+ (NSString *)getReuseIdentifier;
- (id <MCCellModeProtocol>)cellObject;
- (void)updateCellObject:(id <MCCellModeProtocol>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (id)initWithStyle:(long long)arg1 model:(id <MCCellModeProtocol>)arg2 cellHandler:(id <MCCellHandlerProtocol>)arg3 context:(id <MCChatPageDisplayPresenterForCellAndBubbleInterface>)arg4;

@optional
+ (id)alloc;
@end

