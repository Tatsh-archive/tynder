//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString, TNDRActiveUserPhotoID, TNDRPopularLocation;

@interface _TNDRActiveUserPhoto : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(readonly, nonatomic) TNDRActiveUserPhotoID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) TNDRPopularLocation *popularLocation; // @dynamic popularLocation;

@end

