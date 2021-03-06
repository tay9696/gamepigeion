//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSMutableArray, NSString;

@interface GameRequestsSendArgs : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    NSString *requestType;
    NSMutableArray *requestData;
    NSMutableArray *requestRecipients;
}

+ (id)gameRequestsSendArgsWithRequestType:(id)arg1 requestData:(id)arg2 requestRecipients:(id)arg3;
@property(retain) NSMutableArray *requestRecipients; // @synthesize requestRecipients;
@property(retain) NSMutableArray *requestData; // @synthesize requestData;
@property(retain) NSString *requestType; // @synthesize requestType;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithRequestType:(id)arg1 requestData:(id)arg2 requestRecipients:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

