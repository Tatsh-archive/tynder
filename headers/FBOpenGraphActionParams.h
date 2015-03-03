//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBDialogsParams.h"

@class FBAppBridgeScheme, NSString;

@interface FBOpenGraphActionParams : FBDialogsParams
{
    id <FBOpenGraphAction> _action;
    NSString *_previewPropertyName;
    NSString *_actionType;
    FBAppBridgeScheme *_bridgeScheme;
}

+ (id)getIdOrUrlFromObject:(id)arg1;
+ (id)getPostedObjectTypeFromObject:(id)arg1;
+ (id)methodName;
@property(retain, nonatomic) id <FBOpenGraphAction> action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) FBAppBridgeScheme *bridgeScheme; // @synthesize bridgeScheme=_bridgeScheme;
- (BOOL)containsUIImages:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryMethodArgs;
- (id)flattenGraphObjects:(id)arg1;
- (id)flattenObject:(id)arg1;
- (id)initWithAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3;
@property(copy, nonatomic) NSString *previewPropertyName; // @synthesize previewPropertyName=_previewPropertyName;
- (id)validate;

@end

