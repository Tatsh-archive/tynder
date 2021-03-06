//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQTTSession, NSArray, NSData, NSError, NSString;

@protocol MQTTSessionDelegate <NSObject>
- (void)handleEvent:(MQTTSession *)arg1 event:(int)arg2 error:(NSError *)arg3;
- (void)newMessage:(MQTTSession *)arg1 data:(NSData *)arg2 onTopic:(NSString *)arg3 qos:(int)arg4 retained:(BOOL)arg5 mid:(unsigned int)arg6;

@optional
- (void)buffered:(MQTTSession *)arg1 queued:(unsigned int)arg2 flowingIn:(unsigned int)arg3 flowingOut:(unsigned int)arg4;
- (void)messageDelivered:(MQTTSession *)arg1 msgID:(unsigned short)arg2;
- (void)received:(int)arg1 qos:(int)arg2 retained:(BOOL)arg3 duped:(BOOL)arg4 mid:(unsigned short)arg5 data:(NSData *)arg6;
- (void)sending:(int)arg1 qos:(int)arg2 retained:(BOOL)arg3 duped:(BOOL)arg4 mid:(unsigned short)arg5 data:(NSData *)arg6;
- (void)subAckReceived:(MQTTSession *)arg1 msgID:(unsigned short)arg2 grantedQoss:(NSArray *)arg3;
- (void)unsubAckReceived:(MQTTSession *)arg1 msgID:(unsigned short)arg2;
@end

