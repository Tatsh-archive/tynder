//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TNDRPassportLocationsListViewModel : NSObject
{
    NSArray *_locations;
}

- (void).cxx_destruct;
- (BOOL)_isStaticCellAtIndexPath:(id)arg1;
- (int)accessoryTypeForIndexPath:(id)arg1;
- (id)cellIdentifierForIndexPath:(id)arg1;
- (int)cellStyleForIndexPath:(id)arg1;
- (id)initWithLocations:(id)arg1;
- (CDStruct_2c43369c)locationCoordinatesForIndexPath:(id)arg1;
- (id)locationDetailTextAtIndexPath:(id)arg1;
- (id)locationForIndexPath:(id)arg1;
- (id)locationIconAtIndexPath:(id)arg1;
- (id)locationTitleTextAtIndexPath:(id)arg1;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (int)numberOfMyLocations;

@end

