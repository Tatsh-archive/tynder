//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCSchedulerTarget.h"

@class NSString;

@interface CCActionManager : NSObject <CCSchedulerTarget>
{
    struct _hashElement *targets;
    struct _hashElement *currentTarget;
    BOOL currentTargetSalvaged;
}

- (void)actionAllocWithHashElement:(struct _hashElement *)arg1;
- (void)addAction:(id)arg1 target:(id)arg2 paused:(BOOL)arg3;
- (void)dealloc;
- (void)deleteHashElement:(struct _hashElement *)arg1;
@property(readonly, copy) NSString *description;
- (id)getActionByTag:(int)arg1 target:(id)arg2;
- (id)init;
- (void)migrateActions:(id)arg1 from:(id)arg2;
- (unsigned int)numberOfRunningActionsInTarget:(id)arg1;
- (id)pauseAllRunningActions;
- (void)pauseTarget:(id)arg1;
@property(readonly, nonatomic) int priority;
- (void)removeAction:(id)arg1;
- (void)removeActionAtIndex:(unsigned int)arg1 hashElement:(struct _hashElement *)arg2;
- (void)removeActionByTag:(int)arg1 target:(id)arg2;
- (void)removeAllActions;
- (void)removeAllActionsFromTarget:(id)arg1;
- (void)resumeTarget:(id)arg1;
- (void)resumeTargets:(id)arg1;
- (void)update:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
