//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCRenderCommand.h"

@class NSString;

@interface CCRenderCommandCustom : NSObject <CCRenderCommand>
{
    CDUnknownBlockType _block;
    NSString *_debugLabel;
    int _globalSortOrder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int globalSortOrder;
- (id)initWithBlock:(CDUnknownBlockType)arg1 debugLabel:(id)arg2 globalSortOrder:(int)arg3;
- (void)invokeOnRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

