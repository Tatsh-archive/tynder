//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABRefInitialization.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface ABMultiValue : NSObject <ABRefInitialization, NSCopying, NSMutableCopying>
{
    void *_ref;
}

- (id)allValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int count;
- (void)dealloc;
@property(readonly, nonatomic, getter=getMultiValueRef) void *multiValueRef; // @synthesize multiValueRef=_ref;
- (int)identifierAtIndex:(unsigned int)arg1;
- (unsigned int)indexForIdentifier:(int)arg1;
- (unsigned int)indexOfValue:(id)arg1;
- (id)initWithABRef:(void *)arg1;
- (id)labelAtIndex:(unsigned int)arg1;
- (id)localizedLabelAtIndex:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int propertyType;
- (id)valueAtIndex:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

