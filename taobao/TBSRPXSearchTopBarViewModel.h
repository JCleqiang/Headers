//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchViewModel.h"

@class NSArray, TBRSignal, TBSRPXSearchService, TBSRPXSearchTopBarModel;

@interface TBSRPXSearchTopBarViewModel : XSearchViewModel
{
    _Bool _hasStyle;
    _Bool _hasFilter;
    _Bool _needLightenFilter;
    NSArray *_topBarItems;
    TBRSignal *_filterHighlightSig;
    TBSRPXSearchService *_searchService;
    TBSRPXSearchTopBarModel *_model;
    long long _layoutStyle;
}

@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) TBSRPXSearchTopBarModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TBSRPXSearchService *searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) TBRSignal *filterHighlightSig; // @synthesize filterHighlightSig=_filterHighlightSig;
@property(readonly, nonatomic) _Bool needLightenFilter; // @synthesize needLightenFilter=_needLightenFilter;
@property(nonatomic) _Bool hasFilter; // @synthesize hasFilter=_hasFilter;
@property(nonatomic) _Bool hasStyle; // @synthesize hasStyle=_hasStyle;
@property(retain, nonatomic) NSArray *topBarItems; // @synthesize topBarItems=_topBarItems;
- (void).cxx_destruct;
- (void)turnLayoutStyle;
- (id)initWithSearchService:(id)arg1;

@end

