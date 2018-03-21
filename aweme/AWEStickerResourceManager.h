//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEResourceBaseManager.h"

@class NSArray, NSURL;

@interface AWEStickerResourceManager : AWEResourceBaseManager
{
    NSURL *_coverMarkImgURL;
    NSURL *_coverImgURL;
    NSArray *_recordStickersNew;
    NSArray *_liveStickers;
    NSArray *_arModelArray;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSArray *arModelArray; // @synthesize arModelArray=_arModelArray;
@property(copy, nonatomic) NSArray *liveStickers; // @synthesize liveStickers=_liveStickers;
@property(copy, nonatomic) NSArray *recordStickersNew; // @synthesize recordStickersNew=_recordStickersNew;
@property(retain, nonatomic) NSURL *coverImgURL; // @synthesize coverImgURL=_coverImgURL;
@property(retain, nonatomic) NSURL *coverMarkImgURL; // @synthesize coverMarkImgURL=_coverMarkImgURL;
- (void).cxx_destruct;
- (_Bool)shouldShowStickerBtnMarkImg;
- (void)clearStickerCache;
- (id)getARModelArray;
- (id)getLiveStickerItmes;
- (id)getRecordStickerItmes;
- (void)downloadStickerResourceWithItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isFileExistAtPath:(id)arg1;
- (void)deleteStickerResource:(id)arg1;
- (_Bool)isStickerExistInLocal:(id)arg1;
- (id)auctualDecompressedResourcePathForItem:(id)arg1;
- (void)fetchStickerItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)getLiveStickersFrom:(id)arg1;
- (id)getRecordStickersFrom:(id)arg1;
- (id)fileterStickersFrom:(id)arg1 withFileterBlock:(CDUnknownBlockType)arg2;

@end
