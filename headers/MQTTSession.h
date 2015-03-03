//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQTTDecoderDelegate.h"
#import "MQTTEncoderDelegate.h"

@class MQTTDecoder, MQTTEncoder, MQTTMessage, NSData, NSMutableArray, NSMutableDictionary, NSRunLoop, NSString, NSTimer;

@interface MQTTSession : NSObject <MQTTDecoderDelegate, MQTTEncoderDelegate>
{
    BOOL _cleanSessionFlag;
    BOOL _willFlag;
    unsigned char _willQoS;
    BOOL _willRetainFlag;
    unsigned char _protocolLevel;
    unsigned short _keepAliveInterval;
    unsigned short _txMsgId;
    id <MQTTSessionDelegate> _delegate;
    int _status;
    NSString *_clientId;
    NSString *_userName;
    NSString *_password;
    NSString *_willTopic;
    NSData *_willMsg;
    NSRunLoop *_runLoop;
    NSString *_runLoopMode;
    MQTTMessage *_connectMessage;
    NSTimer *_keepAliveTimer;
    MQTTEncoder *_encoder;
    MQTTDecoder *_decoder;
    NSMutableDictionary *_txFlows;
    NSMutableDictionary *_rxFlows;
    NSMutableArray *_queue;
}

- (void).cxx_destruct;
- (void)checkTxFlows;
@property(nonatomic) BOOL cleanSessionFlag; // @synthesize cleanSessionFlag=_cleanSessionFlag;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void)close;
- (void)closeInternal;
@property(retain, nonatomic) MQTTMessage *connectMessage; // @synthesize connectMessage=_connectMessage;
- (void)connectToHost:(id)arg1 port:(unsigned long)arg2 usingSSL:(BOOL)arg3;
@property(retain, nonatomic) MQTTDecoder *decoder; // @synthesize decoder=_decoder;
- (void)decoder:(id)arg1 handleEvent:(int)arg2 error:(id)arg3;
- (void)decoder:(id)arg1 newMessage:(id)arg2;
@property(nonatomic) __weak id <MQTTSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MQTTEncoder *encoder; // @synthesize encoder=_encoder;
- (void)encoder:(id)arg1 handleEvent:(int)arg2 error:(id)arg3;
- (void)encoder:(id)arg1 sending:(int)arg2 qos:(int)arg3 retained:(BOOL)arg4 duped:(BOOL)arg5 mid:(unsigned short)arg6 data:(id)arg7;
- (void)error:(int)arg1 error:(id)arg2;
- (void)handlePuback:(id)arg1;
- (void)handlePubcomp:(id)arg1;
- (void)handlePublish:(id)arg1;
- (void)handlePubrec:(id)arg1;
- (void)handlePubrel:(id)arg1;
- (void)handleSuback:(id)arg1;
- (void)handleUnsuback:(id)arg1;
- (id)init;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(unsigned short)arg4 cleanSession:(BOOL)arg5 will:(BOOL)arg6 willTopic:(id)arg7 willMsg:(id)arg8 willQoS:(unsigned char)arg9 willRetainFlag:(BOOL)arg10 protocolLevel:(unsigned char)arg11 runLoop:(id)arg12 forMode:(id)arg13;
- (void)keepAlive:(id)arg1;
@property(nonatomic) unsigned short keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property(retain, nonatomic) NSTimer *keepAliveTimer; // @synthesize keepAliveTimer=_keepAliveTimer;
- (unsigned short)nextMsgId;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) unsigned char protocolLevel; // @synthesize protocolLevel=_protocolLevel;
- (unsigned short)publishData:(id)arg1 onTopic:(id)arg2 retain:(BOOL)arg3 qos:(int)arg4;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void)resetWithClientID:(id)arg1;
- (void)resetWithUserName:(id)arg1;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(retain, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(retain, nonatomic) NSMutableDictionary *rxFlows; // @synthesize rxFlows=_rxFlows;
- (void)send:(id)arg1;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableDictionary *txFlows; // @synthesize txFlows=_txFlows;
@property(nonatomic) unsigned short txMsgId; // @synthesize txMsgId=_txMsgId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) BOOL willFlag; // @synthesize willFlag=_willFlag;
@property(retain, nonatomic) NSData *willMsg; // @synthesize willMsg=_willMsg;
@property(nonatomic) unsigned char willQoS; // @synthesize willQoS=_willQoS;
@property(nonatomic) BOOL willRetainFlag; // @synthesize willRetainFlag=_willRetainFlag;
@property(retain, nonatomic) NSString *willTopic; // @synthesize willTopic=_willTopic;
- (unsigned short)subscribeToTopic:(id)arg1 atLevel:(unsigned char)arg2;
- (unsigned short)subscribeToTopics:(id)arg1;
- (unsigned short)unsubscribeTopic:(id)arg1;
- (unsigned short)unsubscribeTopics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

