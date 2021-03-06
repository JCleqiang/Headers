//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTIMChatMessage.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSMutableDictionary, NSString, NSValue, UIImage;
@protocol TTIMMessageSendStateDelegate;

@interface TTIMMessage : TTIMChatMessage <NSCopying>
{
    _Bool _uploadOriginalPhoto;
    _Bool _shouldShowCellAnimation;
    NSDate *_sendDate;
    id <TTIMMessageSendStateDelegate> _delegate;
    long long _sendState;
    double _sendProgress;
    long long _messageType;
    long long _messageSubtype;
    NSString *_msgText;
    NSString *_msgTextContentRichSpans;
    UIImage *_thumbImage;
    UIImage *_tempLocalSelectedImage;
    NSString *_localCameraImageURL;
    id _assert;
    NSString *_assertIdentifier;
    NSString *_imageServerURL;
    NSString *_videoId;
    NSString *_localVideoPath;
    NSString *_magicExpressionName;
    NSString *_formattedSendDate;
    NSString *_avatarImageURL;
    NSMutableDictionary *_cellTextSizeCacheDict;
    struct CGSize _imageOriginSize;
}

+ (void)sendPromptMessageWithText:(id)arg1 toUser:(id)arg2;
+ (_Bool)isSupportedMessageType:(int)arg1;
+ (id)promptTextOfWelcomeMessage;
+ (id)promptTextOfUnsupportedMessage;
+ (id)promptTextOfFailedMessageWithErrorCode:(int)arg1;
@property(retain, nonatomic) NSMutableDictionary *cellTextSizeCacheDict; // @synthesize cellTextSizeCacheDict=_cellTextSizeCacheDict;
@property(copy, nonatomic) NSString *avatarImageURL; // @synthesize avatarImageURL=_avatarImageURL;
@property(nonatomic) _Bool shouldShowCellAnimation; // @synthesize shouldShowCellAnimation=_shouldShowCellAnimation;
@property(copy, nonatomic) NSString *formattedSendDate; // @synthesize formattedSendDate=_formattedSendDate;
@property(copy, nonatomic) NSString *magicExpressionName; // @synthesize magicExpressionName=_magicExpressionName;
@property(copy, nonatomic) NSString *localVideoPath; // @synthesize localVideoPath=_localVideoPath;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *imageServerURL; // @synthesize imageServerURL=_imageServerURL;
@property(nonatomic) struct CGSize imageOriginSize; // @synthesize imageOriginSize=_imageOriginSize;
@property(copy, nonatomic) NSString *assertIdentifier; // @synthesize assertIdentifier=_assertIdentifier;
@property(retain, nonatomic) id assert; // @synthesize assert=_assert;
@property(nonatomic) _Bool uploadOriginalPhoto; // @synthesize uploadOriginalPhoto=_uploadOriginalPhoto;
@property(copy, nonatomic) NSString *localCameraImageURL; // @synthesize localCameraImageURL=_localCameraImageURL;
@property(retain, nonatomic) UIImage *tempLocalSelectedImage; // @synthesize tempLocalSelectedImage=_tempLocalSelectedImage;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *msgTextContentRichSpans; // @synthesize msgTextContentRichSpans=_msgTextContentRichSpans;
@property(copy, nonatomic) NSString *msgText; // @synthesize msgText=_msgText;
@property(nonatomic) long long messageSubtype; // @synthesize messageSubtype=_messageSubtype;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) double sendProgress; // @synthesize sendProgress=_sendProgress;
@property(nonatomic) long long sendState; // @synthesize sendState=_sendState;
@property(nonatomic) __weak id <TTIMMessageSendStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg1;
@property(retain, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
- (void)parseMessageExtraInfo:(id)arg1;
- (void)generateMessageExtraInfo;
- (void)parseMessageContent:(id)arg1;
- (void)generateMessageContent;
@property(retain, nonatomic) NSValue *cachedTextSize;
- (_Bool)checkMessageValidity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithChatMessage:(id)arg1;

@end

