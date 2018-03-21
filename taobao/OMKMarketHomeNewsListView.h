//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMMarketHomeListView.h"

@class NSCache, OMKRangerTableViewCell;

@interface OMKMarketHomeNewsListView : GDMMarketHomeListView
{
    unsigned long long _cellNumberPerRow;
    NSCache *_imageCache;
    OMKRangerTableViewCell *_cellview;
    _Bool _isUseAB;
}

- (void).cxx_destruct;
- (void)updateCellZanStateWithCellView:(id)arg1 item:(id)arg2;
- (void)onLikeCallBackWithItem:(id)arg1 cellView:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)less8_0_height;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 interestItem:(id)arg2;
- (void)onCellClickAtIndex:(unsigned long long)arg1 clickView:(id)arg2 clickKey:(id)arg3;
- (void)updateCellView:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)listItemAtIndex:(unsigned long long)arg1;
- (id)imageFromCacheWithUrl:(id)arg1;
- (void)setImageCache:(id)arg1 forKey:(id)arg2;
- (void)setImageForImageView:(id)arg1 imageUrl:(id)arg2 cacheKey:(id)arg3;
- (id)bodyClassName;
- (id)cellHtmlPath;
- (id)cellCssPath;

@end
