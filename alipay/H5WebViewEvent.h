//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDEvent.h"

@class UIWebView;

@interface H5WebViewEvent : PSDEvent
{
    UIWebView *_webView;
}

+ (id)webViewReloadEvent:(id)arg1;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;

@end

