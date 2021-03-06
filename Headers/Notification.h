//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSMutableArray, NSString;

@interface Notification : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    NSString *recipient;
    NSString *endpointType;
    NSMutableArray *oldKeyValueData;
    NSMutableArray *data;
}

+ (id)notificationWithRecipient:(id)arg1 endpointType:(id)arg2 oldKeyValueData:(id)arg3 data:(id)arg4;
@property(retain) NSMutableArray *data; // @synthesize data;
@property(retain) NSMutableArray *oldKeyValueData; // @synthesize oldKeyValueData;
@property(retain) NSString *endpointType; // @synthesize endpointType;
@property(retain) NSString *recipient; // @synthesize recipient;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithRecipient:(id)arg1 endpointType:(id)arg2 oldKeyValueData:(id)arg3 data:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

