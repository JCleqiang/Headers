//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBXSearchService;

@interface TBXSearchCellFactory : NSObject
{
    TBXSearchService *_searchService;
}

@property(retain, nonatomic) TBXSearchService *searchService; // @synthesize searchService=_searchService;
- (void).cxx_destruct;
- (id)getCellClassString:(id)arg1;
- (Class)cellClassWithModel:(id)arg1;
- (id)allCellClasses;
- (id)init;

@end
