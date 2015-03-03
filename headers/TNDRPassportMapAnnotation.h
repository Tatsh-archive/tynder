//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class CLLocation, MKMapItem, MKPlacemark, NSString;

@interface TNDRPassportMapAnnotation : NSObject <MKAnnotation>
{
    CDStruct_2c43369c _coordinate;
    BOOL _receivedUpdatedInfo;
    MKPlacemark *_placemark;
    MKMapItem *_mapItem;
    CLLocation *_location;
    NSString *_name;
    NSString *_title;
    NSString *_subtitle;
}

+ (id)annotationForLocation:(id)arg1;
+ (id)annotationForLocation:(id)arg1 name:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
+ (id)annotationForLocation:(id)arg1 placemark:(id)arg2 mapItem:(id)arg3;
+ (id)annotationForLocation:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void).cxx_destruct;
- (void)_setupTitles;
@property(readonly, copy, nonatomic) NSString *addressString;
@property(readonly, nonatomic) CDStruct_2c43369c coordinate;
@property(readonly, copy, nonatomic) NSString *gotoLocation;
- (id)initForLocation:(id)arg1 name:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 placemark:(id)arg2 mapItem:(id)arg3;
@property(readonly, copy, nonatomic) NSString *landmarkName;
@property(readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *locationName;
@property(readonly, copy, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *placeName;
@property(readonly, copy, nonatomic) MKPlacemark *placemark; // @synthesize placemark=_placemark;
@property(nonatomic) BOOL receivedUpdatedInfo; // @synthesize receivedUpdatedInfo=_receivedUpdatedInfo;
- (void)requestLocationInfoWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
