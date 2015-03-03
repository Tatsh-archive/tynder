//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMKMockHTTPResponder.h"

@interface UMKMockHTTPResponseResponder : UMKMockHTTPResponder
{
    int _statusCode;
    unsigned int _chunkCountHint;
    double _delayBetweenChunks;
}

@property(readonly, nonatomic) unsigned int chunkCountHint; // @synthesize chunkCountHint=_chunkCountHint;
@property(readonly, nonatomic) double delayBetweenChunks; // @synthesize delayBetweenChunks=_delayBetweenChunks;
- (id)description;
- (id)initWithStatusCode:(int)arg1 headers:(id)arg2 body:(id)arg3 chunkCountHint:(unsigned int)arg4 delayBetweenChunks:(double)arg5;
- (void)respondToMockRequest:(id)arg1 client:(id)arg2 protocol:(id)arg3;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;

@end

