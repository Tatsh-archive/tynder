//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OALAction.h"

@interface OALTargetedAction : OALAction
{
    OALAction *action_;
    id forcedTarget_;
}

+ (id)actionWithTarget:(id)arg1 action:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) OALAction *action; // @synthesize action=action_;
- (void)dealloc;
@property(nonatomic) id forcedTarget; // @synthesize forcedTarget=forcedTarget_;
- (id)initWithTarget:(id)arg1 action:(id)arg2;
- (void)prepareWithTarget:(id)arg1;
- (void)startAction;
- (void)stopAction;
- (void)updateCompletion:(float)arg1;

@end

