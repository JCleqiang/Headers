//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseDecorateManager.h"

@interface MCFamilyDecorateManager : MCBaseDecorateManager
{
}

- (void)getTemplateFromNetworkByIdentifiers:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)correctTemplateWithIdentifier:(id)arg1 placeholder:(id)arg2 enable:(_Bool)arg3;
- (void)batchFetchTemplateWithIdentifier:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)fetchTemplateWithIdentifier:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)fetchTemplateFromCache:(id)arg1 fetchRemote:(_Bool)arg2;
- (id)fetchConfigTemplate:(id)arg1 fetchRemote:(_Bool)arg2;
- (id)init;

@end
