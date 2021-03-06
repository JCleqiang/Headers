//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WeiboCubeAccount-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, WBAccountCredential, WBAccountPushSettings, WBAccountUnreadCount, WBHCUserSettings, WBStorySettings, WBUser;

@interface WBAccount : NSObject <WeiboCubeAccount>
{
    _Bool _loggedIn;
    _Bool _isGuest;
    NSString *_identifier;
    NSString *_userID;
    NSString *_screenName;
    WBUser *_user;
    WBAccountCredential *_credential;
    unsigned long long _passwordState;
    unsigned long long _accountType;
    NSMutableDictionary *_settingsProperties;
    NSMutableDictionary *_temporaryProperties;
    long long _feedType;
    long long _tempFeedType;
    NSString *_guestCheckToken;
}

+ (void)cleanShareInfoInKeyChainWithUid:(id)arg1;
+ (id)decodeWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *guestCheckToken; // @synthesize guestCheckToken=_guestCheckToken;
@property(nonatomic) long long tempFeedType; // @synthesize tempFeedType=_tempFeedType;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSMutableDictionary *temporaryProperties; // @synthesize temporaryProperties=_temporaryProperties;
@property(retain, nonatomic) NSMutableDictionary *settingsProperties; // @synthesize settingsProperties=_settingsProperties;
@property(nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned long long passwordState; // @synthesize passwordState=_passwordState;
@property(nonatomic) _Bool isGuest; // @synthesize isGuest=_isGuest;
@property(nonatomic, getter=isLoggedIn) _Bool loggedIn; // @synthesize loggedIn=_loggedIn;
@property(retain, nonatomic) WBAccountCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *coverAssetLocalIdentifier;
- (void)cleanShareInfoInKeyChain;
- (void)storeShareInfoInKeyChain;
- (void)cleanAccountCache;
- (_Bool)updateGSID:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;
- (_Bool)isCurrentAccount;
- (_Bool)validateAccount;
- (id)init;
@property(retain, nonatomic) WBAccountPushSettings *pushSettings;
- (void)cleanAllSearchHistories;
- (void)_updateSearchHistories:(id)arg1;
- (id)_searchHistories;
- (id)_searchHistoryUserDefaultsKey;
- (void)cleanSearchHistoryForType:(id)arg1;
- (void)updateSearchHistory:(id)arg1 toType:(id)arg2;
- (id)searchHistoryForType:(id)arg1;
- (void)postCurrentAccountUnreadCountDidUpdateNotification;
@property(retain, nonatomic) WBAccountUnreadCount *unreadCount;
@property(retain, nonatomic) NSArray *userMedals;
@property(readonly, nonatomic) WBHCUserSettings *defaultHealthSettings;
@property(nonatomic) int unfinishedHealthSettingsState;
@property(retain, nonatomic) WBHCUserSettings *unfinishedHealthSettings;
@property(retain, nonatomic) WBHCUserSettings *healthSettings;
@property(nonatomic) _Bool healthNotice;
@property(nonatomic) float healthTotalDistance;
@property(nonatomic) unsigned long long healthTotalSteps;
- (id)_health_userDefaultsValueForKey:(id)arg1;
- (void)_health_setUserDefaultsValue:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSString *health_displayTotalDistance;
@property(readonly, copy, nonatomic) NSString *health_displayTotalSteps;
@property(nonatomic) _Bool showInspector;
@property(retain, nonatomic) WBStorySettings *storySettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

