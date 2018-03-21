//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _priv_NBSLens_perfmItem : NSObject
{
    NSString *_URL;
    NSString *_PV_ID;
    long long _REDIRECT_START;
    long long _REDIRECT_END;
    long long _FETCH_START;
    long long _DOMAIN_LOOKUP_START;
    long long _DOMAIN_LOOKUP_END;
    long long _CONNECT_START;
    long long _CONNECT_END;
    long long _SECURE_CONNECTION_START;
    long long _REQUEST_START;
    long long _RESPONSE_START;
    long long _RESPONSE_END;
    long long _DOM_LOADING;
    long long _DOM_INTERACTIVE;
    long long _DOM_CONTENT_LOADED_EVENT_START;
    long long _DOM_CONTENT_LOADED_EVENT_END;
    long long _DOM_COMPLETE;
    long long _LOAD_EVENT_START;
    long long _LOAD_EVENT_END;
    long long _FIRST_PAINT_TIME;
    long long _FIRST_SCREEN_TIME;
    long long _JS_ERRORS;
    long long _HTTP_STATUS_CODE;
    long long _ERROR_CODE;
    unsigned long long _BYTE_RECEIVED;
    NSString *_APP_DATA;
    NSArray *_RESOURCES_DATA_ARRAY;
    NSArray *_PAGE_JS_ERRORS_DATA_ARRAY;
    NSString *_CDN_VENDOR_NAME;
    double _navigationStart;
}

@property double navigationStart; // @synthesize navigationStart=_navigationStart;
@property(copy) NSString *CDN_VENDOR_NAME; // @synthesize CDN_VENDOR_NAME=_CDN_VENDOR_NAME;
@property(retain) NSArray *PAGE_JS_ERRORS_DATA_ARRAY; // @synthesize PAGE_JS_ERRORS_DATA_ARRAY=_PAGE_JS_ERRORS_DATA_ARRAY;
@property(retain) NSArray *RESOURCES_DATA_ARRAY; // @synthesize RESOURCES_DATA_ARRAY=_RESOURCES_DATA_ARRAY;
@property(retain) NSString *APP_DATA; // @synthesize APP_DATA=_APP_DATA;
@property unsigned long long BYTE_RECEIVED; // @synthesize BYTE_RECEIVED=_BYTE_RECEIVED;
@property long long ERROR_CODE; // @synthesize ERROR_CODE=_ERROR_CODE;
@property long long HTTP_STATUS_CODE; // @synthesize HTTP_STATUS_CODE=_HTTP_STATUS_CODE;
@property long long JS_ERRORS; // @synthesize JS_ERRORS=_JS_ERRORS;
@property long long FIRST_SCREEN_TIME; // @synthesize FIRST_SCREEN_TIME=_FIRST_SCREEN_TIME;
@property long long FIRST_PAINT_TIME; // @synthesize FIRST_PAINT_TIME=_FIRST_PAINT_TIME;
@property long long LOAD_EVENT_END; // @synthesize LOAD_EVENT_END=_LOAD_EVENT_END;
@property long long LOAD_EVENT_START; // @synthesize LOAD_EVENT_START=_LOAD_EVENT_START;
@property long long DOM_COMPLETE; // @synthesize DOM_COMPLETE=_DOM_COMPLETE;
@property long long DOM_CONTENT_LOADED_EVENT_END; // @synthesize DOM_CONTENT_LOADED_EVENT_END=_DOM_CONTENT_LOADED_EVENT_END;
@property long long DOM_CONTENT_LOADED_EVENT_START; // @synthesize DOM_CONTENT_LOADED_EVENT_START=_DOM_CONTENT_LOADED_EVENT_START;
@property long long DOM_INTERACTIVE; // @synthesize DOM_INTERACTIVE=_DOM_INTERACTIVE;
@property long long DOM_LOADING; // @synthesize DOM_LOADING=_DOM_LOADING;
@property long long RESPONSE_END; // @synthesize RESPONSE_END=_RESPONSE_END;
@property long long RESPONSE_START; // @synthesize RESPONSE_START=_RESPONSE_START;
@property long long REQUEST_START; // @synthesize REQUEST_START=_REQUEST_START;
@property long long SECURE_CONNECTION_START; // @synthesize SECURE_CONNECTION_START=_SECURE_CONNECTION_START;
@property long long CONNECT_END; // @synthesize CONNECT_END=_CONNECT_END;
@property long long CONNECT_START; // @synthesize CONNECT_START=_CONNECT_START;
@property long long DOMAIN_LOOKUP_END; // @synthesize DOMAIN_LOOKUP_END=_DOMAIN_LOOKUP_END;
@property long long DOMAIN_LOOKUP_START; // @synthesize DOMAIN_LOOKUP_START=_DOMAIN_LOOKUP_START;
@property long long FETCH_START; // @synthesize FETCH_START=_FETCH_START;
@property long long REDIRECT_END; // @synthesize REDIRECT_END=_REDIRECT_END;
@property long long REDIRECT_START; // @synthesize REDIRECT_START=_REDIRECT_START;
@property(copy) NSString *PV_ID; // @synthesize PV_ID=_PV_ID;
@property(copy) NSString *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)updateTimingFromWebAction:(id)arg1;
- (id)renderJSError;
- (id)renderResourceData;
- (id)getSlowIndicator;
- (id)render;
- (id)init;

@end
