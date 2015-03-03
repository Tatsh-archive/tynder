//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCNode.h"

@interface CCControl : CCNode
{
    BOOL _needsLayout;
    BOOL _continuous;
    BOOL _tracking;
    BOOL _touchInside;
    unsigned int _state;
    CDUnknownBlockType _block;
    struct CGSize _preferredSize;
    struct CGSize _maxSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (struct CGSize)contentSize;
@property(nonatomic) BOOL continuous; // @synthesize continuous=_continuous;
- (unsigned int)controlStateFromString:(id)arg1;
@property(nonatomic) BOOL enabled;
@property(nonatomic) BOOL highlighted;
- (id)init;
- (void)layout;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) struct _CCSizeType maxSizeType;
- (void)needsLayout;
- (void)onEnter;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(nonatomic) struct _CCSizeType preferredSizeType;
@property(nonatomic) BOOL selected;
- (void)setContentSizeType:(struct _CCSizeType)arg1;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 state:(unsigned int)arg3;
- (void)stateChanged;
- (void)touchBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchEntered:(id)arg1 withEvent:(id)arg2;
- (void)touchExited:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) BOOL touchInside; // @synthesize touchInside=_touchInside;
- (void)touchMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchUpInside:(id)arg1 withEvent:(id)arg2;
- (void)touchUpOutside:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) BOOL tracking; // @synthesize tracking=_tracking;
- (void)triggerAction;
- (id)valueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 state:(unsigned int)arg2;
- (void)visit:(id)arg1 parentTransform:(const union _GLKMatrix4 *)arg2;

@end

