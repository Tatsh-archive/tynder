//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBKVOController, TNDRPassportMapSearchCoordinateViewModel;

@interface TNDRPassportMapAnnotationLookup : NSObject
{
    TNDRPassportMapSearchCoordinateViewModel *_mapSearchViewModel;
    FBKVOController *_KVOController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
- (id)init;
@property(retain, nonatomic) TNDRPassportMapSearchCoordinateViewModel *mapSearchViewModel; // @synthesize mapSearchViewModel=_mapSearchViewModel;
- (void)requestAnnotationForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

