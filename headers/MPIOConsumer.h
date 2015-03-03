//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPIOConsumer : NSObject
{
    CDUnknownBlockType _scanner;
    CDUnknownBlockType _handler;
    unsigned long _bytesNeeded;
    BOOL _readToCurrentFrame;
    BOOL _unmaskBytes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long bytesNeeded; // @synthesize bytesNeeded=_bytesNeeded;
@property(readonly, copy, nonatomic) CDUnknownBlockType consumer; // @synthesize consumer=_scanner;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) BOOL readToCurrentFrame; // @synthesize readToCurrentFrame=_readToCurrentFrame;
- (void)setupWithScanner:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 bytesNeeded:(unsigned long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5;
@property(readonly, nonatomic) BOOL unmaskBytes; // @synthesize unmaskBytes=_unmaskBytes;

@end

