//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, PSWebSocket;

@protocol PSWebSocketDelegate <NSObject>
- (void)webSocket:(PSWebSocket *)arg1 didCloseWithCode:(long long)arg2 reason:(NSString *)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(PSWebSocket *)arg1 didReceiveMessage:(id)arg2;
- (void)webSocket:(PSWebSocket *)arg1 didFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(PSWebSocket *)arg1;

@optional
- (_Bool)webSocket:(PSWebSocket *)arg1 evaluateServerTrust:(struct __SecTrust *)arg2;
- (void)webSocketDidFlushOutput:(PSWebSocket *)arg1;
- (void)webSocketDidFlushInput:(PSWebSocket *)arg1;
@end

