//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFTask;

@interface BFTaskCompletionSource : NSObject
{
    BFTask *_task;
}

+ (id)taskCompletionSource;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)setError:(id)arg1;
- (void)setException:(id)arg1;
- (void)setResult:(id)arg1;
@property(retain, nonatomic) BFTask *task; // @synthesize task=_task;
- (BOOL)trySetCancelled;
- (BOOL)trySetError:(id)arg1;
- (BOOL)trySetException:(id)arg1;
- (BOOL)trySetResult:(id)arg1;

@end

