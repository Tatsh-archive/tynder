//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSURLConnectionDataDelegate.h"
#import "SDWebImageOperation.h"

@class NSMutableData, NSString, NSThread, NSURLConnection, NSURLCredential, NSURLRequest;

@interface SDWebImageDownloaderOperation : NSOperation <NSURLConnectionDataDelegate, SDWebImageOperation>
{
    unsigned long width;
    unsigned long height;
    int orientation;
    BOOL responseFromCached;
    BOOL _executing;
    BOOL _finished;
    BOOL _shouldUseCredentialStorage;
    NSURLRequest *_request;
    NSURLCredential *_credential;
    unsigned int _options;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _cancelBlock;
    int _expectedSize;
    NSMutableData *_imageData;
    NSURLConnection *_connection;
    NSThread *_thread;
    unsigned int _backgroundTaskId;
}

+ (int)orientationFromPropertyValue:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)cancelInternal;
- (void)cancelInternalAndStop;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
- (void)done;
@property(nonatomic) int expectedSize; // @synthesize expectedSize=_expectedSize;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
- (id)initWithRequest:(id)arg1 options:(unsigned int)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4 cancelled:(CDUnknownBlockType)arg5;
- (BOOL)isConcurrent;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)reset;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
@property(nonatomic) BOOL shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
- (BOOL)shouldContinueWhenAppEntersBackground;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
