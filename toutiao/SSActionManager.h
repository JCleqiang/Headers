//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SSActionManager : NSObject
{
}

+ (void)trackURL:(id)arg1;
+ (id)sharedManager;
+ (void)load;
- (id)getTopViewController;
- (_Bool)actionForModel:(id)arg1;
- (void)openDownloadURL:(id)arg1 appleID:(id)arg2 localDownloadURL:(id)arg3;
- (void)openAppURL:(id)arg1 tabURL:(id)arg2 adID:(id)arg3 logExtra:(id)arg4;
- (void)openWebURL:(id)arg1 appName:(id)arg2 adID:(id)arg3 logExtra:(id)arg4;
- (void)openWebURL:(id)arg1 appName:(id)arg2 adID:(id)arg3 logExtra:(id)arg4 inNavigationController:(id)arg5;
- (void)openDownloadURL:(id)arg1 appleID:(id)arg2 appName:(id)arg3;
- (void)openDownloadURL:(id)arg1 appleID:(id)arg2;

@end

