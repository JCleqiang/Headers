//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CMBaseCommand.h>

#import <QQMainProject/ContinousCMDDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface CMMacroCommand : CMBaseCommand <ContinousCMDDelegate>
{
    NSMutableArray *_commands;
}

@property(retain, nonatomic) NSMutableArray *commands; // @synthesize commands=_commands;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)mergeWithCommand:(id)arg1;
- (void)undoCmd;
- (void)executeCmd;
- (id)initWithCommands:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

