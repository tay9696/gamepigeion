//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface PSWebSocketBuffer : NSObject
{
    NSMutableData *_data;
    long long _offset;
    unsigned long long _compactionLength;
}

@property(nonatomic) unsigned long long compactionLength; // @synthesize compactionLength=_compactionLength;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)data;
- (void *)mutableBytes;
- (const void *)bytes;
- (void)reset;
- (void)compact;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)appendData:(id)arg1;
- (unsigned long long)bytesAvailable;
- (_Bool)hasBytesAvailable;
- (id)init;

@end
