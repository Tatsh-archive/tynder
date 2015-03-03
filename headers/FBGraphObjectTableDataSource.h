//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSArray, NSDictionary, NSMutableSet, NSString, UIImage, UILocalizedIndexedCollation;

@interface FBGraphObjectTableDataSource : NSObject <UITableViewDataSource>
{
    BOOL _useCollation;
    BOOL _itemTitleSuffixEnabled;
    BOOL _itemPicturesEnabled;
    BOOL _itemSubtitleEnabled;
    BOOL _expectingMoreGraphObjects;
    BOOL _showSections;
    UIImage *_defaultPicture;
    id <FBGraphObjectViewControllerDelegate> _controllerDelegate;
    NSString *_groupByField;
    id <FBGraphObjectSelectionQueryDelegate> _selectionDelegate;
    id <FBGraphObjectDataSourceDataNeededDelegate> _dataNeededDelegate;
    NSArray *_sortDescriptors;
    NSArray *_data;
    NSArray *_indexKeys;
    NSDictionary *_indexMap;
    NSMutableSet *_pendingURLConnections;
    UILocalizedIndexedCollation *_collation;
}

- (void)addOrRemovePendingConnection:(id)arg1;
- (void)appendGraphObjects:(id)arg1;
- (void)bindTableView:(id)arg1;
- (void)cancelPendingRequests;
- (id)cellWithTableView:(id)arg1;
- (void)clearGraphObjects;
@property(retain, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(nonatomic) id <FBGraphObjectViewControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) id <FBGraphObjectDataSourceDataNeededDelegate> dataNeededDelegate; // @synthesize dataNeededDelegate=_dataNeededDelegate;
- (void)dealloc;
@property(retain, nonatomic) UIImage *defaultPicture; // @synthesize defaultPicture=_defaultPicture;
@property(nonatomic) BOOL expectingMoreGraphObjects; // @synthesize expectingMoreGraphObjects=_expectingMoreGraphObjects;
- (id)fieldsForRequestIncluding:(id)arg1;
- (BOOL)filterIncludesItem:(id)arg1;
@property(copy, nonatomic) NSString *groupByField; // @synthesize groupByField=_groupByField;
- (BOOL)hasGraphObjects;
- (id)indexKeyOfItem:(id)arg1;
@property(retain, nonatomic) NSArray *indexKeys; // @synthesize indexKeys=_indexKeys;
@property(retain, nonatomic) NSDictionary *indexMap; // @synthesize indexMap=_indexMap;
- (id)indexPathForItem:(id)arg1;
- (id)init;
- (BOOL)isActivityIndicatorIndexPath:(id)arg1;
- (BOOL)isLastSection:(int)arg1;
- (id)itemAtIndexPath:(id)arg1;
@property(nonatomic) BOOL itemPicturesEnabled; // @synthesize itemPicturesEnabled=_itemPicturesEnabled;
@property(nonatomic) BOOL itemSubtitleEnabled; // @synthesize itemSubtitleEnabled=_itemSubtitleEnabled;
@property(nonatomic) BOOL itemTitleSuffixEnabled; // @synthesize itemTitleSuffixEnabled=_itemTitleSuffixEnabled;
- (int)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSMutableSet *pendingURLConnections; // @synthesize pendingURLConnections=_pendingURLConnections;
- (void)prepareForNewRequest;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sectionItemsForSection:(int)arg1;
@property(nonatomic) id <FBGraphObjectSelectionQueryDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) BOOL showSections; // @synthesize showSections=_showSections;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (void)setSortingByFields:(id)arg1 ascending:(BOOL)arg2;
- (void)setSortingBySingleField:(id)arg1 ascending:(BOOL)arg2;
@property(nonatomic) BOOL useCollation; // @synthesize useCollation=_useCollation;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 imageForItem:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)titleForSection:(int)arg1;
- (void)update;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

