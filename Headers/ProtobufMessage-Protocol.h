//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ProtobufReader, ProtobufWriter;

@protocol ProtobufMessage <NSObject>
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(ProtobufReader *)arg1;
- (void)serializeToWriter:(ProtobufWriter *)arg1 sizeCacheId:(int)arg2;
@end
