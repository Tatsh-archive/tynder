//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface _BKObserver : NSObject
{
    BOOL _isObserving;
    id _observee;
    NSMutableArray *_keyPaths;
    id _task;
    int _context;
}

- (void).cxx_destruct;
- (void)_stopObservingLocked;
@property(readonly, nonatomic) int context; // @synthesize context=_context;
- (void)dealloc;
- (id)initWithObservee:(id)arg1 keyPaths:(id)arg2 context:(int)arg3 task:(id)arg4;
@property(readonly, nonatomic) NSMutableArray *keyPaths; // @synthesize keyPaths=_keyPaths;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) id observee; // @synthesize observee=_observee;
- (void)startObservingWithOptions:(unsigned int)arg1;
- (void)stopObserving;
- (void)stopObservingKeyPath:(id)arg1;
@property(readonly, nonatomic) id task; // @synthesize task=_task;

@end

