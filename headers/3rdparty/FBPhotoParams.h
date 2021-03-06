//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBDialogsParams.h"

@class NSArray;

@interface FBPhotoParams : FBDialogsParams
{
    BOOL _dataFailuresFatal;
    NSArray *_friends;
    id _place;
    NSArray *_photos;
}

+ (id)methodName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL dataFailuresFatal; // @synthesize dataFailuresFatal=_dataFailuresFatal;
- (void)dealloc;
- (id)dictionaryMethodArgs;
@property(copy, nonatomic) NSArray *friends; // @synthesize friends=_friends;
- (id)initWithPhotos:(id)arg1;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) id place; // @synthesize place=_place;
- (id)validate;

@end

