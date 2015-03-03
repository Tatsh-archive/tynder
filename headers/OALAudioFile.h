//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface OALAudioFile : NSObject
{
    NSURL *url;
    _Bool reduceToMono;
    long long totalFrames;
    struct AudioStreamBasicDescription streamDescription;
    struct OpaqueExtAudioFile *fileHandle;
    unsigned long originalChannelsPerFrame;
}

+ (id)bufferFromUrl:(id)arg1 reduceToMono:(_Bool)arg2;
+ (id)fileWithUrl:(id)arg1 reduceToMono:(_Bool)arg2;
- (void).cxx_destruct;
- (void *)audioDataWithStartFrame:(long long)arg1 numFrames:(long long)arg2 bufferSize:(unsigned int *)arg3;
- (id)bufferNamed:(id)arg1 startFrame:(long long)arg2 numFrames:(long long)arg3;
- (void)dealloc;
- (id)description;
- (id)initWithUrl:(id)arg1 reduceToMono:(_Bool)arg2;
@property(nonatomic) _Bool reduceToMono;
@property(readonly, nonatomic) struct AudioStreamBasicDescription *streamDescription;
@property(readonly, nonatomic) long long totalFrames; // @synthesize totalFrames;
@property(readonly, retain, nonatomic) NSURL *url; // @synthesize url;

@end

