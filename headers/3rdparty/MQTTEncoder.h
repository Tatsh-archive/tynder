//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSMutableData, NSOutputStream, NSRunLoop, NSString;

@interface MQTTEncoder : NSObject <NSStreamDelegate>
{
    int _status;
    NSOutputStream *_stream;
    NSRunLoop *_runLoop;
    NSString *_runLoopMode;
    NSMutableData *_buffer;
    int _byteIndex;
    id <MQTTEncoderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) int byteIndex; // @synthesize byteIndex=_byteIndex;
- (void)close;
@property(nonatomic) __weak id <MQTTEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeMessage:(id)arg1;
- (id)initWithStream:(id)arg1 runLoop:(id)arg2 runLoopMode:(id)arg3;
- (void)open;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(retain, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSOutputStream *stream; // @synthesize stream=_stream;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
