//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPObjectIdentityProvider, MPObjectSerializerConfig;

@interface MPObjectSerializer : NSObject
{
    MPObjectSerializerConfig *_configuration;
    MPObjectIdentityProvider *_objectIdentityProvider;
}

- (void).cxx_destruct;
- (id)allValuesForType:(id)arg1;
- (id)classDescriptionForObject:(id)arg1;
- (id)classHierarchyArrayForObject:(id)arg1;
- (id)initWithConfiguration:(id)arg1 objectIdentityProvider:(id)arg2;
- (id)instanceVariableValueForObject:(id)arg1 propertyDescription:(id)arg2;
- (id)invocationForObject:(id)arg1 withSelectorDescription:(id)arg2;
- (BOOL)isNestedObjectType:(id)arg1;
- (id)parameterVariationsForPropertySelector:(id)arg1;
- (id)propertyValue:(id)arg1 propertyDescription:(id)arg2 context:(id)arg3;
- (id)propertyValueForObject:(id)arg1 withPropertyDescription:(id)arg2 context:(id)arg3;
- (id)serializedObjectsWithRootObject:(id)arg1;
- (void)visitObject:(id)arg1 withContext:(id)arg2;

@end

