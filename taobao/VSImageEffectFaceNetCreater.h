//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliNNFaceDetectionNet;

@interface VSImageEffectFaceNetCreater : NSObject
{
    _Bool _isFetching;
    AliNNFaceDetectionNet *_faceNet;
}

@property(retain, nonatomic) AliNNFaceDetectionNet *faceNet; // @synthesize faceNet=_faceNet;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
- (void).cxx_destruct;
- (void)createFaceNetWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asynCreateFaceNetCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
