//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSAutocompleteFilter, GMSCoordinateBounds, GMSPlacesClient, NSString;
@protocol GMSAutocompleteFetcherDelegate;

@interface GMSAutocompleteFetcher : NSObject
{
    NSString *_currentSearchText;
    NSString *_delayedRequest;
    _Bool _isDelayingRequests;
    GMSPlacesClient *_sharedClient;
    _Bool _isWaitingForPredictions;
    id <GMSAutocompleteFetcherDelegate> _delegate;
    GMSCoordinateBounds *_autocompleteBounds;
    GMSAutocompleteFilter *_autocompleteFilter;
    NSString *_requestSource;
    unsigned long long _requestCount;
    unsigned long long _errorCount;
    unsigned long long _textChangedCount;
}

@property(readonly, nonatomic) unsigned long long textChangedCount; // @synthesize textChangedCount=_textChangedCount;
@property(readonly, nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(copy, nonatomic) NSString *requestSource; // @synthesize requestSource=_requestSource;
@property(readonly, nonatomic) _Bool isWaitingForPredictions; // @synthesize isWaitingForPredictions=_isWaitingForPredictions;
@property(retain, nonatomic) GMSAutocompleteFilter *autocompleteFilter; // @synthesize autocompleteFilter=_autocompleteFilter;
@property(retain, nonatomic) GMSCoordinateBounds *autocompleteBounds; // @synthesize autocompleteBounds=_autocompleteBounds;
@property(nonatomic) __weak id <GMSAutocompleteFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestAutocompleteResultsWithText:(id)arg1;
- (void)sendOrDelayRequest:(id)arg1;
- (void)sourceTextHasChanged:(id)arg1;
- (id)initWithBounds:(id)arg1 filter:(id)arg2;
- (id)init;

@end

