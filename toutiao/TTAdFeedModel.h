//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

#import "TTAdFeedModel-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, TTImageInfosModel;
@protocol Optional;

@interface TTAdFeedModel : JSONModel <TTAdFeedModel>
{
    _Bool _system_origin;
    _Bool _inner_open_type;
    _Bool _has_video;
    _Bool _button_style;
    NSString *_ad_id;
    NSString *_log_extra;
    NSArray<Optional> *_track_url_list;
    NSArray<Optional> *_click_track_url_list;
    double _effectivePlayTime;
    NSArray *_playTrackUrls;
    NSArray *_activePlayTrackUrls;
    NSArray *_effectivePlayTrackUrls;
    NSArray *_playOverTrackUrls;
    NSArray<Optional> *_open_url_list;
    long long _track_sdk;
    NSString *_form_url;
    NSNumber *_form_width;
    NSNumber *_form_height;
    NSNumber *_use_size_validation;
    NSDictionary *_location_data;
    NSString *_location_url;
    NSString *_webURL;
    NSString *_webTitle;
    NSString *_button_open_url;
    double _expire_seconds;
    NSString *_type;
    NSDictionary *_detail_info;
    NSString *_style;
    NSString *_sub_title;
    NSString *_open_url;
    NSString *_share_url;
    NSArray *_filter_words;
    NSString *_button_text;
    long long _displayType;
    NSString *_appName;
    NSString *_download_url;
    NSString *_apple_id;
    NSNumber *_hideIfExists;
    NSString *_ipa_url;
    NSString *_phoneNumber;
    NSString *_alert_text;
    NSNumber *_dialActionType;
    NSString *_sub_style;
    NSString *_appUrl;
    NSString *_tabUrl;
    NSString *_locationDistrict;
    NSString *_locationStreet;
    NSString *_locationDisdance;
    NSString *_descInfo;
    TTImageInfosModel *_imageModel;
    NSString *_source;
    NSString *_label;
    NSString *_title;
    NSNumber *_ui_type;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSNumber *ui_type; // @synthesize ui_type=_ui_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) TTImageInfosModel *imageModel; // @synthesize imageModel=_imageModel;
@property(copy, nonatomic) NSString *descInfo; // @synthesize descInfo=_descInfo;
@property(copy, nonatomic) NSString *locationDisdance; // @synthesize locationDisdance=_locationDisdance;
@property(copy, nonatomic) NSString *locationStreet; // @synthesize locationStreet=_locationStreet;
@property(copy, nonatomic) NSString *locationDistrict; // @synthesize locationDistrict=_locationDistrict;
@property(copy, nonatomic) NSString *tabUrl; // @synthesize tabUrl=_tabUrl;
@property(copy, nonatomic) NSString *appUrl; // @synthesize appUrl=_appUrl;
@property(copy, nonatomic) NSString *sub_style; // @synthesize sub_style=_sub_style;
@property(retain, nonatomic) NSNumber *dialActionType; // @synthesize dialActionType=_dialActionType;
@property(copy, nonatomic) NSString *alert_text; // @synthesize alert_text=_alert_text;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *ipa_url; // @synthesize ipa_url=_ipa_url;
@property(retain, nonatomic) NSNumber *hideIfExists; // @synthesize hideIfExists=_hideIfExists;
@property(copy, nonatomic) NSString *apple_id; // @synthesize apple_id=_apple_id;
@property(copy, nonatomic) NSString *download_url; // @synthesize download_url=_download_url;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool button_style; // @synthesize button_style=_button_style;
@property(copy, nonatomic) NSString *button_text; // @synthesize button_text=_button_text;
@property(copy, nonatomic) NSArray *filter_words; // @synthesize filter_words=_filter_words;
@property(copy, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(nonatomic) _Bool has_video; // @synthesize has_video=_has_video;
@property(copy, nonatomic) NSString *open_url; // @synthesize open_url=_open_url;
@property(copy, nonatomic) NSString *sub_title; // @synthesize sub_title=_sub_title;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(nonatomic) _Bool inner_open_type; // @synthesize inner_open_type=_inner_open_type;
@property(copy, nonatomic) NSDictionary *detail_info; // @synthesize detail_info=_detail_info;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) double expire_seconds; // @synthesize expire_seconds=_expire_seconds;
@property(copy, nonatomic) NSString *button_open_url; // @synthesize button_open_url=_button_open_url;
@property(copy, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *location_url; // @synthesize location_url=_location_url;
@property(copy, nonatomic) NSDictionary *location_data; // @synthesize location_data=_location_data;
@property(retain, nonatomic) NSNumber *use_size_validation; // @synthesize use_size_validation=_use_size_validation;
@property(retain, nonatomic) NSNumber *form_height; // @synthesize form_height=_form_height;
@property(retain, nonatomic) NSNumber *form_width; // @synthesize form_width=_form_width;
@property(copy, nonatomic) NSString *form_url; // @synthesize form_url=_form_url;
@property(nonatomic) _Bool system_origin; // @synthesize system_origin=_system_origin;
@property(nonatomic) long long track_sdk; // @synthesize track_sdk=_track_sdk;
@property(copy, nonatomic) NSArray<Optional> *open_url_list; // @synthesize open_url_list=_open_url_list;
@property(copy, nonatomic) NSArray *playOverTrackUrls; // @synthesize playOverTrackUrls=_playOverTrackUrls;
@property(copy, nonatomic) NSArray *effectivePlayTrackUrls; // @synthesize effectivePlayTrackUrls=_effectivePlayTrackUrls;
@property(copy, nonatomic) NSArray *activePlayTrackUrls; // @synthesize activePlayTrackUrls=_activePlayTrackUrls;
@property(copy, nonatomic) NSArray *playTrackUrls; // @synthesize playTrackUrls=_playTrackUrls;
@property(nonatomic) double effectivePlayTime; // @synthesize effectivePlayTime=_effectivePlayTime;
@property(copy, nonatomic) NSArray<Optional> *click_track_url_list; // @synthesize click_track_url_list=_click_track_url_list;
@property(copy, nonatomic) NSArray<Optional> *track_url_list; // @synthesize track_url_list=_track_url_list;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;
- (_Bool)hasLocationInfo;
- (_Bool)showActionButton;
- (_Bool)isCreativeAd;
- (id)mointerInfo;
- (_Bool)showActionButtonIcon;
- (id)actionButtonTitle;
- (long long)adType;
- (_Bool)isFullScreenVideoStyle;
- (_Bool)isCanvasStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
