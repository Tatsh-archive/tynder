//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSString, TNDRFriendRequestID, TNDRMatch;

@interface _TNDRFriendRequest : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(readonly, nonatomic) TNDRFriendRequestID *objectID;

// Remaining properties
@property(retain, nonatomic) NSDate *created; // @dynamic created;
@property(retain, nonatomic) NSString *friendID; // @dynamic friendID;
@property(retain, nonatomic) NSString *friendRequestID; // @dynamic friendRequestID;
@property(retain, nonatomic) NSString *friendType; // @dynamic friendType;
@property(retain, nonatomic) TNDRMatch *match; // @dynamic match;
@property(retain, nonatomic) NSString *requested; // @dynamic requested;
@property(retain, nonatomic) NSString *requester; // @dynamic requester;

@end

