//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CLSEventLogEvent : NSObject
{
    unsigned int _priority;
    unsigned long long _timestamp;
    NSString *_key;
    NSData *_payload;
}

- (void)dealloc;
- (id)eventData;
- (unsigned int)hash;
- (id)initWithPriority:(unsigned int)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3;
- (id)initWithPriority:(unsigned int)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 payload:(id)arg4;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

@end

